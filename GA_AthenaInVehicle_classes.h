// BlueprintGeneratedClass GA_AthenaInVehicle.GA_AthenaInVehicle_C
// Size: 0xa98 (Inherited: 0xa70)
struct UGA_AthenaInVehicle_C : UFortGameplayAbility {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct FGameplayTagContainer ExitTag; // 0xa78(0x20)

	void K2_OnEndAbility(bool bWasCancelled); // Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_OnEndAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void K2_ActivateAbility(); // Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.K2_ActivateAbility // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GA_AthenaInVehicle(int32_t EntryPoint); // Function GA_AthenaInVehicle.GA_AthenaInVehicle_C.ExecuteUbergraph_GA_AthenaInVehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

