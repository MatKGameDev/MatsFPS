using System.Collections.Generic;

public static class NetworkedPlayerRegistry
{
    // keeps a list of all the players
    static List<NetworkedPlayer> s_networkedPlayerList = new List<NetworkedPlayer>();

    // create a player for a connection
    // note: connection can be null
    static NetworkedPlayer CreatePlayer(BoltConnection connection)
    {
        NetworkedPlayer player;

        // create a new player object, assign the connection property
        // of the object to the connection was passed in
        player = new NetworkedPlayer();
        player.connection = connection;

        // if we have a connection, assign this player
        // as the user data for the connection so that we
        // always have an easy way to get the player object
        // for a connection
        if (player.connection != null)
        {
            player.connection.UserData = player;
        }

        // add to list of all players
        s_networkedPlayerList.Add(player);

        return player;
    }

    // this simply returns the 'players' list cast to
    // an IEnumerable<T> so that we hide the ability
    // to modify the player list from the outside.
    public static IEnumerable<NetworkedPlayer> AllPlayers
    {
        get { return s_networkedPlayerList; }
    }

    public static int NumPlayers
    {
        get { return s_networkedPlayerList.Count; }
    }

    // finds the server player by checking the
    // .IsServer property for every player object.
    public static NetworkedPlayer ServerPlayer
    {
        get { return s_networkedPlayerList.Find(player => player.IsServer); }
    }

    // utility function which creates a server player
    public static NetworkedPlayer CreateServerPlayer()
    {
        return CreatePlayer(null);
    }

    // utility that creates a client player object.
    public static NetworkedPlayer CreateClientPlayer(BoltConnection a_connection)
    {
        return CreatePlayer(a_connection);
    }

    // utility function which lets us pass in a
    // BoltConnection object (even a null) and have
    // it return the proper player object for it.
    public static NetworkedPlayer GetNetworkedPlayer(BoltConnection a_connection)
    {
        if (a_connection == null)
        {
            return ServerPlayer;
        }

        return (NetworkedPlayer)a_connection.UserData;
    }

    public static void DestroyNetworkedPlayer(BoltConnection a_connection)
    {
        NetworkedPlayer player = GetNetworkedPlayer(a_connection);

        if (player != null)
            player.DestroyPlayer();

        s_networkedPlayerList.Remove(player);
    }

    public static Player GetPlayerFromPlayerNum(int a_playerNum)
    {
        foreach (NetworkedPlayer networkedPlayer in s_networkedPlayerList)
        {
            Player player = networkedPlayer.character.GetComponent<Player>();

            if (!player)
                continue;

            if (a_playerNum == player.playerNum)
                return player;
        }

        return null;
    }

    public static void UpdateNetworkedPlayersList()
    {
        for (int i = 0; i < s_networkedPlayerList.Count; i++)
        {
            if (!s_networkedPlayerList[i].character)
            {
                s_networkedPlayerList.RemoveAt(i);
                i--;
            }
        }
    }
}