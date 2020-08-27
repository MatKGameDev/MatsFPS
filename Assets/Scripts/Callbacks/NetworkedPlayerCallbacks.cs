using UnityEngine;

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

            GameUI.Instantiate();
            GameUI.instance.SetPlayer(playerMotor);
        }
    }

    public override void Disconnected(BoltConnection connection)
    {
        NetworkedPlayerRegistry.DestroyNetworkedPlayer(connection);
    }
}