// BlueprintGeneratedClass B_SoundIndicator_01.B_SoundIndicator_01_C
// Size: 0x750 (Inherited: 0x390)
struct AB_SoundIndicator_01_C : AFortSoundCameraLensEffect {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x390(0x08)
	struct FRuntimeFloatCurve Gunshot Falloff Long Range; // 0x398(0x88)
	struct FRuntimeFloatCurve Chest Falloff; // 0x420(0x88)
	struct FRuntimeFloatCurve Footsteps Falloff; // 0x4a8(0x88)
	struct FRuntimeFloatCurve Gunshot Falloff Mid Range; // 0x530(0x88)
	struct FRuntimeFloatCurve Gunshot Falloff Melee; // 0x5b8(0x88)
	struct FRuntimeFloatCurve Glider Falloff; // 0x640(0x88)
	struct FRuntimeFloatCurve Plane Falloff; // 0x6c8(0x88)

	struct FRuntimeFloatCurve GetStrengthCurveForActiveType(); // Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetStrengthCurveForActiveType // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct FLinearColor GetDefaultTint(); // Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultTint // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UTexture* GetDefaultIcon(); // Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetDefaultIcon // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FRuntimeFloatCurve GetWeaponCurve(); // Function B_SoundIndicator_01.B_SoundIndicator_01_C.GetWeaponCurve // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void ExecuteUbergraph_B_SoundIndicator_01(int32_t EntryPoint); // Function B_SoundIndicator_01.B_SoundIndicator_01_C.ExecuteUbergraph_B_SoundIndicator_01 // (Final|UbergraphFunction) // @ game+0xda7c34
};

