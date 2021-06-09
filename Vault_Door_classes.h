// BlueprintGeneratedClass Vault_Door.Vault_Door_C
// Size: 0x964 (Inherited: 0x898)
struct AVault_Door_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UStaticMeshComponent* S_Prim_Prism; // 0x8a0(0x08)
	struct UNiagaraComponent* UpperBolt; // 0x8a8(0x08)
	struct UNiagaraComponent* LowerBolt; // 0x8b0(0x08)
	struct UNiagaraComponent* UpperBolt2_Door; // 0x8b8(0x08)
	struct UNiagaraComponent* UpperBolt1_Door; // 0x8c0(0x08)
	struct UNiagaraComponent* VaultDoorFX; // 0x8c8(0x08)
	struct USpotLightComponent* VaultLightInside; // 0x8d0(0x08)
	struct USpotLightComponent* VaultLightOutside; // 0x8d8(0x08)
	struct UStaticMeshComponent* VaultDoor; // 0x8e0(0x08)
	struct UStaticMeshComponent* Frame; // 0x8e8(0x08)
	float Open_ShaderAnim_Normalized_B888903B464902A65CC3929C6A64E5F6; // 0x8f0(0x04)
	float Open_Lerp_B888903B464902A65CC3929C6A64E5F6; // 0x8f4(0x04)
	enum class ETimelineDirection Open__Direction_B888903B464902A65CC3929C6A64E5F6; // 0x8f8(0x01)
	char pad_8F9[0x7]; // 0x8f9(0x07)
	struct UTimelineComponent* Open; // 0x900(0x08)
	struct FRotator DoorSpawnRotation; // 0x908(0x0c)
	float DoorRotationAmount; // 0x914(0x04)
	struct UMaterialInstanceDynamic* MID_VaultDoor; // 0x918(0x08)
	struct FGameplayTag GC_OpenDoor; // 0x920(0x08)
	bool GreenLight; // 0x928(0x01)
	char pad_929[0x3]; // 0x929(0x03)
	float WaitLockTime; // 0x92c(0x04)
	float BigCShapeLockTime; // 0x930(0x04)
	struct FVector StartLocation; // 0x934(0x0c)
	struct FVector EndLocation; // 0x940(0x0c)
	struct FRotator StartRotation; // 0x94c(0x0c)
	struct FRotator EndRotation; // 0x958(0x0c)

	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Vault_Door.Vault_Door_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_HasBeenOpening(); // Function Vault_Door.Vault_Door_C.OnRep_HasBeenOpening // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function Vault_Door.Vault_Door_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void Open__FinishedFunc(); // Function Vault_Door.Vault_Door_C.Open__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Open__UpdateFunc(); // Function Vault_Door.Vault_Door_C.Open__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Open__Trigger Light__EventFunc(); // Function Vault_Door.Vault_Door_C.Open__Trigger Light__EventFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Vault_Door.Vault_Door_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void VaultOpen(); // Function Vault_Door.Vault_Door_C.VaultOpen // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OpeningTimeline(); // Function Vault_Door.Vault_Door_C.OpeningTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Vault_Door(int32_t EntryPoint); // Function Vault_Door.Vault_Door_C.ExecuteUbergraph_Vault_Door // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

