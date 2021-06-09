// Class MeshNetwork.MeshBeaconClient
// Size: 0x330 (Inherited: 0x2b0)
struct AMeshBeaconClient : AOnlineBeaconClient {
	char pad_2B0[0x40]; // 0x2b0(0x40)
	bool bConnectedToRoot; // 0x2f0(0x01)
	char pad_2F1[0x7]; // 0x2f1(0x07)
	struct FDateTime MeshPingTime; // 0x2f8(0x08)
	struct TArray<struct FString> ParentIds; // 0x300(0x10)
	struct FString ClientId; // 0x310(0x10)
	char pad_320[0x10]; // 0x320(0x10)

	void ServerUpdateMultipleLevelsVisibility(struct TArray<struct FUpdateLevelVisibilityLevelInfo> LevelVisibilities); // Function MeshNetwork.MeshBeaconClient.ServerUpdateMultipleLevelsVisibility // (Final|Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3df7864
	void ServerUpdateLevelVisibility(struct FUpdateLevelVisibilityLevelInfo LevelVisibility); // Function MeshNetwork.MeshBeaconClient.ServerUpdateLevelVisibility // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3df779c
	void ServerSetClientId(struct FString NewClientId); // Function MeshNetwork.MeshBeaconClient.ServerSetClientId // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3df76cc
	void OnRep_ParentIds(); // Function MeshNetwork.MeshBeaconClient.OnRep_ParentIds // (Final|Native|Protected) // @ game+0x3df76b8
	void OnRep_MeshPingTime(); // Function MeshNetwork.MeshBeaconClient.OnRep_MeshPingTime // (Native|Protected) // @ game+0x2861598
	void OnRep_ConnectedToRoot(); // Function MeshNetwork.MeshBeaconClient.OnRep_ConnectedToRoot // (Final|Native|Protected) // @ game+0x3df76a4
};

// Class MeshNetwork.MeshBeaconHost
// Size: 0x310 (Inherited: 0x308)
struct AMeshBeaconHost : AOnlineBeaconHost {
	int32_t MaxConnections; // 0x308(0x04)
	char pad_30C[0x4]; // 0x30c(0x04)
};

// Class MeshNetwork.MeshBeaconHostObject
// Size: 0x260 (Inherited: 0x248)
struct AMeshBeaconHostObject : AOnlineBeaconHostObject {
	char pad_248[0x18]; // 0x248(0x18)
};

// Class MeshNetwork.MeshConnection
// Size: 0x3030 (Inherited: 0x3030)
struct UMeshConnection : UIpConnection {
};

// Class MeshNetwork.MeshNetDriver
// Size: 0x7d0 (Inherited: 0x7c8)
struct UMeshNetDriver : UIpNetDriver {
	char pad_7C8[0x8]; // 0x7c8(0x08)
};

// Class MeshNetwork.MeshNetworkComponent
// Size: 0x200 (Inherited: 0xb0)
struct UMeshNetworkComponent : UActorComponent {
	enum class EMeshNetworkRelevancy MeshRelevancy; // 0xb0(0x01)
	char pad_B1[0x7]; // 0xb1(0x07)
	struct TMap<struct FName, double> AggregationTimeouts; // 0xb8(0x50)
	struct TSet<struct FName> NoAggregationFunctions; // 0x108(0x50)
	struct TMap<struct FName, struct FNoAggregationParameters> NoAggregationParameters; // 0x158(0x50)
	struct TMap<struct FString, struct FAggregatedFunction> AggregatedFunctions; // 0x1a8(0x50)
	char pad_1F8[0x8]; // 0x1f8(0x08)

	enum class EMeshNetworkNodeType GetMeshNetworkNodeType(); // Function MeshNetwork.MeshNetworkComponent.GetMeshNetworkNodeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3df7264
};

// Class MeshNetwork.MeshNetworkSubsystem
// Size: 0x108 (Inherited: 0x30)
struct UMeshNetworkSubsystem : UGameInstanceSubsystem {
	struct FMulticastInlineDelegate OnMeshNodeTypeChanged; // 0x30(0x10)
	struct FMulticastInlineDelegate OnConnectedToRootChanged; // 0x40(0x10)
	struct FMulticastInlineDelegate OnGameServerNodeTypeChanged; // 0x50(0x10)
	struct FMulticastInlineDelegate OnMeshMetaDataUpdated; // 0x60(0x10)
	struct FMulticastInlineDelegate OnMeshPlayerRequested; // 0x70(0x10)
	char pad_80[0x30]; // 0x80(0x30)
	enum class EMeshNetworkNodeType NodeType; // 0xb0(0x01)
	enum class EMeshNetworkNodeType GameServerNodeType; // 0xb1(0x01)
	bool bConnectedToRoot; // 0xb2(0x01)
	bool bMetadataReceived; // 0xb3(0x01)
	char pad_B4[0x54]; // 0xb4(0x54)

	void SetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct MetaData); // Function MeshNetwork.MeshNetworkSubsystem.SetMetaDataWithKey // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3df7954
	void SetMetaData(struct FMeshMetaDataStruct MetaData); // Function MeshNetwork.MeshNetworkSubsystem.SetMetaData // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3df7288
	bool GetMetaDataWithKey(struct FName Key, struct FMeshMetaDataStruct MetaData); // Function MeshNetwork.MeshNetworkSubsystem.GetMetaDataWithKey // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3df72fc
	void GetMetaData(struct FMeshMetaDataStruct MetaData); // Function MeshNetwork.MeshNetworkSubsystem.GetMetaData // (Final|BlueprintAuthorityOnly|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x3df7288
	enum class EMeshNetworkNodeType GetMeshNetworkNodeType(); // Function MeshNetwork.MeshNetworkSubsystem.GetMeshNetworkNodeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ed894
	enum class EMeshNetworkNodeType GetGameServerNodeType(); // Function MeshNetwork.MeshNetworkSubsystem.GetGameServerNodeType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3df724c
	bool GetConnectedToRoot(); // Function MeshNetwork.MeshNetworkSubsystem.GetConnectedToRoot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x29ed8ac
	void EnableMeshReplication(struct AActor* Actor, struct UMeshNetworkComponent* MeshComponentClass); // Function MeshNetwork.MeshNetworkSubsystem.EnableMeshReplication // (Final|Native|Public|BlueprintCallable) // @ game+0x3df6f48
	void DisableMeshReplication(struct AActor* Actor); // Function MeshNetwork.MeshNetworkSubsystem.DisableMeshReplication // (Final|Native|Public|BlueprintCallable) // @ game+0x3df6ce8
};

// Class MeshNetwork.MeshReplicationGraphNode_AlwaysRelevant_ForConnection
// Size: 0xf0 (Inherited: 0xd0)
struct UMeshReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	char pad_D0[0x10]; // 0xd0(0x10)
	struct TArray<struct FAlwaysRelevantActorInfo> PastRelevantActors; // 0xe0(0x10)
};

// Class MeshNetwork.MeshReplicationGraphConnection
// Size: 0x238 (Inherited: 0x238)
struct UMeshReplicationGraphConnection : UNetReplicationGraphConnection {
};

// Class MeshNetwork.MeshReplicationGraph
// Size: 0x540 (Inherited: 0x540)
struct UMeshReplicationGraph : UReplicationGraph {
	struct UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x538(0x08)
};

