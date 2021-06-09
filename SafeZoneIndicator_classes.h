// BlueprintGeneratedClass SafeZoneIndicator.SafeZoneIndicator_C
// Size: 0x5d8 (Inherited: 0x498)
struct ASafeZoneIndicator_C : AFortSafeZoneIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UChildActorComponent* BP_StormMeshRotator; // 0x4a0(0x08)
	float VolumetricStormFadeTimeline_StormFadeIn_5D8CED344AED096A33ABDAA94E2E18CD; // 0x4a8(0x04)
	enum class ETimelineDirection VolumetricStormFadeTimeline__Direction_5D8CED344AED096A33ABDAA94E2E18CD; // 0x4ac(0x01)
	char pad_4AD[0x3]; // 0x4ad(0x03)
	struct UTimelineComponent* VolumetricStormFadeTimeline; // 0x4b0(0x08)
	float StormFadeTimeline_StormFadeIn_6FB75EFB416FB419D85F8797DEDD058C; // 0x4b8(0x04)
	enum class ETimelineDirection StormFadeTimeline__Direction_6FB75EFB416FB419D85F8797DEDD058C; // 0x4bc(0x01)
	char pad_4BD[0x3]; // 0x4bd(0x03)
	struct UTimelineComponent* StormFadeTimeline; // 0x4c0(0x08)
	float Pre_Damage_Audio_Ramp_Intensity_05A077AD4FED08F2426E5CA16BD41D7C; // 0x4c8(0x04)
	enum class ETimelineDirection Pre_Damage_Audio_Ramp__Direction_05A077AD4FED08F2426E5CA16BD41D7C; // 0x4cc(0x01)
	char pad_4CD[0x3]; // 0x4cd(0x03)
	struct UTimelineComponent* Pre Damage Audio Ramp; // 0x4d0(0x08)
	struct USoundBase* ShieldBoundaryLoopSound; // 0x4d8(0x08)
	struct USoundBase* HoldingLoopSound; // 0x4e0(0x08)
	float HoldingStartTime_1; // 0x4e8(0x04)
	char pad_4EC[0x4]; // 0x4ec(0x04)
	struct USoundBase* HoldingLoopTickSound; // 0x4f0(0x08)
	struct UMaterialInstanceDynamic* SafeZoneMID; // 0x4f8(0x08)
	struct FTimerHandle MegaStormDamageTimer; // 0x500(0x08)
	float MegastormAudioDuration; // 0x508(0x04)
	char pad_50C[0x4]; // 0x50c(0x04)
	struct FMulticastInlineDelegate OnSafeZoneStateChangeDispatcher; // 0x510(0x10)
	enum class EFortSafeZoneState SafeZoneState; // 0x520(0x01)
	char pad_521[0x7]; // 0x521(0x07)
	struct TMap<enum class EFortSafeZoneState, struct FVector2D> SafeZoneStateThunderFreqs; // 0x528(0x50)
	struct TMap<enum class EFortSafeZoneState, float> SafeZoneStateThunderDuration; // 0x578(0x50)
	bool OceanEnabled; // 0x5c8(0x01)
	char pad_5C9[0x3]; // 0x5c9(0x03)
	int32_t NumberofImpactEffects; // 0x5cc(0x04)
	float ImapctFX_MaxHeight; // 0x5d0(0x04)
	float ImapctFX_MinHeight; // 0x5d4(0x04)

	void GetRandomPointInPlayerDir(struct FVector Position); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointInPlayerDir // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetRandomPointOnBoundary(struct FVector Position); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetRandomPointOnBoundary // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetAthenaGameState(struct AAthena_GameState_C* AthenaGS); // Function SafeZoneIndicator.SafeZoneIndicator_C.GetAthenaGameState // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void HandleInsideOutsideMix(); // Function SafeZoneIndicator.SafeZoneIndicator_C.HandleInsideOutsideMix // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitClosestPointAudio(); // Function SafeZoneIndicator.SafeZoneIndicator_C.InitClosestPointAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function SafeZoneIndicator.SafeZoneIndicator_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Pre Damage Audio Ramp__FinishedFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Pre Damage Audio Ramp__UpdateFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Pre Damage Audio Ramp__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void StormFadeTimeline__FinishedFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void StormFadeTimeline__UpdateFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.StormFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void VolumetricStormFadeTimeline__FinishedFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void VolumetricStormFadeTimeline__UpdateFunc(); // Function SafeZoneIndicator.SafeZoneIndicator_C.VolumetricStormFadeTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void stormy(float NewParam); // Function SafeZoneIndicator.SafeZoneIndicator_C.stormy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBeginStartingStateEffectsEvent(); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnBeginStartingStateEffectsEvent // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ResetSafeZoneScale(); // Function SafeZoneIndicator.SafeZoneIndicator_C.ResetSafeZoneScale // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Megastorm Pre Damage Tell(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Megastorm Pre Damage Tell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Start Megastorm Audio(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Start Megastorm Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Play Storm Grow Audio(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Play Storm Grow Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Trigger Distant Storm Oneshot(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Trigger Distant Storm Oneshot // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Stop Distant Storm Oneshots(); // Function SafeZoneIndicator.SafeZoneIndicator_C.Stop Distant Storm Oneshots // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSafeZoneStateChange(enum class EFortSafeZoneState NewState, bool bInitial); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChange // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function SafeZoneIndicator.SafeZoneIndicator_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void DestroySafeZone(); // Function SafeZoneIndicator.SafeZoneIndicator_C.DestroySafeZone // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SafeZoneIndicator(int32_t EntryPoint); // Function SafeZoneIndicator.SafeZoneIndicator_C.ExecuteUbergraph_SafeZoneIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnSafeZoneStateChangeDispatcher__DelegateSignature(enum class EFortSafeZoneState SafeZoneState); // Function SafeZoneIndicator.SafeZoneIndicator_C.OnSafeZoneStateChangeDispatcher__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

