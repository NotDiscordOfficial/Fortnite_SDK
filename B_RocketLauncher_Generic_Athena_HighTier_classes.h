// BlueprintGeneratedClass B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C
// Size: 0x13e4 (Inherited: 0x13c0)
struct AB_RocketLauncher_Generic_Athena_HighTier_C : AB_Ranged_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	struct UArrowComponent* RearMuzzleLoc; // 0x13c8(0x08)
	struct UFXSystemAsset* RearMuzzleFXSystem; // 0x13d0(0x08)
	struct FVector RearMuzzleOffsetMultiplier; // 0x13d8(0x0c)

	void UserConstructionScript(); // Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Muzzle Flash FX(bool Persistent Fire); // Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.Muzzle Flash FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier(int32_t EntryPoint); // Function B_RocketLauncher_Generic_Athena_HighTier.B_RocketLauncher_Generic_Athena_HighTier_C.ExecuteUbergraph_B_RocketLauncher_Generic_Athena_HighTier // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

