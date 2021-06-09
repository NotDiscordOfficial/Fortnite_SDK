// BlueprintGeneratedClass B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C
// Size: 0x13dc (Inherited: 0x13c0)
struct AB_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C : AB_Rifle_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x13c0(0x08)
	float ScalePlayerThermal_NewTrack_0_253E51B74F624080BF58BDA99C8B5B64; // 0x13c8(0x04)
	enum class ETimelineDirection ScalePlayerThermal__Direction_253E51B74F624080BF58BDA99C8B5B64; // 0x13cc(0x01)
	char pad_13CD[0x3]; // 0x13cd(0x03)
	struct UTimelineComponent* ScalePlayerThermal; // 0x13d0(0x08)
	float BlendInTime; // 0x13d8(0x04)

	void ScalePlayerThermal__FinishedFunc(); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ScalePlayerThermal__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ScalePlayerThermal__UpdateFunc(); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ScalePlayerThermal__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlayScopePP(); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.PlayScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReverseScopePP(); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ReverseScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceScopeBackImmediatly(); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ForceScopeBackImmediatly // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena(int32_t EntryPoint); // Function B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena.B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena_C.ExecuteUbergraph_B_Rifle_Sniper_Suppressed_ThermalScope_SpyTech_Athena // (Final|UbergraphFunction) // @ game+0xda7c34
};

