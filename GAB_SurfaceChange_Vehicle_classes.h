// BlueprintGeneratedClass GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C
// Size: 0xbf8 (Inherited: 0xa70)
struct UGAB_SurfaceChange_Vehicle_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	bool debug; // 0xa78(0x01)
	char pad_A79[0x7]; // 0xa79(0x07)
	struct FScalableFloat RemovalDelay; // 0xa80(0x28)
	struct UGameplayEffect* GE_SurfaceChange_Ice; // 0xaa8(0x08)
	struct FScalableFloat BaseVerticalBounceVelocity; // 0xab0(0x28)
	struct FScalableFloat BaseLateralBounceVelocity; // 0xad8(0x28)
	float LavaBounceMultiplier; // 0xb00(0x04)
	char pad_B04[0x4]; // 0xb04(0x04)
	struct FScalableFloat BounceMultiplierStepAmount; // 0xb08(0x28)
	struct FScalableFloat MaxBounceMultiplier; // 0xb30(0x28)
	struct FScalableFloat RandomConeAngle; // 0xb58(0x28)
	float ReplicatedRandomAngle; // 0xb80(0x04)
	char pad_B84[0x4]; // 0xb84(0x04)
	struct FScalableFloat FacingAngleVelocityComponent; // 0xb88(0x28)
	struct FGameplayTagContainer IceTags; // 0xbb0(0x20)
	struct FGameplayTagContainer LavaTags; // 0xbd0(0x20)
	struct FGameplayTag LavaBounceCue; // 0xbf0(0x08)

	void SurfaceCleanup(enum class EPhysicalSurface SurfaceType); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.SurfaceCleanup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LavaBounce(struct UObject* AvatarActor); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.LavaBounce // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HotfixableGEApplication(struct FScalableFloat Input, struct UGameplayEffect* GameplayEffectAppliedOnTrue, struct UGameplayEffect* GameplayEffectAppliedOnFalse); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.HotfixableGEApplication // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveGameplayEffects(); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.RemoveGameplayEffects // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData EventData); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.K2_ActivateAbilityFromEvent // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void MulticastLavaBounce(struct UObject* AvatarActor); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.MulticastLavaBounce // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GAB_SurfaceChange_Vehicle(int32_t EntryPoint); // Function GAB_SurfaceChange_Vehicle.GAB_SurfaceChange_Vehicle_C.ExecuteUbergraph_GAB_SurfaceChange_Vehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

