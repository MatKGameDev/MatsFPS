using Bolt;
using UnityEngine;
using UnityEngine.SceneManagement;

[BoltGlobalBehaviour("Gameplay")]
public class NetworkedPlayerCallbacks : Bolt.GlobalEventListener
{
    public override void SceneLoadLocalDone(string map)
    {
        if (BoltNetwork.IsClient)
        {
            var clientConnectedEvt = ClientConnectedEvent.Create(Bolt.GlobalTargets.Everyone, Bolt.ReliabilityModes.ReliableOrdered);

            clientConnectedEvt.Send();
        }
    }

    public override void ControlOfEntityGained(BoltEntity entity)
    {
        if (entity.TryGetComponent<PlayerMotor>(out var playerMotor))
        {
            NetworkedPlayerRegistry.UpdateNetworkedPlayersList();

            playerMotor.OnControlGained();
            playerMotor.IsInputDisabled = true;

            CameraControl cameraControl    = entity.GetComponent<PlayerController>().cameraController;
            cameraControl.mouseSensitivity = UserSettings.mouseSensitivity;

            Camera playerCamera      = playerMotor.mainCamera;
            playerCamera.fieldOfView = Camera.HorizontalToVerticalFieldOfView(UserSettings.fieldOfView, playerCamera.aspect);

            GameUI.Instantiate();
            GameUI.instance.SetPlayer(playerMotor.GetComponent<Player>());
        }
    }

    public override void Disconnected(BoltConnection connection)
    {
        NetworkedPlayerRegistry.DestroyNetworkedPlayer(connection);
    }

    public override void BoltShutdownBegin(AddCallback registerDoneCallback)
    {
        registerDoneCallback(() =>
        {
            SceneManager.LoadScene("MainMenu");
        });
    }

    public override void OnEvent(ClientConnectedEvent evnt)
    {
        GameState       .instance.CurrentState = GameState.State.gameplay;
        GameUI          .instance.OnGameStart();
        MatchmakingPopup.instance.Hide();
    }

    public override void OnEvent(PlayerHitEvent evnt)
    {
        Player hitPlayer = Player.GetPlayerFromPlayerNum(evnt.PlayerHitNum);        

        if (hitPlayer)
            hitPlayer.TakeDamage(evnt.DamageToInflict);
    }

    public override void OnEvent(PlayerDiedEvent evnt)
    {
        foreach (Player player in Player.s_playersList)
        {
            if (!player)
                continue;

            if (evnt.DeadPlayerNum == player.playerNum)
                player.OnDie();
            else
                player.OnEnemyKilled(evnt.DeathPosition);
        }
    }
}