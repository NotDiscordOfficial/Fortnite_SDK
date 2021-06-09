// BlueprintGeneratedClass BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C
// Size: 0x578 (Inherited: 0x350)
struct ABP_Valet_AudioController_Parent_C : AFortValetAudioController {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x350(0x08)
	struct USynthComponentMoto* SynthComponentMoto; // 0x358(0x08)
	struct UFortCollisionAudioComponent* CollisionAudio_HitObject; // 0x360(0x08)
	struct UAudioComponent* Horn; // 0x368(0x08)
	struct UAudioComponent* Engine_OnOff; // 0x370(0x08)
	struct UFortLayeredAudioComponent* Engine; // 0x378(0x08)
	struct UFortCollisionAudioComponent* CollisionAudio_Suspension; // 0x380(0x08)
	struct UFortCollisionAudioComponent* CollisionAudio_Body; // 0x388(0x08)
	float Moto_FadeOut_Volume_A91224EC482A9C0F90B4E198803A420B; // 0x390(0x04)
	enum class ETimelineDirection Moto_FadeOut__Direction_A91224EC482A9C0F90B4E198803A420B; // 0x394(0x01)
	char pad_395[0x3]; // 0x395(0x03)
	struct UTimelineComponent* Moto FadeOut; // 0x398(0x08)
	float Shift_Up_Alpha_93F8CCBD410A7922FEA656ACD9B2EFFB; // 0x3a0(0x04)
	enum class ETimelineDirection Shift_Up__Direction_93F8CCBD410A7922FEA656ACD9B2EFFB; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct UTimelineComponent* Shift Up; // 0x3a8(0x08)
	struct TMap<enum class EPhysicalSurface, int32_t> SurfaceToSwitchMap; // 0x3b0(0x50)
	struct TSoftObjectPtr<struct USoundWave> EngineIdleLoopWave; // 0x400(0x28)
	struct FName EngineIdleWaveParam; // 0x428(0x08)
	struct TSoftObjectPtr<struct USoundWave> EngineStartWave; // 0x430(0x28)
	struct FName EngineStartWaveParam; // 0x458(0x08)
	struct TSoftObjectPtr<struct USoundWave> EngineOffWave; // 0x460(0x28)
	struct FName EngineOffWaveParam; // 0x488(0x08)
	struct TSoftObjectPtr<struct USoundWave> HornWave; // 0x490(0x28)
	struct FName HornWaveParam; // 0x4b8(0x08)
	struct USoundBase* ShiftSoundCue; // 0x4c0(0x08)
	struct FVector2D RPMWobbleRange; // 0x4c8(0x08)
	struct UCurveFloat* ShiftUpCurve; // 0x4d0(0x08)
	struct FVector2D ShiftUpCurveRange; // 0x4d8(0x08)
	struct FVector2D ShiftUpPositiveVarianceMultiplier; // 0x4e0(0x08)
	struct FVector2D ShiftUpNegativeVarianceMultiplier; // 0x4e8(0x08)
	struct FVector2D ShiftCurveDurationRange; // 0x4f0(0x08)
	struct USoundBase* WaterEnterSoundCue; // 0x4f8(0x08)
	struct USoundBase* WaterExitSoundCue; // 0x500(0x08)
	struct UMotoSynthPreset* MotoSynthPreset; // 0x508(0x08)
	bool bAssetsLoaded; // 0x510(0x01)
	char pad_511[0x7]; // 0x511(0x07)
	struct USoundBase* TirePoppedSoundCue; // 0x518(0x08)
	struct USoundBase* WindowBreakSoundCue; // 0x520(0x08)
	struct USoundBase* DamagedCue; // 0x528(0x08)
	struct USoundBase* PreDestroySoundCue; // 0x530(0x08)
	struct USoundBase* DestroySoundCue; // 0x538(0x08)
	bool bDestroyed; // 0x540(0x01)
	char pad_541[0x7]; // 0x541(0x07)
	struct UAudioComponent* DamageAudioComponent; // 0x548(0x08)
	struct USoundBase* BoostSoundCue; // 0x550(0x08)
	struct USoundBase* BoostEndSoundCue; // 0x558(0x08)
	int32_t TiresPopped; // 0x560(0x04)
	float DamageValue; // 0x564(0x04)
	bool DamageStateSmoke; // 0x568(0x01)
	bool bMotoSynthStopped; // 0x569(0x01)
	char pad_56A[0x2]; // 0x56a(0x02)
	float TimeSinceAwoken; // 0x56c(0x04)
	struct USoundBase* CollisionBodyLightSoundCue; // 0x570(0x08)

	void OnSuspensionCollision(bool FilteredHit, float Magnitude); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnSuspensionCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBodyCollision(struct FVector HitLocation, struct FVector NormalImpulse, bool FilteredHit, float Magnitude); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnBodyCollision // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LocalPlayerInVehicleBP(bool Result); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.LocalPlayerInVehicleBP // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FVector2D CalculateRPMWobbleRange(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.CalculateRPMWobbleRange // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void GetVehicleSurfaceType(int32_t Surface ID); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.GetVehicleSurfaceType // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Shift Up__FinishedFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Shift Up__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Shift Up__UpdateFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Shift Up__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Moto FadeOut__FinishedFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Moto FadeOut__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Moto FadeOut__UpdateFunc(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Moto FadeOut__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_034A6FEB4ACEA4EE540B238E6A241E24(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E6A241E24 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_034A6FEB4ACEA4EE540B238E9E335119(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E9E335119 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_034A6FEB4ACEA4EE540B238E616A5320(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238E616A5320 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_034A6FEB4ACEA4EE540B238ECEA18750(struct UObject* Loaded); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnLoaded_034A6FEB4ACEA4EE540B238ECEA18750 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCacheReferences(struct AFortDagwoodVehicle* Vehicle); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnCacheReferences // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Engine_K2Node_ComponentBoundEvent_1_OnLayeredAudioComponentOneshot__DelegateSignature(struct UAudioComponent* AudioComponent, struct FName ParameterName, int32_t OneshotIndex); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.BndEvt__Engine_K2Node_ComponentBoundEvent_1_OnLayeredAudioComponentOneshot__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnHandbrake(bool Start); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHandbrake // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTick(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDriverStateChanged(bool Enter); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnDriverStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStopTick(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnStopTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Cancel Tick Stop Rampdown(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.Cancel Tick Stop Rampdown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHorn(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHorn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnShiftGear_Event(bool UpShift); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnShiftGear_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnShiftCompleted_Event(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnShiftCompleted_Event // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWaterStateChanged(bool Is Entering Water); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnWaterStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTirePop(struct FName Bone Name); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnTirePop // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWindowBreak(struct FName Bone Name); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnWindowBreak // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamage(float Damage Value); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnDamage // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDestroy(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnDestroy // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBoostStart(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnBoostStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBoostEnd(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnBoostEnd // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHitPlayer(struct FVector ImpactPoint); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHitPlayer // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnHitBuilding(struct FVector Impact Point); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnHitBuilding // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSleepStateChange(bool Awake); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnSleepStateChange // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Vehicle Surface Changed(enum class EPhysicalSurface SurfaceTypeVehicleIsOn); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.On Vehicle Surface Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateVehicleFade(float Fade Amount); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnUpdateVehicleFade // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnVehicleFadedOut(); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnVehicleFadedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTireModApplied(struct FTireInfo AppliedTireMod); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.OnTireModApplied // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Valet_AudioController_Parent(int32_t EntryPoint); // Function BP_Valet_AudioController_Parent.BP_Valet_AudioController_Parent_C.ExecuteUbergraph_BP_Valet_AudioController_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

