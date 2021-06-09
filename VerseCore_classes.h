// Class VerseCore.VerseAssetPtr
// Size: 0x68 (Inherited: 0x30)
struct UVerseAssetPtr : UVerseAsset {
	struct FName AssetPathName; // 0x30(0x08)
	struct UObject* Object; // 0x38(0x08)
	char pad_40[0x28]; // 0x40(0x28)

	void OnRep_AssetPathName(); // Function VerseCore.VerseAssetPtr.OnRep_AssetPathName // (Final|Native|Protected) // @ game+0x434db58
};

// Class VerseCore.ControllerStateComponent
// Size: 0xe0 (Inherited: 0xb0)
struct UControllerStateComponent : UControllerComponent {
	struct TArray<struct FString> ActiveStates; // 0xb0(0x10)
	char pad_C0[0x20]; // 0xc0(0x20)

	void OnRep_ActiveStates(); // Function VerseCore.ControllerStateComponent.OnRep_ActiveStates // (Final|Native|Private) // @ game+0x434db44
};

// Class VerseCore.ObjectHack
// Size: 0x28 (Inherited: 0x28)
struct UObjectHack : UObject {
};

// Class VerseCore.VerseWorldSubsystem
// Size: 0x48 (Inherited: 0x30)
struct UVerseWorldSubsystem : UWorldSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
};

// Class VerseCore.VUIActor
// Size: 0x4f0 (Inherited: 0x220)
struct AVUIActor : AActor {
	struct UObject* SolarisClass; // 0x220(0x08)
	struct TArray<struct FVUIRuntimeMapping> RuntimeMapping; // 0x228(0x10)
	struct TArray<struct FVUIRuntimeEventMapping> RuntimeFunctionMapping; // 0x238(0x10)
	struct TArray<struct FVUIRuntimeInputMapping> RuntimeInputMapping; // 0x248(0x10)
	struct UObject* SpawnedBrainObjRef; // 0x258(0x08)
	char pad_260[0x8]; // 0x260(0x08)
	struct APlayerController* ReplicatedPlayerController; // 0x268(0x08)
	char pad_270[0x20]; // 0x270(0x20)
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0x290(0xb0)
	struct FReplicationProxy ReplicationProxy_ServerRPC; // 0x340(0x50)
	char pad_390[0x50]; // 0x390(0x50)
	struct UPrimitiveComponent* NetworkPredictionPrimitive; // 0x3e0(0x08)
	char pad_3E8[0x8]; // 0x3e8(0x08)
	struct FReplicationProxy ReplicationProxy_Autonomous; // 0x3f0(0x50)
	struct FReplicationProxy ReplicationProxy_Simulated; // 0x440(0x50)
	struct FReplicationProxy ReplicationProxy_Replay; // 0x490(0x50)
	char pad_4E0[0x10]; // 0x4e0(0x10)

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter ProxyParameter); // Function VerseCore.VUIActor.ServerReceiveClientInput // (Net|Native|Event|Public|NetServer|NetValidate) // @ game+0x434dc18
	void OnUnPossessed(struct APlayerController* OldController); // Function VerseCore.VUIActor.OnUnPossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRep_PlayerController(struct APlayerController* OldPC); // Function VerseCore.VUIActor.OnRep_PlayerController // (Final|Native|Private) // @ game+0x434db6c
	void OnPossessed(struct APlayerController* Controller); // Function VerseCore.VUIActor.OnPossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDrawHUD(struct AHUD* HUD, struct UCanvas* Canvas); // Function VerseCore.VUIActor.OnDrawHUD // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	struct UObject* K2_GetSpawnedBrainObject(); // Function VerseCore.VUIActor.K2_GetSpawnedBrainObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1d5bf3c
	int32_t GetVUIMode(); // Function VerseCore.VUIActor.GetVUIMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x434db2c
	struct APlayerController* GetController(); // Function VerseCore.VUIActor.GetController // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x434db14
};

// Class VerseCore.VUIActorComponent
// Size: 0x340 (Inherited: 0xb0)
struct UVUIActorComponent : UActorComponent {
	char pad_B0[0x8]; // 0xb0(0x08)
	struct UObject* VerseClass; // 0xb8(0x08)
	struct UObject* SpawnedBrainObjRef; // 0xc0(0x08)
	char pad_C8[0x18]; // 0xc8(0x18)
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0xe0(0xb0)
	struct FReplicationProxy ReplicationProxy_ServerRPC; // 0x190(0x50)
	char pad_1E0[0x50]; // 0x1e0(0x50)
	struct UPrimitiveComponent* NetworkPredictionPrimitive; // 0x230(0x08)
	char pad_238[0x8]; // 0x238(0x08)
	struct FReplicationProxy ReplicationProxy_Autonomous; // 0x240(0x50)
	struct FReplicationProxy ReplicationProxy_Simulated; // 0x290(0x50)
	struct FReplicationProxy ReplicationProxy_Replay; // 0x2e0(0x50)
	char pad_330[0x10]; // 0x330(0x10)

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter ProxyParameter); // Function VerseCore.VUIActorComponent.ServerReceiveClientInput // (Net|Native|Event|Public|NetServer) // @ game+0x434dce0
};

// Class VerseCore.VUIDynamicEventBinding
// Size: 0x38 (Inherited: 0x28)
struct UVUIDynamicEventBinding : UDynamicBlueprintBinding {
	struct TArray<struct FVUIDynamicEventBindingData> EventBindings; // 0x28(0x10)
};

