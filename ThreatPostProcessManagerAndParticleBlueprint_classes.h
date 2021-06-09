// BlueprintGeneratedClass ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C
// Size: 0x360 (Inherited: 0x230)
struct AThreatPostProcessManagerAndParticleBlueprint_C : AFortThreatParticleActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x230(0x08)
	struct UAudioComponent* EnterTheStormSound; // 0x238(0x08)
	struct UBillboardComponent* Sprite1; // 0x240(0x08)
	float Ramp_Up_down_values_on_death_NewTrack_0_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x248(0x04)
	enum class ETimelineDirection Ramp_Up_down_values_on_death__Direction_1CA080D642E9F1C3CB297DBE1BD2C9A4; // 0x24c(0x01)
	char pad_24D[0x3]; // 0x24d(0x03)
	struct UTimelineComponent* Ramp Up down values on death; // 0x250(0x08)
	struct FMulticastInlineDelegate NewEventDispatcher; // 0x258(0x10)
	struct FMulticastInlineDelegate NewEventDispatcher0; // 0x268(0x10)
	struct TArray<struct FVector> Array of Cloud Positions; // 0x278(0x10)
	int32_t RecalculateTimer; // 0x288(0x04)
	bool Is Alive; // 0x28c(0x01)
	bool IsAliveJustChanged; // 0x28d(0x01)
	bool IsAlivePrevious; // 0x28e(0x01)
	char pad_28F[0x1]; // 0x28f(0x01)
	int32_t Number Of ticks before checking for the nearest cloud again - when alive; // 0x290(0x04)
	int32_t Number Of ticks before checking for the nearest cloud again - when dead; // 0x294(0x04)
	struct APostProcessVolume* Materialpost; // 0x298(0x08)
	float post process volume falloff  around the threat volume; // 0x2a0(0x04)
	bool ShowRainEffect; // 0x2a4(0x01)
	char pad_2A5[0x3]; // 0x2a5(0x03)
	float DeltaTime; // 0x2a8(0x04)
	float PostProcessTargetWeight; // 0x2ac(0x04)
	float Current Post Process Weight; // 0x2b0(0x04)
	float Post Process Fade in speed; // 0x2b4(0x04)
	bool SoundIsActive; // 0x2b8(0x01)
	bool SoundWasPreviouslyActive; // 0x2b9(0x01)
	bool is On; // 0x2ba(0x01)
	char pad_2BB[0x1]; // 0x2bb(0x01)
	struct FLinearColor ThreatFogPostProcessColor_Morning; // 0x2bc(0x10)
	struct FLinearColor ThreatFogPostProcessColor_Day; // 0x2cc(0x10)
	struct FLinearColor ThreatFogPostProcessColor_Evening; // 0x2dc(0x10)
	struct FLinearColor ThreatFogPostProcessColor_Night; // 0x2ec(0x10)
	char pad_2FC[0x4]; // 0x2fc(0x04)
	struct TArray<struct FBox> Array of Cloud Volumes; // 0x300(0x10)
	float PostProcessWeightModulation; // 0x310(0x04)
	float Ramp Up And Down Anim Values; // 0x314(0x04)
	bool ShowRainOnCameraLens; // 0x318(0x01)
	char pad_319[0x7]; // 0x319(0x07)
	struct AEmitterCameraLensEffectBase* Rain Camera Lens Effect; // 0x320(0x08)
	struct UParticleSystemComponent* LocalizedParticleSystem; // 0x328(0x08)
	bool IsWorldReady; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	float Rain Trace Timer; // 0x334(0x04)
	struct FVector RainTraceOffset; // 0x338(0x0c)
	float RainMultiplierCurrent; // 0x344(0x04)
	float Rain Spawn Rate Exponent; // 0x348(0x04)
	bool TracePrevious; // 0x34c(0x01)
	bool IsAthenaWorld; // 0x34d(0x01)
	bool bThreatOverride; // 0x34e(0x01)
	bool bForceOff; // 0x34f(0x01)
	struct TScriptInterface<None> CameraLensEffectInterface; // 0x350(0x10)

	void SetForceOff(bool bForceOff); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.SetForceOff // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalculatePlayerPositionNearBox(struct FVector BoxMin, struct FVector BoxMax, float VolumePlayerCoveragePercentage); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.CalculatePlayerPositionNearBox // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Ramp Up down values on death__FinishedFunc(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Ramp Up down values on death__UpdateFunc(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.Ramp Up down values on death__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnThreatCloudsChanged(struct TArray<struct FThreatLocationInfo> ThreatLocationInfo); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatCloudsChanged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnWorldReady(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnWorldReady // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void VFX_RainTracePeriodic(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.VFX_RainTracePeriodic // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartTraceTimer(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.StartTraceTimer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceUpdateLensEffect(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ForceUpdateLensEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnThreatOverrideChanged(bool bForceThreatOn); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.OnThreatOverrideChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint(int32_t EntryPoint); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.ExecuteUbergraph_ThreatPostProcessManagerAndParticleBlueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void NewEventDispatcher0__DelegateSignature(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher0__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void NewEventDispatcher__DelegateSignature(); // Function ThreatPostProcessManagerAndParticleBlueprint.ThreatPostProcessManagerAndParticleBlueprint_C.NewEventDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

