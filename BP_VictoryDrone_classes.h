// BlueprintGeneratedClass BP_VictoryDrone.BP_VictoryDrone_C
// Size: 0x2f0 (Inherited: 0x280)
struct ABP_VictoryDrone_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	struct FMulticastInlineDelegate SpawnOutAnimEndedDispatcher; // 0x298(0x10)
	float AnimPlayRate; // 0x2a8(0x04)
	char pad_2AC[0x4]; // 0x2ac(0x04)
	struct UMaterialInstanceDynamic* StaticMeshMID; // 0x2b0(0x08)
	bool TeleportIn; // 0x2b8(0x01)
	bool IsAthena; // 0x2b9(0x01)
	char pad_2BA[0x6]; // 0x2ba(0x06)
	struct AFortPawn* TargetPlayer; // 0x2c0(0x08)
	struct UParticleSystemComponent* CharacterAttached; // 0x2c8(0x08)
	bool InLobby; // 0x2d0(0x01)
	bool isNPC; // 0x2d1(0x01)
	char pad_2D2[0x2]; // 0x2d2(0x02)
	struct FName AttachPoint; // 0x2d4(0x08)
	bool isDecoy; // 0x2dc(0x01)
	char pad_2DD[0x3]; // 0x2dd(0x03)
	struct USkeletalMeshComponent* Mesh for Attachment; // 0x2e0(0x08)
	struct USoundBase* SoundOnNPCDeath; // 0x2e8(0x08)

	void Added Death Audio(struct USoundBase* Sound to Spawn); // Function BP_VictoryDrone.BP_VictoryDrone_C.Added Death Audio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Decoy FX Parameters(struct TArray<struct FParticleSysParam> Instance Parameters); // Function BP_VictoryDrone.BP_VictoryDrone_C.Decoy FX Parameters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void NPC FX Parameters(struct TArray<struct FParticleSysParam> Instance Parameters); // Function BP_VictoryDrone.BP_VictoryDrone_C.NPC FX Parameters // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void NotifyTeleportFinishedTriggered(); // Function BP_VictoryDrone.BP_VictoryDrone_C.NotifyTeleportFinishedTriggered // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlaySpawnAnim(); // Function BP_VictoryDrone.BP_VictoryDrone_C.PlaySpawnAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitDrone(); // Function BP_VictoryDrone.BP_VictoryDrone_C.InitDrone // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSpawnOutAnimEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_VictoryDrone.BP_VictoryDrone_C.OnSpawnOutAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function BP_VictoryDrone.BP_VictoryDrone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_VictoryDrone(int32_t EntryPoint); // Function BP_VictoryDrone.BP_VictoryDrone_C.ExecuteUbergraph_BP_VictoryDrone // (Final|UbergraphFunction) // @ game+0xda7c34
	void SpawnOutAnimEndedDispatcher__DelegateSignature(struct ABP_VictoryDrone_C* Drone); // Function BP_VictoryDrone.BP_VictoryDrone_C.SpawnOutAnimEndedDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

