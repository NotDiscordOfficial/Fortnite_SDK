// BlueprintGeneratedClass GA_DudeBro_Vent.GA_DudeBro_Vent_C
// Size: 0xaa4 (Inherited: 0xa70)
struct UGA_DudeBro_Vent_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct USkeletalMeshComponent* VehicleSkelMesh; // 0xa78(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa80(0x08)
	float GravFloorAltitude; // 0xa88(0x04)
	float UpwardLaunchVelocity; // 0xa8c(0x04)
	struct TArray<struct AActor*> VentsHitBeforeLanding; // 0xa90(0x10)
	int32_t NumVentsToHitForQuest; // 0xaa0(0x04)

	void ActuallyCleanPlayerUp(); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ActuallyCleanPlayerUp // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_OnEndAbility(bool bWasCancelled); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void MovementModeChangedDelegate_Event_1(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.MovementModeChangedDelegate_Event_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlayerCapsuleHit(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.PlayerCapsuleHit // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_DudeBro_Vent(int32_t EntryPoint); // Function GA_DudeBro_Vent.GA_DudeBro_Vent_C.ExecuteUbergraph_GA_DudeBro_Vent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

