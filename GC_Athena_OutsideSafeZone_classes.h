// BlueprintGeneratedClass GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C
// Size: 0x854 (Inherited: 0x7d0)
struct AGC_Athena_OutsideSafeZone_C : AFortGameplayCueNotify_Loop {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7d0(0x08)
	struct UPointLightComponent* Random Lighting Light; // 0x7d8(0x08)
	float LightningFlashTL_LERP_3FDEC95248645BE865DCD0840F99915A; // 0x7e0(0x04)
	enum class ETimelineDirection LightningFlashTL__Direction_3FDEC95248645BE865DCD0840F99915A; // 0x7e4(0x01)
	char pad_7E5[0x3]; // 0x7e5(0x03)
	struct UTimelineComponent* LightningFlashTL; // 0x7e8(0x08)
	struct USoundBase* Storm Sound; // 0x7f0(0x08)
	float LightningFlashDiameter; // 0x7f8(0x04)
	float LightningFlashHeight; // 0x7fc(0x04)
	struct FVector Lightning Spawn Location; // 0x800(0x0c)
	float %ChanceOfLightningMesh; // 0x80c(0x04)
	float Lightning Intensity; // 0x810(0x04)
	float LightningIntensityMin; // 0x814(0x04)
	float LightningIntensityMax; // 0x818(0x04)
	float LightningTimelinePlaySpeedMin; // 0x81c(0x04)
	float LightningTimelinePlaySpeedMax; // 0x820(0x04)
	char pad_824[0x4]; // 0x824(0x04)
	struct APlayerPawn_Athena_C* Player Pawn; // 0x828(0x08)
	float LightningFlashRepeatDelayMin; // 0x830(0x04)
	float LightningFlashRepeatDelayMax; // 0x834(0x04)
	int32_t Storm Stage; // 0x838(0x04)
	struct FGameplayTag StormAudioTag_Low; // 0x83c(0x08)
	struct FGameplayTag StormAudioTag_Medium; // 0x844(0x08)
	struct FGameplayTag StormAudioTag_High; // 0x84c(0x08)

	void Random Lighting Flashes(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Random Lighting Flashes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Location in Circle XY(struct FVector Location Local Space); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.Get Location in Circle XY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RemoveStormAudio(struct APlayerPawn_Athena_C* PlayerPawnAthena); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.RemoveStormAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddStormAudio(struct APlayerPawn_Athena_C* PlayerPawnAthena); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.AddStormAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LightningFlashTL__FinishedFunc(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void LightningFlashTL__UpdateFunc(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.LightningFlashTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStart(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnLoopingStart // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemoval(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UParticleSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.OnRemoval // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void FlashTimeline(); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.FlashTimeline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GC_Athena_OutsideSafeZone(int32_t EntryPoint); // Function GC_Athena_OutsideSafeZone.GC_Athena_OutsideSafeZone_C.ExecuteUbergraph_GC_Athena_OutsideSafeZone // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

