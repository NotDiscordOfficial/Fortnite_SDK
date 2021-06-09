// BlueprintGeneratedClass BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C
// Size: 0xa79 (Inherited: 0x958)
struct ABGA_Athena_SCMachine_Pickup_C : ABuildingGameplayActorSpawnChip {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x958(0x08)
	struct UAudioComponent* SC_Machine_Memory_Card_Loop_Cue; // 0x960(0x08)
	struct UParticleSystemComponent* SpawnInEffect; // 0x968(0x08)
	struct UCapsuleComponent* Collision; // 0x970(0x08)
	struct UStaticMeshComponent* BackgroundGlow; // 0x978(0x08)
	struct UStaticMeshComponent* Card; // 0x980(0x08)
	int32_t UnHide; // 0x988(0x04)
	float DelayBeforeUnhide; // 0x98c(0x04)
	char OwnerTeam; // 0x990(0x01)
	char pad_991[0x7]; // 0x991(0x07)
	struct TArray<struct AActor*> FoundBuildingOnDied; // 0x998(0x10)
	struct FVector Impact_Loc; // 0x9a8(0x0c)
	struct FVector HitNormal; // 0x9b4(0x0c)
	float MaxSlope; // 0x9c0(0x04)
	char pad_9C4[0x4]; // 0x9c4(0x04)
	struct FTimerHandle Timer_DestroyPickup; // 0x9c8(0x08)
	struct FScalableFloat Row_PickupLife; // 0x9d0(0x28)
	struct FText InteractText; // 0x9f8(0x18)
	struct UParticleSystem* SpawnOutParticle; // 0xa10(0x08)
	struct USoundBase* PickupSound; // 0xa18(0x08)
	struct UParticleSystemComponent* SpawnFX; // 0xa20(0x08)
	bool SpawnSoundPlayed; // 0xa28(0x01)
	char pad_A29[0x7]; // 0xa29(0x07)
	struct USoundBase* SpawnInSound; // 0xa30(0x08)
	bool IsPendingKill; // 0xa38(0x01)
	char pad_A39[0x3]; // 0xa39(0x03)
	struct FVector StopLocation; // 0xa3c(0x0c)
	bool HideAndKill; // 0xa48(0x01)
	char pad_A49[0x7]; // 0xa49(0x07)
	struct FScalableFloat Row_PickUpInteractTime; // 0xa50(0x28)
	bool IsDelayingDeath; // 0xa78(0x01)

	void OnRep_HideAndKill(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_HideAndKill // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ConsiderPositionCorrection(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ConsiderPositionCorrection // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DetermineStopLocation(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DetermineStopLocation // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void OnRep_UnHide(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnRep_UnHide // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DestroyPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CollectPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.CollectPickup // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDestroyPickup // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SpawnSound(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.SpawnSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HideAndKillPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.HideAndKillPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DelayDestroyPickup(); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.DelayDestroyPickup // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_SCMachine_Pickup(int32_t EntryPoint); // Function BGA_Athena_SCMachine_Pickup.BGA_Athena_SCMachine_Pickup_C.ExecuteUbergraph_BGA_Athena_SCMachine_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

