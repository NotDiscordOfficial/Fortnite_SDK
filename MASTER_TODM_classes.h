// BlueprintGeneratedClass MASTER_TODM.MASTER_TODM_C
// Size: 0x1090 (Inherited: 0xe80)
struct AMASTER_TODM_C : AFortTimeOfDayManager {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe80(0x08)
	struct UPostProcessComponent* HeavySSAO_Postprocess; // 0xe88(0x08)
	struct UPostProcessComponent* EditorPostProcessMaterial(HackToWorkAroundTheOutlineShaderBeingInjectedByCodeAtRuntime); // 0xe90(0x08)
	float New_Storm_Timeline_Wind_Strength_5E5E494B489306ED044096A143F228CF; // 0xe98(0x04)
	float New_Storm_Timeline_RainInt_5E5E494B489306ED044096A143F228CF; // 0xe9c(0x04)
	float New_Storm_Timeline_Lightning_Modulator_5E5E494B489306ED044096A143F228CF; // 0xea0(0x04)
	float New_Storm_Timeline_Storm_Ramp_In_Value_5E5E494B489306ED044096A143F228CF; // 0xea4(0x04)
	enum class ETimelineDirection New_Storm_Timeline__Direction_5E5E494B489306ED044096A143F228CF; // 0xea8(0x01)
	char pad_EA9[0x7]; // 0xea9(0x07)
	struct UTimelineComponent* New Storm Timeline; // 0xeb0(0x08)
	float FlashLightning_LightningColorLERP_FA5447C54EBAE729F521C3B243BEC285; // 0xeb8(0x04)
	float FlashLightning_lightning_alpha_FA5447C54EBAE729F521C3B243BEC285; // 0xebc(0x04)
	float FlashLightning_Lightning_Intensity_FA5447C54EBAE729F521C3B243BEC285; // 0xec0(0x04)
	enum class ETimelineDirection FlashLightning__Direction_FA5447C54EBAE729F521C3B243BEC285; // 0xec4(0x01)
	char pad_EC5[0x3]; // 0xec5(0x03)
	struct UTimelineComponent* FlashLightning; // 0xec8(0x08)
	float WindSpeed; // 0xed0(0x04)
	float RandomWeatherWaitTime; // 0xed4(0x04)
	float CurrentAmountOfRandomWeatherTimeLeft; // 0xed8(0x04)
	float NewWeatherLerpAmount; // 0xedc(0x04)
	float WindStrength; // 0xee0(0x04)
	float FutureWindStrength; // 0xee4(0x04)
	float FutureWindSpeed; // 0xee8(0x04)
	bool bPickNewWindConditions; // 0xeec(0x01)
	char pad_EED[0x3]; // 0xeed(0x03)
	float LightningStrength; // 0xef0(0x04)
	float ThreatCloudStormAmount; // 0xef4(0x04)
	bool UseRainWithStorms; // 0xef8(0x01)
	bool Play a Particle Effect Near the players Feet; // 0xef9(0x01)
	bool WindEffects Should be Active; // 0xefa(0x01)
	char pad_EFB[0x5]; // 0xefb(0x05)
	struct UParticleSystemComponent* Storm Foot Particle Outdoor; // 0xf00(0x08)
	struct UParticleSystem* Storm Foot Particle While on Terrain; // 0xf08(0x08)
	struct UParticleSystemComponent* Storm Foot Particle Indoor; // 0xf10(0x08)
	struct UParticleSystem* Storm Foot Particle While NOT on Terrain; // 0xf18(0x08)
	float Storm Wind Strength; // 0xf20(0x04)
	bool Generate Foliage Wind Gusts; // 0xf24(0x01)
	char pad_F25[0x3]; // 0xf25(0x03)
	struct FTimerHandle LightningStrikeTimerHandle; // 0xf28(0x08)
	struct FLinearColor PreviousDirectionalLightColor; // 0xf30(0x10)
	struct FLinearColor Lightning Flash Color; // 0xf40(0x10)
	float Lightning Flash Timeline Min; // 0xf50(0x04)
	float Lightning Flash Timeline Max; // 0xf54(0x04)
	struct FLinearColor SkyboxFogMorningColor; // 0xf58(0x10)
	struct FLinearColor SkyboxFogMorningLitColor; // 0xf68(0x10)
	float SkyboxFogMorningDistance; // 0xf78(0x04)
	float SkyboxFogMorningDiffuseAmount; // 0xf7c(0x04)
	float SkyboxFogMorningEmissiveAmount; // 0xf80(0x04)
	float SkyboxFogMorningLitLength; // 0xf84(0x04)
	float SkyboxFogMorningLitRotation; // 0xf88(0x04)
	float SkyboxFogMorningLitOffset; // 0xf8c(0x04)
	struct FLinearColor SkyboxFogDayColor; // 0xf90(0x10)
	struct FLinearColor SkyboxFogDayLitColor; // 0xfa0(0x10)
	float SkyboxFogDayDistance; // 0xfb0(0x04)
	float SkyboxFogDayDiffuseAmount; // 0xfb4(0x04)
	float SkyboxFogDayEmissiveAmount; // 0xfb8(0x04)
	float SkyboxFogDayLitLength; // 0xfbc(0x04)
	float SkyboxFogDayLitRotation; // 0xfc0(0x04)
	float SkyboxFogDayLitOffset; // 0xfc4(0x04)
	struct FLinearColor SkyboxFogEveningColor; // 0xfc8(0x10)
	struct FLinearColor SkyboxFogEveningLitColor; // 0xfd8(0x10)
	float SkyboxFogEveningDistance; // 0xfe8(0x04)
	float SkyboxFogEveningDiffuseAmount; // 0xfec(0x04)
	float SkyboxFogEveningEmissiveAmount; // 0xff0(0x04)
	float SkyboxFogEveningLitLength; // 0xff4(0x04)
	float SkyboxFogEveningLitRotation; // 0xff8(0x04)
	float SkyboxFogEveningLitOffset; // 0xffc(0x04)
	struct FLinearColor SkyboxFogNightColor; // 0x1000(0x10)
	struct FLinearColor SkyboxFogNightLitColor; // 0x1010(0x10)
	float SkyboxFogNightDistance; // 0x1020(0x04)
	float SkyboxFogNightDiffuseAmount; // 0x1024(0x04)
	float SkyboxFogNightEmissiveAmount; // 0x1028(0x04)
	float SkyboxFogNightLitLength; // 0x102c(0x04)
	float SkyboxFogNightLitRotation; // 0x1030(0x04)
	float SkyboxFogNightLitOffset; // 0x1034(0x04)
	float World Border Cloud Base Color Brightness; // 0x1038(0x04)
	struct FLinearColor World Border Cloud Sub Surface Color and Opacity; // 0x103c(0x10)
	bool EnableCometDynamicPlacement; // 0x104c(0x01)
	char pad_104D[0x3]; // 0x104d(0x03)
	struct FVector4 Night; // 0x1050(0x10)
	struct FVector4 Evening; // 0x1060(0x10)
	struct FVector4 Day; // 0x1070(0x10)
	struct FVector4 Morning; // 0x1080(0x10)

	void EmptyTransform(struct FTransform Transform); // Function MASTER_TODM.MASTER_TODM_C.EmptyTransform // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetHeavySSAO(); // Function MASTER_TODM.MASTER_TODM_C.SetHeavySSAO // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function MASTER_TODM.MASTER_TODM_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FlashLightning__FinishedFunc(); // Function MASTER_TODM.MASTER_TODM_C.FlashLightning__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FlashLightning__UpdateFunc(); // Function MASTER_TODM.MASTER_TODM_C.FlashLightning__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void New Storm Timeline__FinishedFunc(); // Function MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void New Storm Timeline__UpdateFunc(); // Function MASTER_TODM.MASTER_TODM_C.New Storm Timeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void New Storm Timeline__FireOffRain__EventFunc(); // Function MASTER_TODM.MASTER_TODM_C.New Storm Timeline__FireOffRain__EventFunc // (BlueprintEvent) // @ game+0xda7c34
	void StartStorm(); // Function MASTER_TODM.MASTER_TODM_C.StartStorm // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStormStart(); // Function MASTER_TODM.MASTER_TODM_C.OnStormStart // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStormEnd(); // Function MASTER_TODM.MASTER_TODM_C.OnStormEnd // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void LightningStrike(); // Function MASTER_TODM.MASTER_TODM_C.LightningStrike // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function MASTER_TODM.MASTER_TODM_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DisableLightAndFog(bool Enable); // Function MASTER_TODM.MASTER_TODM_C.DisableLightAndFog // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableHDRRendering(); // Function MASTER_TODM.MASTER_TODM_C.EnableHDRRendering // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSSAO(); // Function MASTER_TODM.MASTER_TODM_C.UpdateSSAO // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MASTER_TODM(int32_t EntryPoint); // Function MASTER_TODM.MASTER_TODM_C.ExecuteUbergraph_MASTER_TODM // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

