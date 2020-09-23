using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Bolt;

[BoltGlobalBehaviour(BoltNetworkModes.Server, "Gameplay")]
public class ServerCallbacks : Bolt.GlobalEventListener
{
    void Awake()
    {
        NetworkedPlayerRegistry.CreateServerPlayer();
    }

    public override void Connected(BoltConnection connection)
    {
        NetworkedPlayerRegistry.CreateClientPlayer(connection);
    }

    public override void SceneLoadLocalDone(string map)
    {
        MatchmakingPopup.instance.Show();
        NetworkedPlayerRegistry.ServerPlayer.Spawn();
    }

    public override void SceneLoadRemoteDone(BoltConnection connection)
    {
        MatchmakingPopup.instance.Show();
        NetworkedPlayerRegistry.GetNetworkedPlayer(connection).Spawn();
    }
}