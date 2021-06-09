// Class PlayspaceSystem.PlayspacePlayerController
// Size: 0x6c0 (Inherited: 0x698)
struct APlayspacePlayerController : APlayerController {
	char pad_698[0x18]; // 0x698(0x18)
	bool bUsePlayerSpawningComponent; // 0x6b0(0x01)
	char pad_6B1[0x7]; // 0x6b1(0x07)
	struct UPlayspaceControllerComponent_PlayerSpawning* ControllerSpawningComponent; // 0x6b8(0x08)
};

// Class PlayspaceSystem.PlayspaceComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPlayspaceComponent : UGameFrameworkComponent {
};

// Class PlayspaceSystem.PlayspaceComponent_PlayerSpawning
// Size: 0xc0 (Inherited: 0xb0)
struct UPlayspaceComponent_PlayerSpawning : UPlayspaceComponent {
	bool bQueueUserForSpawnWhenAdded; // 0xb0(0x01)
	char pad_B1[0x3]; // 0xb1(0x03)
	float SpawnDelayMin; // 0xb4(0x04)
	float SpawnDelayMax; // 0xb8(0x04)
	char pad_BC[0x4]; // 0xbc(0x04)
};

// Class PlayspaceSystem.Playspace
// Size: 0x4a0 (Inherited: 0x220)
struct APlayspace : AInfo {
	struct FMulticastInlineDelegate NotifyPlayspaceUserAdded; // 0x220(0x10)
	char pad_230[0x18]; // 0x230(0x18)
	struct FMulticastInlineDelegate NotifyPlayspaceUserRemoved; // 0x248(0x10)
	char pad_258[0x18]; // 0x258(0x18)
	struct FMulticastInlineDelegate NotifyPlayspaceInitialized; // 0x270(0x10)
	char pad_280[0x18]; // 0x280(0x18)
	struct FMulticastInlineDelegate NotifyStartMatch; // 0x298(0x10)
	char pad_2A8[0x18]; // 0x2a8(0x18)
	struct FMulticastInlineDelegate NotifyEndMatch; // 0x2c0(0x10)
	char pad_2D0[0x18]; // 0x2d0(0x18)
	struct FGameplayTagContainer GameplayTags; // 0x2e8(0x20)
	struct FGameplayTag RequestedPlayspaceParentTag; // 0x308(0x08)
	struct TArray<struct APlayspace*> ChildPlayspaceClasses; // 0x310(0x10)
	struct FPlayspaceUserList PlayspaceUsers; // 0x320(0x128)
	struct TArray<struct APlayspace*> ChildPlayspaces; // 0x448(0x10)
	struct TArray<struct FUniqueNetIdRepl> PendingUsers; // 0x458(0x10)
	bool bAutoStartMatchOnServerStart; // 0x468(0x01)
	char pad_469[0x7]; // 0x469(0x07)
	struct UPlayspaceManagerComponent* PlayspaceManagerCached; // 0x470(0x08)
	struct AGameplayVolume* BoundGameplayVolume; // 0x478(0x08)
	bool bIsInitialized; // 0x480(0x01)
	char pad_481[0x1]; // 0x481(0x01)
	bool bMatchHasEnded; // 0x482(0x01)
	char pad_483[0x1]; // 0x483(0x01)
	float MatchStartTime; // 0x484(0x04)
	char pad_488[0x18]; // 0x488(0x18)

	void OnRep_PlayspaceUsers(); // Function PlayspaceSystem.Playspace.OnRep_PlayspaceUsers // (Final|Native|Protected) // @ game+0x203fe94
	void OnRep_MatchStartTime(); // Function PlayspaceSystem.Playspace.OnRep_MatchStartTime // (Native|Protected) // @ game+0x27ea76c
	void OnRep_bMatchHasEnded(); // Function PlayspaceSystem.Playspace.OnRep_bMatchHasEnded // (Final|Native|Protected) // @ game+0x3d6c584
	void OnRep_bIsInitialized(); // Function PlayspaceSystem.Playspace.OnRep_bIsInitialized // (Final|Native|Protected) // @ game+0x216412c
};

// Class PlayspaceSystem.GameplayVolume
// Size: 0x2a0 (Inherited: 0x220)
struct AGameplayVolume : AActor {
	SoftClassProperty PlayspaceClassTemplate; // 0x220(0x28)
	struct APlayspace* PlayspaceClass; // 0x248(0x08)
	struct APlayspace* Playspace; // 0x250(0x08)
	struct FGameplayTagContainer VolumeTags; // 0x258(0x20)
	struct UOverlapComponent* BoundsComponent; // 0x278(0x08)
	char pad_280[0x20]; // 0x280(0x20)

	void UpdateSize(struct FVector NewScale); // Function PlayspaceSystem.GameplayVolume.UpdateSize // (Final|Native|Protected|HasOutParms|HasDefaults) // @ game+0x3d6c704
};

// Class PlayspaceSystem.OverlapComponent
// Size: 0x500 (Inherited: 0x4e0)
struct UOverlapComponent : UStaticMeshComponent {
	char pad_4E0[0x20]; // 0x4e0(0x20)

	void OnEndActorOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function PlayspaceSystem.OverlapComponent.OnEndActorOverlap // (Native|Protected) // @ game+0x3d6c228
	void OnBeginActorOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function PlayspaceSystem.OverlapComponent.OnBeginActorOverlap // (Native|Protected|HasOutParms) // @ game+0x3d6bfb8
};

// Class PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning
// Size: 0xf8 (Inherited: 0xb0)
struct UPlayspaceControllerComponent_PlayerSpawning : UControllerComponent {
	struct FMulticastInlineDelegate OnPlayerQueuedToSpawn; // 0xb0(0x10)
	struct ACameraActor* SpawnCameraActor; // 0xc0(0x08)
	bool bClientReadyForSpawning; // 0xc8(0x01)
	char pad_C9[0x3]; // 0xc9(0x03)
	struct FReplicatedSpawnInfo ReplicatedSpawnInfo; // 0xcc(0x2c)

	void ServerMarkReadyForSpawning(); // Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.ServerMarkReadyForSpawning // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3d6c6b8
	void OnRep_ReplicatedSpawnInfo(); // Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.OnRep_ReplicatedSpawnInfo // (Final|Native|Private) // @ game+0x3d6c59c
	struct FReplicatedSpawnInfo GetSpawnInfo(); // Function PlayspaceSystem.PlayspaceControllerComponent_PlayerSpawning.GetSpawnInfo // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3d6bf78
};

// Class PlayspaceSystem.PlayspaceGameMode
// Size: 0x320 (Inherited: 0x308)
struct APlayspaceGameMode : AGameMode {
	char pad_308[0x18]; // 0x308(0x18)
};

// Class PlayspaceSystem.PlayspaceGameState
// Size: 0x2b0 (Inherited: 0x290)
struct APlayspaceGameState : AGameState {
	struct APlayspace* RootPlayspaceClass; // 0x290(0x08)
	bool bUsePlayspaceSystem; // 0x298(0x01)
	bool bUsePlayerSpawningComponent; // 0x299(0x01)
	char pad_29A[0x6]; // 0x29a(0x06)
	struct UPlayspaceManagerComponent* PlayspaceManagerComponentCached; // 0x2a0(0x08)
	struct UPlayspaceGameStateComponent_PlayerSpawningManager* PlayerSpawningManagerCached; // 0x2a8(0x08)
};

// Class PlayspaceSystem.PlayspaceGameStateComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPlayspaceGameStateComponent : UGameStateComponent {
};

// Class PlayspaceSystem.PlayspaceGameStateComponent_PlayerSpawningManager
// Size: 0x108 (Inherited: 0xb0)
struct UPlayspaceGameStateComponent_PlayerSpawningManager : UPlayspaceGameStateComponent {
	char pad_B0[0x48]; // 0xb0(0x48)
	struct TArray<struct FPlayspaceSpawningInfo> SpawningUsersArray; // 0xf8(0x10)
};

// Class PlayspaceSystem.PlayspaceLibrary
// Size: 0x28 (Inherited: 0x28)
struct UPlayspaceLibrary : UBlueprintFunctionLibrary {
};

// Class PlayspaceSystem.PlayspaceLogic
// Size: 0x230 (Inherited: 0x220)
struct APlayspaceLogic : AActor {
	struct APlayspace* Playspace; // 0x220(0x08)
	bool bAutoStartMatchOnServerStart; // 0x228(0x01)
	char pad_229[0x1]; // 0x229(0x01)
	bool bMatchHasEnded; // 0x22a(0x01)
	char pad_22B[0x1]; // 0x22b(0x01)
	float MatchStartTime; // 0x22c(0x04)

	void OnRep_MatchStartTime(); // Function PlayspaceSystem.PlayspaceLogic.OnRep_MatchStartTime // (Native|Protected) // @ game+0x3d6c584
	void OnRep_bMatchHasEnded(); // Function PlayspaceSystem.PlayspaceLogic.OnRep_bMatchHasEnded // (Final|Native|Private) // @ game+0x1a7142c
};

// Class PlayspaceSystem.PlayspaceLogicComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPlayspaceLogicComponent : UGameFrameworkComponent {
};

// Class PlayspaceSystem.PlayspaceManagerComponent
// Size: 0xf8 (Inherited: 0xb0)
struct UPlayspaceManagerComponent : UGameStateComponent {
	char pad_B0[0x18]; // 0xb0(0x18)
	struct APlayspace* RootPlayspace; // 0xc8(0x08)
	char pad_D0[0x8]; // 0xd0(0x08)
	struct TArray<struct FActorOverlapEvent> UnhandledEnterEvents; // 0xd8(0x10)
	struct TArray<struct FActorOverlapEvent> UnhandledExitEvents; // 0xe8(0x10)

	bool ProcessOverlapEvents(float DeltaTime); // Function PlayspaceSystem.PlayspaceManagerComponent.ProcessOverlapEvents // (Final|Native|Private) // @ game+0x3d6c60c
	void OnRep_RootPlayspace(); // Function PlayspaceSystem.PlayspaceManagerComponent.OnRep_RootPlayspace // (Final|Native|Private) // @ game+0x28616d0
	void OnPlayerEndOverlapGameplayVolume(struct APlayerState* PlayerState, struct AGameplayVolume* Volume); // Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerEndOverlapGameplayVolume // (Final|Native|Private) // @ game+0x3d6c49c
	void OnPlayerBeginOverlapGameplayVolume(struct APlayerState* PlayerState, struct AGameplayVolume* Volume); // Function PlayspaceSystem.PlayspaceManagerComponent.OnPlayerBeginOverlapGameplayVolume // (Final|Native|Private) // @ game+0x3d6c3b4
};

// Class PlayspaceSystem.PlayspacePlayerManagerComponent
// Size: 0x170 (Inherited: 0xb0)
struct UPlayspacePlayerManagerComponent : UPlayspaceComponent {
	struct TArray<struct UControllerComponent*> ControllerComponents; // 0xb0(0x10)
	struct TArray<struct UPlayerStateComponent*> PlayerStateComponents; // 0xc0(0x10)
	char pad_D0[0xa0]; // 0xd0(0xa0)
};

// Class PlayspaceSystem.PlayspaceSpawnActor
// Size: 0x228 (Inherited: 0x220)
struct APlayspaceSpawnActor : AActor {
	struct USceneComponent* SceneComponent; // 0x220(0x08)
};

