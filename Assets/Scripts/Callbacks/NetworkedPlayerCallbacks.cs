using Bolt;
using UnityEngine;
using UnityEngine.SceneManagement;

[BoltGlobalBehaviour("Gameplay")]
public class NetworkedPlayerCallbacks : Bolt.GlobalEventListener
{
    public override void SceneLoadLocalDone(string map)
    {

    }

    public override void ControlOfEntityGained(BoltEntity entity)
    {
        NetworkedPlayerRegistry.UpdateNetworkedPlayersList();

        if (entity.TryGetComponent<PlayerMotor>(out var playerMotor))
        {
            GameState.instance.CurrentState = GameState.State.gameplay;

            playerMotor.OnControlGained();

            CameraControl cameraControl    = entity.GetComponent<PlayerController>().cameraController;
            cameraControl.mouseSensitivity = UserSettings.mouseSensitivity;

            Camera playerCamera      = playerMotor.mainCamera;
            playerCamera.fieldOfView = Camera.HorizontalToVerticalFieldOfView(UserSettings.fieldOfView, playerCamera.aspect);

            GameUI.Instantiate();
            GameUI.instance.SetPlayer(playerMotor);
        }
    }

    public override void Disconnected(BoltConnection connection)
    {
        NetworkedPlayerRegistry.DestroyNetworkedPlayer(connection);
        Debug.Log("DISCONNECTED");
    }

    public override void BoltShutdownBegin(AddCallback registerDoneCallback)
    {
        registerDoneCallback(() =>
        {
            SceneManager.LoadScene("MainMenu");
        });
    }

    public override void OnEvent(PlayerHitEvent evnt)
    {
        Player hitPlayer = NetworkedPlayerRegistry.GetPlayerFromPlayerNum(evnt.PlayerHitNum);        

        if (hitPlayer)
            hitPlayer.TakeDamage(evnt.DamageToInflict);
    }

    public override void OnEvent(PlayerDiedEvent evnt)
    {
        if (BoltNetwork.IsServer)
            Debug.Log("BEFORE SERVER");
        else
            Debug.Log("BEFORE CLIENT");
        foreach (NetworkedPlayer networkedPlayer in NetworkedPlayerRegistry.AllPlayers)
        {
            if (BoltNetwork.IsServer)
                Debug.Log("DURING SERVER");
            else
                Debug.Log("DURING CLIENT");

            Player player = networkedPlayer.character.GetComponent<Player>();

            if (!player)
                continue;

            if (evnt.DeadPlayerNum == player.playerNum)
                player.OnDie();
            else
                player.OnEnemyKilled();
        }
    }
}