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
                Vector3 spawnPos = new Vector3(-5f, 1.7f, -3f);

                character = BoltNetwork.Instantiate(BoltPrefabs.Player1, spawnPos, Quaternion.identity);
                character.TakeControl();
            }
            else
            {
                Vector3 spawnPos = new Vector3(5f, 1.7f, -3f);

                character = BoltNetwork.Instantiate(BoltPrefabs.Player2, spawnPos, Quaternion.identity);
                character.AssignControl(connection);
            }
        }
    }

    public void DestroyPlayer()
    {
        if (character)
            BoltNetwork.Destroy(character);
    }
}
