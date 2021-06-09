// BlueprintGeneratedClass GAB_SurfaceChange.GAB_SurfaceChange_C
// Size: 0xcc8 (Inherited: 0xa70)
struct UGAB_SurfaceChange_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	bool debug; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct FScalableFloat RemovalDelay; // 0xa80(0x28)
	struct FScalableFloat IcySurfacesEnabled; // 0xaa8(0x28)
	struct FGameplayTagContainer HasIce; // 0xad0(0x20)
	struct UGameplayEffect* GE_SurfaceChange_Ice; // 0xaf0(0x08)
	struct UGameplayEffect* GE_SurfaceChange_Snow; // 0xaf8(0x08)
	struct UGameplayEffect* GE_SurfaceChange_Lava; // 0xb00(0x08)
	struct AFortPlayerPawnAthena* PlayerPawn; // 0xb08(0x08)
	struct FGameplayTagContainer IceTags; // 0xb10(0x20)
	struct FGameplayTagContainer LavaTags; // 0xb30(0x20)
	struct FGameplayTagContainer SnowTags; // 0xb50(0x20)
	struct FGameplayTagContainer SandTags; // 0xb70(0x20)
	float LavaBounceMultiplier; // 0xb90(0x04)
	float RandomAngleOffset; // 0xb94(0x04)
	struct FScalableFloat RandomConeAngle; // 0xb98(0x28)
	struct FScalableFloat FacingAngleVelocityComponent; // 0xbc0(0x28)
	struct FScalableFloat BaseVerticalBounceVelocity; // 0xbe8(0x28)
	struct FScalableFloat BaseLateralBounceVelocity; // 0xc10(0x28)
	struct FScalableFloat MaxBounceMultiplier; // 0xc38(0x28)
	struct FScalableFloat BounceMultiplierStepAmount; // 0xc60(0x28)
	struct FRandomStream RandomAngleStream; // 0xc88(0x08)
	struct FGameplayTag LavaBounceCue; // 0xc90(0x08)
	struct FScalableFloat SandBurrowingEnabled; // 0xc98(0x28)
	struct FGameplayTag EventTag_SandUnburrow; // 0xcc0(0x08)

	void OnRep_ReplicatedRandomAngle(); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.OnRep_ReplicatedRandomAngle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SurfaceCleanup(bool AddLingeringEffects, enum class EPhysicalSurface SurfaceType); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanup // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LavaBounce(); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.LavaBounce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HotfixableGEApplication(struct FScalableFloat Input, struct UGameplayEffect* GameplayEffectAppliedOnTrue, struct UGameplayEffect* GameplayEffectAppliedOnFalse); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.HotfixableGEApplication // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SurfaceCleanupSpecial(); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.SurfaceCleanupSpecial // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void MovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.MovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_SurfaceChange(int32_t EntryPoint); // Function GAB_SurfaceChange.GAB_SurfaceChange_C.ExecuteUbergraph_GAB_SurfaceChange // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

