// Class NetworkPrediction.NetworkPhysicsManager
// Size: 0x108 (Inherited: 0x30)
struct UNetworkPhysicsManager : UWorldSubsystem {
	char pad_30[0xd8]; // 0x30(0xd8)
};

// Class NetworkPrediction.TempMockComponent
// Size: 0x1b0 (Inherited: 0xb0)
struct UTempMockComponent : UActorComponent {
	struct FTempMockInputCmd PendingInputCmd; // 0xb0(0x14)
	char pad_C4[0x4]; // 0xc4(0x04)
	struct FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0xc8(0x10)
	char pad_D8[0x8]; // 0xd8(0x08)
	struct FNetworkPhysicsState NetworkPhysicsState; // 0xe0(0x60)
	struct FTempMockObject SimOutput; // 0x140(0x18)
	char pad_158[0x8]; // 0x158(0x08)
	struct FNetworkPredictionProxyAsync ReplicatedObject; // 0x160(0x40)
	struct APlayerController* CachedPC; // 0x1a0(0x08)
	char pad_1A8[0x8]; // 0x1a8(0x08)

	void OnGeneratedLocalInputCmd__DelegateSignature(); // DelegateFunction NetworkPrediction.TempMockComponent.OnGeneratedLocalInputCmd__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	float GetJumpCooldownMS(); // Function NetworkPrediction.TempMockComponent.GetJumpCooldownMS // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3c8d268
};

// Class NetworkPrediction.NetworkPredictionComponent
// Size: 0x2a0 (Inherited: 0xb0)
struct UNetworkPredictionComponent : UActorComponent {
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0xb0(0xb0)
	struct FReplicationProxy ReplicationProxy_ServerRPC; // 0x160(0x50)
	struct FReplicationProxy ReplicationProxy_Autonomous; // 0x1b0(0x50)
	struct FReplicationProxy ReplicationProxy_Simulated; // 0x200(0x50)
	struct FReplicationProxy ReplicationProxy_Replay; // 0x250(0x50)

	void ServerReceiveClientInput(struct FServerReplicationRPCParameter ProxyParameter); // Function NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput // (Net|Native|Event|Protected|NetServer|NetValidate) // @ game+0x3d30b14
};

// Class NetworkPrediction.NetworkPredictionPhysicsComponent
// Size: 0x1d0 (Inherited: 0xb0)
struct UNetworkPredictionPhysicsComponent : UActorComponent {
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0xb0(0xb0)
	struct UPrimitiveComponent* UpdatedPrimitive; // 0x160(0x08)
	char pad_168[0x8]; // 0x168(0x08)
	struct FReplicationProxy ReplicationProxy; // 0x170(0x50)
	char pad_1C0[0x10]; // 0x1c0(0x10)
};

// Class NetworkPrediction.NetworkPredictionReplicatedManager
// Size: 0x230 (Inherited: 0x220)
struct ANetworkPredictionReplicatedManager : AActor {
	struct FSharedPackageMap SharedPackageMap; // 0x220(0x10)
};

// Class NetworkPrediction.NetworkPredictionSettingsObject
// Size: 0x50 (Inherited: 0x28)
struct UNetworkPredictionSettingsObject : UObject {
	struct FNetworkPredictionSettings Settings; // 0x28(0x28)
};

// Class NetworkPrediction.NetworkPredictionWorldManager
// Size: 0x668 (Inherited: 0x30)
struct UNetworkPredictionWorldManager : UWorldSubsystem {
	struct ANetworkPredictionReplicatedManager* ReplicatedManager; // 0x30(0x08)
	char pad_38[0x630]; // 0x38(0x630)
};

