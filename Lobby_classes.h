// Class Lobby.LobbyBeaconClient
// Size: 0x338 (Inherited: 0x2b0)
struct ALobbyBeaconClient : AOnlineBeaconClient {
	struct ALobbyBeaconState* LobbyState; // 0x2b0(0x08)
	struct ALobbyBeaconPlayerState* PlayerState; // 0x2b8(0x08)
	char pad_2C0[0x1]; // 0x2c0(0x01)
	enum class ELobbyBeaconJoinState LobbyJoinServerState; // 0x2c1(0x01)
	char pad_2C2[0x76]; // 0x2c2(0x76)

	void ServerSetPartyOwner(struct FUniqueNetIdRepl InUniqueId, struct FUniqueNetIdRepl InPartyOwnerId); // Function Lobby.LobbyBeaconClient.ServerSetPartyOwner // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x38ddec4
	void ServerNotifyJoiningServer(); // Function Lobby.LobbyBeaconClient.ServerNotifyJoiningServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x38dde78
	void ServerLoginPlayer(struct FString InSessionId, struct FUniqueNetIdRepl InUniqueId, struct FString UrlString); // Function Lobby.LobbyBeaconClient.ServerLoginPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x38ddc7c
	void ServerKickPlayer(struct FUniqueNetIdRepl PlayerToKick, struct FText Reason); // Function Lobby.LobbyBeaconClient.ServerKickPlayer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x38ddad8
	void ServerDisconnectFromLobby(); // Function Lobby.LobbyBeaconClient.ServerDisconnectFromLobby // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x38dda8c
	void ServerCheat(struct FString Msg); // Function Lobby.LobbyBeaconClient.ServerCheat // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x38dd9bc
	void ClientWasKicked(struct FText KickReason); // Function Lobby.LobbyBeaconClient.ClientWasKicked // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x38dd7f0
	void ClientSetInviteFlags(struct FJoinabilitySettings Settings); // Function Lobby.LobbyBeaconClient.ClientSetInviteFlags // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38dd74c
	void ClientPlayerLeft(struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerLeft // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x38dd658
	void ClientPlayerJoined(struct FText NewPlayerName, struct FUniqueNetIdRepl InUniqueId); // Function Lobby.LobbyBeaconClient.ClientPlayerJoined // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x38dd4d8
	void ClientLoginComplete(struct FUniqueNetIdRepl InUniqueId, bool bWasSuccessful); // Function Lobby.LobbyBeaconClient.ClientLoginComplete // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x38dd38c
	void ClientJoinGame(); // Function Lobby.LobbyBeaconClient.ClientJoinGame // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x38dd374
	void ClientAckJoiningServer(); // Function Lobby.LobbyBeaconClient.ClientAckJoiningServer // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x27ea6dc
};

// Class Lobby.LobbyBeaconHost
// Size: 0x280 (Inherited: 0x248)
struct ALobbyBeaconHost : AOnlineBeaconHostObject {
	char pad_248[0x8]; // 0x248(0x08)
	SoftClassProperty LobbyStateClass; // 0x250(0x28)
	struct ALobbyBeaconState* LobbyState; // 0x278(0x08)
};

// Class Lobby.LobbyBeaconPlayerState
// Size: 0x2e0 (Inherited: 0x220)
struct ALobbyBeaconPlayerState : AInfo {
	struct FText DisplayName; // 0x220(0x18)
	struct FUniqueNetIdRepl UniqueId; // 0x238(0x28)
	struct FUniqueNetIdRepl PartyOwnerUniqueId; // 0x260(0x28)
	bool bInLobby; // 0x288(0x01)
	char pad_289[0x7]; // 0x289(0x07)
	struct AOnlineBeaconClient* ClientActor; // 0x290(0x08)
	char pad_298[0x48]; // 0x298(0x48)

	void OnRep_UniqueId(); // Function Lobby.LobbyBeaconPlayerState.OnRep_UniqueId // (Final|Native|Protected) // @ game+0x38dd954
	void OnRep_PartyOwner(); // Function Lobby.LobbyBeaconPlayerState.OnRep_PartyOwner // (Final|Native|Protected) // @ game+0x38dd918
	void OnRep_InLobby(); // Function Lobby.LobbyBeaconPlayerState.OnRep_InLobby // (Final|Native|Protected) // @ game+0x38dd8b0
};

// Class Lobby.LobbyBeaconState
// Size: 0x3c8 (Inherited: 0x220)
struct ALobbyBeaconState : AInfo {
	int32_t MaxPlayers; // 0x220(0x04)
	char pad_224[0x4]; // 0x224(0x04)
	struct ALobbyBeaconPlayerState* LobbyBeaconPlayerStateClass; // 0x228(0x08)
	char pad_230[0x8]; // 0x230(0x08)
	bool bLobbyStarted; // 0x238(0x01)
	char pad_239[0x3]; // 0x239(0x03)
	float WaitForPlayersTimeRemaining; // 0x23c(0x04)
	struct FLobbyPlayerStateInfoArray Players; // 0x240(0x120)
	char pad_360[0x68]; // 0x360(0x68)

	void OnRep_WaitForPlayersTimeRemaining(); // Function Lobby.LobbyBeaconState.OnRep_WaitForPlayersTimeRemaining // (Final|Native|Protected) // @ game+0x38dd990
	void OnRep_LobbyStarted(); // Function Lobby.LobbyBeaconState.OnRep_LobbyStarted // (Final|Native|Protected) // @ game+0x38dd8ec
};

