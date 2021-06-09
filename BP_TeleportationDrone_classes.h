// BlueprintGeneratedClass BP_TeleportationDrone.BP_TeleportationDrone_C
// Size: 0x2c9 (Inherited: 0x280)
struct ABP_TeleportationDrone_C : APawn {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x280(0x08)
	struct USkeletalMeshComponentBudgeted* SkeletalMeshComponentBudgeted; // 0x288(0x08)
	struct USceneComponent* Scene; // 0x290(0x08)
	float AnimPlayRate; // 0x298(0x04)
	char pad_29C[0x4]; // 0x29c(0x04)
	struct UMaterialInstanceDynamic* StaticMeshMID; // 0x2a0(0x08)
	bool TeleportIn; // 0x2a8(0x01)
	char pad_2A9[0x7]; // 0x2a9(0x07)
	struct UParticleSystemComponent* CharacterAttached; // 0x2b0(0x08)
	bool InLobby; // 0x2b8(0x01)
	char pad_2B9[0x7]; // 0x2b9(0x07)
	struct USkeletalMeshComponent* Mesh for Attachment; // 0x2c0(0x08)
	bool NewVar_1; // 0x2c8(0x01)

	void PlaySpawnAnim(); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.PlaySpawnAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSpawnOutAnimEnded(struct UAnimMontage* Montage, bool bInterrupted); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.OnSpawnOutAnimEnded // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_TeleportationDrone(int32_t EntryPoint); // Function BP_TeleportationDrone.BP_TeleportationDrone_C.ExecuteUbergraph_BP_TeleportationDrone // (Final|UbergraphFunction) // @ game+0xda7c34
};

