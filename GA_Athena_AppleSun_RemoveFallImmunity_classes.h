// BlueprintGeneratedClass GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C
// Size: 0xa98 (Inherited: 0xa70)
struct UGA_Athena_AppleSun_RemoveFallImmunity_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa78(0x08)
	struct FGameplayTag Looping GC; // 0xa80(0x08)
	struct FGameplayTag Player Landing GC; // 0xa88(0x08)
	struct FTimerHandle VehicleOnGroundTimer; // 0xa90(0x08)

	void OnChange_3DD8539A4FF5097BAD1292AD341357CA(enum class EMovementMode NewMovementMode); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.OnChange_3DD8539A4FF5097BAD1292AD341357CA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnChange_E50882E9463BCB5DDE04EE8407D66091(enum class EMovementMode NewMovementMode); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.OnChange_E50882E9463BCB5DDE04EE8407D66091 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void VehicleLandedCheck(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.VehicleLandedCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Remove(); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.Remove // (Net|NetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_Athena_AppleSun_RemoveFallImmunity(int32_t EntryPoint); // Function GA_Athena_AppleSun_RemoveFallImmunity.GA_Athena_AppleSun_RemoveFallImmunity_C.ExecuteUbergraph_GA_Athena_AppleSun_RemoveFallImmunity // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

