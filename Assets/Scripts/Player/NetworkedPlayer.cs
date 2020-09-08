using UnityEngine;

public class NetworkedPlayer
{
    public BoltEntity     character;
    public BoltConnection connection;

    public bool IsServer
    {
        get { return connection == null; }
    }

    public bool IsClient
    {
        get { return connection != null; }
    }

    public void Spawn()
    {
        if (!character)
        {
            if (IsServer)
            {
                character = BoltNetwork.Instantiate(BoltPrefabs.Player1);
                character.TakeControl();

                Player newPlayer = character.GetComponent<Player>();
                newPlayer.Respawn(0);
            }
            else
            {
                character = BoltNetwork.Instantiate(BoltPrefabs.Player2);
                character.AssignControl(connection);

                Player newPlayer = character.GetComponent<Player>();
                newPlayer.Respawn(1);
            }
        }
    }

    public void DestroyPlayer()
    {
        if (character)
            BoltNetwork.Destroy(character);
    }
}
