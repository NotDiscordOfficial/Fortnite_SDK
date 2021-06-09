// BlueprintGeneratedClass Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C
// Size: 0x2484 (Inherited: 0x1b20)
struct AValet_BasicCar_Vehicle_C : AFortDagwoodVehicle {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1b20(0x08)
	struct UChildActorComponent* AudioControllerBP; // 0x1b28(0x08)
	struct UParticleSystemComponent* FireSystem; // 0x1b30(0x08)
	struct UBoxComponent* OverlapVolume; // 0x1b38(0x08)
	float TimeLineBoostFast_JetSparksCounts_23CFE84A48582AA363A21891FC410F04; // 0x1b40(0x04)
	float TimeLineBoostFast_JetFlameHight_23CFE84A48582AA363A21891FC410F04; // 0x1b44(0x04)
	enum class ETimelineDirection TimeLineBoostFast__Direction_23CFE84A48582AA363A21891FC410F04; // 0x1b48(0x01)
	char pad_1B49[0x7]; // 0x1b49(0x07)
	struct UTimelineComponent* TimeLineBoostFast; // 0x1b50(0x08)
	float TimeLineBoost_JetFlameHight_46B59FC64BBD70FB1C84F292AABA9218; // 0x1b58(0x04)
	enum class ETimelineDirection TimeLineBoost__Direction_46B59FC64BBD70FB1C84F292AABA9218; // 0x1b5c(0x01)
	char pad_1B5D[0x3]; // 0x1b5d(0x03)
	struct UTimelineComponent* TimeLineBoost; // 0x1b60(0x08)
	float Fade_Fade_C0442AEC47AB69188F18FBB055F64424; // 0x1b68(0x04)
	enum class ETimelineDirection Fade__Direction_C0442AEC47AB69188F18FBB055F64424; // 0x1b6c(0x01)
	char pad_1B6D[0x3]; // 0x1b6d(0x03)
	struct UTimelineComponent* Fade; // 0x1b70(0x08)
	float OutOfFuel_Intensity_C83D96E348E80AB3A7B67182D3F6C892; // 0x1b78(0x04)
	enum class ETimelineDirection OutOfFuel__Direction_C83D96E348E80AB3A7B67182D3F6C892; // 0x1b7c(0x01)
	char pad_1B7D[0x3]; // 0x1b7d(0x03)
	struct UTimelineComponent* OutOfFuel; // 0x1b80(0x08)
	struct USoundBase* OnDeathSound; // 0x1b88(0x08)
	float MaxSpeedForAccelFX; // 0x1b90(0x04)
	char pad_1B94[0x4]; // 0x1b94(0x04)
	struct AFortPlayerPawn* PassengerPawn; // 0x1b98(0x08)
	struct APlayerController* DrivingPlayerController; // 0x1ba0(0x08)
	struct AFortPlayerPawn* DriverPawn; // 0x1ba8(0x08)
	struct AFortPlayerPawn* LastDriver; // 0x1bb0(0x08)
	struct AFortPlayerPawnAthena* LastHitPlayer; // 0x1bb8(0x08)
	bool IgnoreHitLastDriver; // 0x1bc0(0x01)
	bool PassengerIsInstigator; // 0x1bc1(0x01)
	char pad_1BC2[0x6]; // 0x1bc2(0x06)
	struct FScalableFloat CanLaunchPlayer; // 0x1bc8(0x28)
	struct APlayerController* PassengerPlayerController; // 0x1bf0(0x08)
	struct TArray<struct AFortPlayerPawn*> Passengers; // 0x1bf8(0x10)
	bool Debug_NoCameraShake; // 0x1c08(0x01)
	char pad_1C09[0x7]; // 0x1c09(0x07)
	struct TArray<struct AFortPlayerPawn*> BounceIgnoreList; // 0x1c10(0x10)
	float DestructionAngle; // 0x1c20(0x04)
	float MinSpeedToDestroyObjects; // 0x1c24(0x04)
	float EngineSoundMaxDistance; // 0x1c28(0x04)
	float SavedDamageValueForMID; // 0x1c2c(0x04)
	struct AActor* VehicleHitActor; // 0x1c30(0x08)
	struct UParticleSystemComponent* InWaterFX; // 0x1c38(0x08)
	struct FGameplayCueParameters GCParamsEmpty; // 0x1c40(0xc0)
	struct FGameplayTag HitPlayerCue; // 0x1d00(0x08)
	struct FGameplayTag HitFiendCue; // 0x1d08(0x08)
	struct USoundBase* WaterMovementSound; // 0x1d10(0x08)
	struct USoundBase* InWaterLoopSound; // 0x1d18(0x08)
	struct UParticleSystem* InWaterSplashFX; // 0x1d20(0x08)
	struct UParticleSystem* InWaterLoopingFX; // 0x1d28(0x08)
	float AccelRumbleIntensityFalloff; // 0x1d30(0x04)
	char pad_1D34[0x4]; // 0x1d34(0x04)
	struct UParticleSystem* DestroyedFX; // 0x1d38(0x08)
	struct UForceFeedbackEffect* MovementForceFeedback; // 0x1d40(0x08)
	struct UMatineeCameraShake* Movement_CameraShake; // 0x1d48(0x08)
	struct UMatineeCameraShake* Driver_CameraShake; // 0x1d50(0x08)
	struct UGameplayEffect* GE_DamageWalls_301; // 0x1d58(0x08)
	struct UGameplayEffect* GE_DamageWalls_201; // 0x1d60(0x08)
	bool bLocalPlayerADS; // 0x1d68(0x01)
	char pad_1D69[0x7]; // 0x1d69(0x07)
	struct UMatineeCameraShake* BigHit_CameraShake; // 0x1d70(0x08)
	struct UForceFeedbackEffect* BigHitForceFeedback; // 0x1d78(0x08)
	struct UForceFeedbackEffect* SmallHitForceFeedback; // 0x1d80(0x08)
	struct UMatineeCameraShake* SmallHit_CameraShake; // 0x1d88(0x08)
	struct UForceFeedbackEffect* SpringCompressionForceFeedback; // 0x1d90(0x08)
	struct UMatineeCameraShake* DriverCameraShake; // 0x1d98(0x08)
	struct UMatineeCameraShake* OffRoadCamera_Shake; // 0x1da0(0x08)
	float OffRoadCameraShakeFalloff; // 0x1da8(0x04)
	float OffRoadCameraSpeedForShakes; // 0x1dac(0x04)
	float OffRoadNormalizedSpeedForRumble; // 0x1db0(0x04)
	float OffRoadCameraMinFrequency; // 0x1db4(0x04)
	float OffRoadCameraMaxFrequency; // 0x1db8(0x04)
	float OffRoadCameraY_Amp; // 0x1dbc(0x04)
	float OffRoadCameraZ_Amp; // 0x1dc0(0x04)
	float OffRoadCameraRot_Amp; // 0x1dc4(0x04)
	float AccelRumbleIntensityPower; // 0x1dc8(0x04)
	float AccelRumbleIntensity; // 0x1dcc(0x04)
	bool LargeRumble; // 0x1dd0(0x01)
	char pad_1DD1[0x7]; // 0x1dd1(0x07)
	struct UMatineeCameraShake* OffRoad_CameraShake; // 0x1dd8(0x08)
	float VehicleMaxSpeed; // 0x1de0(0x04)
	float ImpactEjectUpVelocity; // 0x1de4(0x04)
	float ImpactEjectForwardVelocity; // 0x1de8(0x04)
	char pad_1DEC[0x4]; // 0x1dec(0x04)
	struct UMatineeCameraShake* OutOfFuelCameraShake; // 0x1df0(0x08)
	float MaxSpeedForAccelRumble; // 0x1df8(0x04)
	float MinSkidAmountRequired; // 0x1dfc(0x04)
	float TireSkidRumbleFalloff; // 0x1e00(0x04)
	float MinSpeedForTireSkid; // 0x1e04(0x04)
	float MinSpeedForBrakingSkid; // 0x1e08(0x04)
	float MinDamageToEjectDriver; // 0x1e0c(0x04)
	struct UParticleSystem* WindshieldBreakFX; // 0x1e10(0x08)
	struct FTimerHandle HandbrakeSmoke; // 0x1e18(0x08)
	struct UMatineeCameraShake* AccelCameraShake; // 0x1e20(0x08)
	struct UMatineeCameraShake* HandbrakeCameraShake; // 0x1e28(0x08)
	struct UMatineeCameraShake* Handbrake_CameraShake; // 0x1e30(0x08)
	float HandbrakeCameraShakeFalloff; // 0x1e38(0x04)
	float HandbrakeCameraSpeedForShakes; // 0x1e3c(0x04)
	float NormalizedSpeedForRumble; // 0x1e40(0x04)
	float HandbrakeCameraMinFrequency; // 0x1e44(0x04)
	float HandbrakeCameraMaxFrequency; // 0x1e48(0x04)
	float HandbrakeCameraY_Amp; // 0x1e4c(0x04)
	float HandbrakeCameraZ_Amp; // 0x1e50(0x04)
	float HandbrakeCameraRot_Amp; // 0x1e54(0x04)
	float FuelLeakPerDrop; // 0x1e58(0x04)
	float FuelLeakFrequency; // 0x1e5c(0x04)
	struct FTimerHandle LeakingFuelTimer; // 0x1e60(0x08)
	bool bFuelLeaking; // 0x1e68(0x01)
	char pad_1E69[0x7]; // 0x1e69(0x07)
	struct TArray<enum class EObjectTypeQuery> LeakObjectTrace; // 0x1e70(0x10)
	bool bIsOnFire; // 0x1e80(0x01)
	char pad_1E81[0x3]; // 0x1e81(0x03)
	int32_t DripOntoFuelCount; // 0x1e84(0x04)
	struct FVector DripDistanceCheck; // 0x1e88(0x0c)
	char pad_1E94[0x4]; // 0x1e94(0x04)
	struct AAthena_PlayerController_C* DamagingPlayerController; // 0x1e98(0x08)
	struct AFortPlayerPawn* DamagingPlayerPawn; // 0x1ea0(0x08)
	struct UGameplayEffect* GE_DamagePlayerHit; // 0x1ea8(0x08)
	struct UMatineeCameraShake* CameraShakeBoost; // 0x1eb0(0x08)
	struct UMatineeCameraShake* BoostCameraShake; // 0x1eb8(0x08)
	struct UParticleSystem* ExplodeFX; // 0x1ec0(0x08)
	struct UGameplayEffect* GE_RimScrapeDamage; // 0x1ec8(0x08)
	float LowFuelThreshold; // 0x1ed0(0x04)
	char pad_1ED4[0x4]; // 0x1ed4(0x04)
	struct USoundBase* LowFuelWarningSound; // 0x1ed8(0x08)
	struct USoundBase* OutOfFuelSound_1; // 0x1ee0(0x08)
	struct UParticleSystem* PopTireFX; // 0x1ee8(0x08)
	struct UParticleSystem* WheelScrapeSparksFX; // 0x1ef0(0x08)
	struct FName WheelSocket_FR; // 0x1ef8(0x08)
	struct FName WheelSocket_FL; // 0x1f00(0x08)
	struct FName WheelSocket_BR; // 0x1f08(0x08)
	struct FName WheelSocket_BL; // 0x1f10(0x08)
	struct FName WheelSocketBR_Mid; // 0x1f18(0x08)
	struct FName WheelSocketBL_Mid; // 0x1f20(0x08)
	bool MidR_TirePop; // 0x1f28(0x01)
	bool MidL_TirePop; // 0x1f29(0x01)
	bool IsBigRig; // 0x1f2a(0x01)
	char pad_1F2B[0x5]; // 0x1f2b(0x05)
	struct UMaterialInstanceDynamic* BodyMID; // 0x1f30(0x08)
	float DamageValue; // 0x1f38(0x04)
	char pad_1F3C[0x4]; // 0x1f3c(0x04)
	struct UParticleSystem* WheelScrapeDustFX; // 0x1f40(0x08)
	struct FVector LaunchVelocity; // 0x1f48(0x0c)
	char pad_1F54[0x4]; // 0x1f54(0x04)
	struct TArray<struct AActor*> TargetedActors; // 0x1f58(0x10)
	struct AFortPawn* ExplodeInstigator; // 0x1f68(0x08)
	struct TArray<struct UGameplayEffect*> GE_ExplodeBuildingDamage; // 0x1f70(0x10)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0x1f80(0x10)
	float ExplodeRadius; // 0x1f90(0x04)
	char pad_1F94[0x4]; // 0x1f94(0x04)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0x1f98(0x08)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0x1fa0(0x08)
	struct FVector ExplodeVehicleSpin; // 0x1fa8(0x0c)
	float ExplodeVehicleImpulse; // 0x1fb4(0x04)
	float Turn Signal Update Frequencey; // 0x1fb8(0x04)
	float BasePontoonRadiusFront; // 0x1fbc(0x04)
	float BasePontoonRadiusRear; // 0x1fc0(0x04)
	float MinPontoonRadiusToSink; // 0x1fc4(0x04)
	float ReduceRadiusTerTickRear; // 0x1fc8(0x04)
	float ReduceRadiusTerTickFront; // 0x1fcc(0x04)
	float ScalePontoonTickRateFront; // 0x1fd0(0x04)
	float ScalePontoonTickRateRear; // 0x1fd4(0x04)
	float ScaledPontoonRadiusRear; // 0x1fd8(0x04)
	float ScaledPontoonRadiusFront; // 0x1fdc(0x04)
	struct FTimerHandle ScalePontoonTimerFront; // 0x1fe0(0x08)
	struct FTimerHandle ScalePontoonTimerRear; // 0x1fe8(0x08)
	float FuelGainPerInteract; // 0x1ff0(0x04)
	char pad_1FF4[0x4]; // 0x1ff4(0x04)
	struct UNiagaraComponent* FX Road Interaction And Exhaust; // 0x1ff8(0x08)
	struct FTimerHandle TimerSnapFoamToWaterSurface; // 0x2000(0x08)
	struct UNiagaraComponent* NS_LargeSplashFX; // 0x2008(0x08)
	struct UNiagaraComponent* FX_LowFuelSputterSmoke; // 0x2010(0x08)
	bool Tire_Popped_FL; // 0x2018(0x01)
	bool Tire_Popped_FR; // 0x2019(0x01)
	bool Tire_Popped_RL; // 0x201a(0x01)
	bool Tire_Popped_RR; // 0x201b(0x01)
	struct FVector Wheel_Scale_Rear; // 0x201c(0x0c)
	struct FVector Wheel_Scale_Front; // 0x2028(0x0c)
	struct FVector Tire_Scale_Rear; // 0x2034(0x0c)
	struct FVector Tire_Scale_Front; // 0x2040(0x0c)
	float MinSpeedForDust; // 0x204c(0x04)
	struct FLinearColor FX_Dust_Color_Dirt; // 0x2050(0x10)
	struct FLinearColor FX_Dust_Color_Default; // 0x2060(0x10)
	struct UNiagaraComponent* FX_LeakingFuel; // 0x2070(0x08)
	char pad_2078[0x8]; // 0x2078(0x08)
	struct FTransform WindowTransform_F; // 0x2080(0x30)
	struct FTransform WindowTransform_FL; // 0x20b0(0x30)
	struct FTransform WindowTransform_FR; // 0x20e0(0x30)
	struct FTransform WindowTransform_BL; // 0x2110(0x30)
	struct FTransform WindowTransform_BR; // 0x2140(0x30)
	struct FTransform WindowTransform_B; // 0x2170(0x30)
	bool CanExplodeHack; // 0x21a0(0x01)
	bool VehicleImpulseOnExplode; // 0x21a1(0x01)
	char pad_21A2[0x2]; // 0x21a2(0x02)
	float ExplodeSpinThrustMagnitude; // 0x21a4(0x04)
	struct UNiagaraSystem* PopTireFXNiagara; // 0x21a8(0x08)
	struct UNiagaraSystem* ExplodeFXNiagara; // 0x21b0(0x08)
	struct UNiagaraComponent* FX_TireSkid; // 0x21b8(0x08)
	float Damage_Stage1; // 0x21c0(0x04)
	float Damage_Stage2; // 0x21c4(0x04)
	float Damage_Stage3Critical; // 0x21c8(0x04)
	float VehicleFallSpeed; // 0x21cc(0x04)
	struct UNiagaraSystem* WreckFXNiagara; // 0x21d0(0x08)
	struct ABP_Vehicle_Radio_C* VehicleRadio; // 0x21d8(0x08)
	float LastCollisionTime; // 0x21e0(0x04)
	float MinTimeBetweenCollision; // 0x21e4(0x04)
	float ScrapeImpact_Strength; // 0x21e8(0x04)
	bool isVehicleOccupied?; // 0x21ec(0x01)
	char pad_21ED[0x3]; // 0x21ed(0x03)
	struct FString SportCar; // 0x21f0(0x10)
	struct FString SportCarUpgrade; // 0x2200(0x10)
	struct FString SemiTruck; // 0x2210(0x10)
	struct UNiagaraComponent* FX_LeakingFuel_r; // 0x2220(0x08)
	bool IsInDeepWater; // 0x2228(0x01)
	char pad_2229[0x3]; // 0x2229(0x03)
	int32_t NumWheels; // 0x222c(0x04)
	struct TArray<float> WheelSpringLength; // 0x2230(0x10)
	float SurfaceChangeTime; // 0x2240(0x04)
	char pad_2244[0x4]; // 0x2244(0x04)
	struct ABP_Valet_AudioController_Parent_C* AudioControllerClass; // 0x2248(0x08)
	float MaxDepthToEject; // 0x2250(0x04)
	char pad_2254[0x4]; // 0x2254(0x04)
	struct AFortWaterBodyActor* WaterBody; // 0x2258(0x08)
	struct FTimerHandle WaterDepthCheckTimer; // 0x2260(0x08)
	float Explosion_CameraShake_Radius; // 0x2268(0x04)
	float SpawnImpactFX_VehicleSpeed; // 0x226c(0x04)
	float SpawnImpactFX_VehicleSpeed_Limit; // 0x2270(0x04)
	float ExplodeImpulseZ_Magnitude; // 0x2274(0x04)
	float MaxSpeedToHandbrakeHaptics; // 0x2278(0x04)
	float ExplodePlayerImpulse; // 0x227c(0x04)
	float ScalePlayerHitImpulseBySpeed; // 0x2280(0x04)
	float ScalePlayerHitImpulseNoDriver; // 0x2284(0x04)
	int32_t RandomMatInt; // 0x2288(0x04)
	char pad_228C[0x4]; // 0x228c(0x04)
	struct TArray<struct UMaterialInterface*> SK_RandomMat2_Array; // 0x2290(0x10)
	struct TArray<struct UMaterialInterface*> SK_RandomMat0_Array; // 0x22a0(0x10)
	struct TArray<struct UMaterialInterface*> SK_RandomMat1_Array; // 0x22b0(0x10)
	struct UTexture* Diffuse; // 0x22c0(0x08)
	struct UTexture* Mask; // 0x22c8(0x08)
	struct UTexture* Normal; // 0x22d0(0x08)
	struct UTexture* ScratchGrime; // 0x22d8(0x08)
	struct UTexture* SpecularMask; // 0x22e0(0x08)
	struct UMaterialInstanceDynamic* Mid; // 0x22e8(0x08)
	struct UMaterialInstanceDynamic* DestroyedMID; // 0x22f0(0x08)
	struct FLinearColor Primary Color; // 0x22f8(0x10)
	struct UGameplayEffect* GE_ApplyInValetTag; // 0x2308(0x08)
	struct FGameplayTagContainer InValetVehicleTag; // 0x2310(0x20)
	struct UGameplayEffect* GE_ApplyAllowFlippingTag; // 0x2330(0x08)
	struct FGameplayTagContainer VehicleAllowFlippingTag; // 0x2338(0x20)
	struct FScalableFloat HotfixCurieEnabled; // 0x2358(0x28)
	struct UAudioComponent* FuelGainedLoop; // 0x2380(0x08)
	struct USoundBase* GainFuelSound; // 0x2388(0x08)
	float CurrentFuelGainPercent; // 0x2390(0x04)
	char pad_2394[0x4]; // 0x2394(0x04)
	struct UNiagaraComponent* DamageFX; // 0x2398(0x08)
	struct FScalableFloat RagdollEnabled; // 0x23a0(0x28)
	struct AFN_RadialForce_C* FN_RadialForce; // 0x23c8(0x08)
	struct FScalableFloat Row_ShouldDropLootOnDamage; // 0x23d0(0x28)
	struct FScalableFloat LootDropDamageThresholds; // 0x23f8(0x28)
	int32_t LootDropCurentThreshold; // 0x2420(0x04)
	struct FName LootOnDamagePackage; // 0x2424(0x08)
	float LootTossOffset; // 0x242c(0x04)
	struct UParticleSystem* FX_LootDropOnDamagedSpawn; // 0x2430(0x08)
	float LootTossMin; // 0x2438(0x04)
	struct FGameplayTag Boost_GC; // 0x243c(0x08)
	char pad_2444[0x4]; // 0x2444(0x04)
	struct UNiagaraSystem* Wheel Scrape Sparks FX; // 0x2448(0x08)
	struct UNiagaraSystem* Wheel Scrape Dust FX; // 0x2450(0x08)
	struct UNiagaraComponent* NS_TurboBoost_FX; // 0x2458(0x08)
	struct FRotator BoostFXRotation; // 0x2460(0x0c)
	bool bBoostUsesQuadExhaust; // 0x246c(0x01)
	char pad_246D[0x3]; // 0x246d(0x03)
	float BoostQuadExhaustHorizontalOffset; // 0x2470(0x04)
	float BoostJetLocationOffsetX; // 0x2474(0x04)
	float BoostJetLocationOffsetZ; // 0x2478(0x04)
	float BoostJetFlameHeight; // 0x247c(0x04)
	float BoostJetFlameHeightMax; // 0x2480(0x04)

	void CreateBaseMID(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CreateBaseMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateDestroyedMIDApply(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CreateDestroyedMIDApply // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GenerateRandomInt(struct TArray<struct UMaterialInterface*> TargetArray); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.GenerateRandomInt // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_RandomMatInt(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnRep_RandomMatInt // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DamgeStateSetAmount(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DamgeStateSetAmount // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleGlassFX(struct FName AttachPointName, struct FTransform InTransform); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ToggleGlassFX // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleDustFX(bool InValue); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ToggleDustFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetFxSettingsForVehicleType(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SetFxSettingsForVehicleType // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TurnSignalsandBrakes(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TurnSignalsandBrakes // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DamageBuildings(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DamageBuildings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FVector CalcImpulseDirection(struct AActor* Vehicle, float Magnitude); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CalcImpulseDirection // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetFallInstigator(struct AFortPlayerPawnAthena* Pawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SetFallInstigator // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Damageable Part Changed(struct FVehicleDamageablePartConfig PartConfig, struct FVehicleDamageablePart Part, bool NewlyDisabled); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Damageable Part Changed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IsVehicleAccelerating?(float MaxSpeed, bool Return); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.IsVehicleAccelerating? // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	float CalcAccelRumbleIntensity(float MaxIntensity); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CalcAccelRumbleIntensity // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SendDamageValueToMaterials(float ParameterValue); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SendDamageValueToMaterials // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetIconPlacement(struct AActor* SelfActor, struct AActor* ViewingActor, struct FVector OutLocation, struct FVector OutExtents); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.GetIconPlacement // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void DestroyOrDamageBuildingPiece(struct ABuildingActor* BuildingActor, bool CheckForHealth, struct UGameplayEffect* GameplayEffectClass, float DestroyThreshold); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DestroyOrDamageBuildingPiece // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayHapticsOnHit(float HitMagnitude); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PlayHapticsOnHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OutOfFuel__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OutOfFuel__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void OutOfFuel__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OutOfFuel__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Fade__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Fade__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Fade__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Fade__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void TimeLineBoostFast__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoostFast__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TimeLineBoostFast__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoostFast__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void TimeLineBoost__FinishedFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoost__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void TimeLineBoost__UpdateFunc(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TimeLineBoost__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnCurieActive_1D9CDF534780404ABF0AA6893CD541A6(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCurieActive_1D9CDF534780404ABF0AA6893CD541A6 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReady_04DD3D3E4FBD21BFC0E43DAB4B40FA90(struct AGameStateBase* GameState); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnReady_04DD3D3E4FBD21BFC0E43DAB4B40FA90 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void UpdateMovementCosmeticParameters(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UpdateMovementCosmeticParameters // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCollisionHitEffects(struct FVector HitLocation, struct FVector HitNormalImpulse, struct FVector HitFrictionImpulse, struct FVector HitNormal, struct AActor* HitActor, enum class EPhysicalSurface HitSurfaceType); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCollisionHitEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPawnEnterVehicle(struct AFortPlayerPawn* PlayerPawn, int32_t SeatIdx); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnPawnEnterVehicle // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPawnExitVehicle(struct AFortPlayerPawn* PlayerPawn, struct FName ExitSocketName); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnPawnExitVehicle // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDamaged(float Damage, struct FGameplayTagContainer DamageTags, struct FGameplayEffectContextHandle EffectContext, struct AController* EventInstigator, struct AActor* DamageCauser); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnDamaged // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Update Damage State(float Damage); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Update Damage State // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSpringCompression(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnSpringCompression // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void LocalPassengerADS(bool IsADS); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.LocalPassengerADS // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BndEvt__SkeletalMesh_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Handle Spring Compression Audio(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.Handle Spring Compression Audio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterVolume(struct FVector WaterSurfacePoint); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnEnteredWaterVolume // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnExitedWaterVolume(struct FVector WaterSurfacePoint); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnExitedWaterVolume // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void CheckWater(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CheckWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PawnHitByVehicle(struct AFortPawn* Pawn, struct FVector ImpactPoint, struct FVector ImpactNormal, struct FVector LaunchVector); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PawnHitByVehicle // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStopTick(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStopTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHoldExitStarted(struct AFortPawn* ExitingPawn, float ExitDuration); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnHoldExitStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHoldExitStopped(struct AFortPawn* ExitingPawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnHoldExitStopped // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHonk(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnHonk // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFireStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnFireStart // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFireStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnFireStop // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OffRoadCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OffRoadCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OffRoadShakeEnd(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OffRoadShakeEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopAccelRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopAccelRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartAccelRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartAccelRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleTireSmoke(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HandleTireSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateTireSmoke(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ActivateTireSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateTireSmoke(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DeactivateTireSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnGainedFuel(float NewPercent); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnGainedFuel // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventOutOfFuel(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.EventOutOfFuel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartOutOfGasRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartOutOfGasRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopOutOfGasRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopOutOfGasRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ManageAccelRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ManageAccelRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnImpactDamageApplied(float Damage, struct FVector ImpactNormal); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnImpactDamageApplied // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void TireSkid(bool Condition); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.TireSkid // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SkidRumbleStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SkidRumbleStop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SkidRumbleStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SkidRumbleStart // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BrakingRumbleStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BrakingRumbleStart // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BrakingRumbleStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BrakingRumbleStop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStartHandbrake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStartHandbrake // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStopHandbrake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStopHandbrake // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void StopHandbrakeHaptics(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopHandbrakeHaptics // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandbrakeSkid(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HandbrakeSkid // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateOffRoadCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UpdateOffRoadCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AccelCameraShakeBegin(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.AccelCameraShakeBegin // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AccelCameraShakeEnd(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.AccelCameraShakeEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartHandbrakeCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartHandbrakeCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopHandbrakeCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopHandbrakeCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateHandbrakeCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.UpdateHandbrakeCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFuelTouchedFire(struct AActor* SourceActor); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnFuelTouchedFire // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnBoostStarted(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BP_OnBoostStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnBoostFinished(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BP_OnBoostFinished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void StopBoostCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopBoostCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BoostRumbleStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BoostRumbleStop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRimScrapeDamage(int32_t TireIndex); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnRimScrapeDamage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExplode(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnExplode // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ResetLastHitPlayer(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ResetLastHitPlayer // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDamageablePartHealthChanged_Event(struct FVehicleDamageablePartConfig PartConfig, struct FVehicleDamageablePart Part, bool bNewlyDisabled, bool bNewlyEnabled); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnDamageablePartHealthChanged_Event // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScalePontoonFront(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ScalePontoonFront // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScalePontoonRear(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ScalePontoonRear // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnClientBeginAltInteract(struct AFortPawn* Pawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnClientBeginAltInteract // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnServerAltInteract(struct AFortPawn* Pawn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnServerAltInteract // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void FX_Init_Settings(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.FX_Init_Settings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLeakingFuelStart(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnLeakingFuelStart // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLeakingFuelStop(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnLeakingFuelStop // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExplodeCosmetics(struct AActor* DestroyedActor); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ExplodeCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SnapFoamtoWaterSurface(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SnapFoamtoWaterSurface // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CE_WaterFX_ResetDeepWaterEffectActivate(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_WaterFX_ResetDeepWaterEffectActivate // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BrakingSkid(bool Condition); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.BrakingSkid // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void VFX_DamageState(float Damage); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.VFX_DamageState // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeoutCosmetics(struct AActor* DestroyedActor); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.FadeoutCosmetics // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateRadio(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CreateRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioGo(bool Start, int32_t RadioStationIndex); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.RadioGo // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DestroyRadio(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DestroyRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void KickPlayersFromVehicle(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.KickPlayersFromVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WaterDepthCheck(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.WaterDepthCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnWreckFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.SpawnWreckFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CE_PawnEnterVehicleWhileInWater(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_PawnEnterVehicleWhileInWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CE_PawnExitVehicleWhileInWater(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_PawnExitVehicleWhileInWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CE_ResetWaterFXSnapping(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CE_ResetWaterFXSnapping // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FX_RemoveFuelLeaking(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.FX_RemoveFuelLeaking // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSleepStateChanged(bool bAwake); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnSleepStateChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTickAudioController(float DeltaTime); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnTickAudioController // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PickRandomMaterial(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.PickRandomMaterial // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStartCriticalHealth(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnStartCriticalHealth // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void CleanupLoopingPooledFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CleanupLoopingPooledFX // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisolveVehicle(float Fade); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DisolveVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSurfaceTypeVehicleIsOnChanged(enum class EPhysicalSurface SurfaceTypeVehicleIsOn); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnSurfaceTypeVehicleIsOnChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HealthChanged(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckSpeed(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CheckSpeed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTickAudioFade(float FadeParam); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnTickAudioFade // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void DropLootOnDamage(struct AActor* DamagingActor, struct FHitResult HitResult); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DropLootOnDamage // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetDamageBuildings(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ResetDamageBuildings // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateBoostFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.DeactivateBoostFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateBoostFX(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ActivateBoostFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopHandbrakeRumble(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopHandbrakeRumble // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurieContainerInitialized_BP(struct FCurieContainerHandle CurieContainerHandle); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnCurieContainerInitialized_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnExitLandscape(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnExitLandscape // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnterLandscape(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnEnterLandscape // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnIsSprintingChanged(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.OnIsSprintingChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void StartDriverCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StartDriverCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopDriverCameraShake(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.StopDriverCameraShake // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CanHitLastDriver(); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.CanHitLastDriver // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Valet_BasicCar_Vehicle(int32_t EntryPoint); // Function Valet_BasicCar_Vehicle.Valet_BasicCar_Vehicle_C.ExecuteUbergraph_Valet_BasicCar_Vehicle // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

