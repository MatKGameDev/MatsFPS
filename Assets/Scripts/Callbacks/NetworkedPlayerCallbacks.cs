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
        if (entity.TryGetComponent<PlayerMotor>(out var playerMotor))
        {
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
        Player hitPlayer = null;

        //find the player that was hit
        var networkedPlayers = NetworkedPlayerRegistry.AllPlayers;
        foreach (NetworkedPlayer networkedPlayer in networkedPlayers)
        {
            Player player = networkedPlayer.character.GetComponent<Player>();

            if (evnt.PlayerHitNum == player.playerNum)
            {
                hitPlayer = player;
                break;
            }
        }

        if (hitPlayer)
            hitPlayer.TakeDamage(evnt.DamageToInflict);
    }
}