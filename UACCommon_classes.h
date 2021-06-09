// Class UACCommon.UACNetworkComponent
// Size: 0x220 (Inherited: 0xb0)
struct UUACNetworkComponent : UActorComponent {
	int32_t PlayerID; // 0xb0(0x04)
	char pad_B4[0x16c]; // 0xb4(0x16c)

	void SendPacketToServer(char Type, struct TArray<char> Packet); // Function UACCommon.UACNetworkComponent.SendPacketToServer // (Net|NetReliableNative|Event|Protected|NetServer|NetValidate) // @ game+0x412f874
	void SendPacketToClient(char Type, struct TArray<char> Packet); // Function UACCommon.UACNetworkComponent.SendPacketToClient // (Net|NetReliableNative|Event|Protected|NetClient) // @ game+0x412f768
	void SendClientHello(uint32_t SessionKey); // Function UACCommon.UACNetworkComponent.SendClientHello // (Net|NetReliableNative|Event|Public|NetClient) // @ game+0x412f6cc
};

