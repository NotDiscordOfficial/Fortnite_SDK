// Class ValetRuntime.DagwoodNetworkPhysicsComponent
// Size: 0xbd0 (Inherited: 0xb0)
struct UDagwoodNetworkPhysicsComponent : UActorComponent {
	struct FNetworkPhysicsState NetworkPhysicsState; // 0xb0(0x60)
	struct FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0x110(0x10)
	struct FDagwoodManagedState ReplicatedManagedState; // 0x120(0x390)
	struct FDagwoodManagedState InManagedState; // 0x4b0(0x390)
	struct FDagwoodManagedState OutManagedState; // 0x840(0x390)

	void SetState_GT(struct FDagwoodInPersistent In); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT // (Final|Native|Public|HasOutParms) // @ game+0x3ce31fc
	void SetPendingInputCmd(struct FFortDagwoodCmd In); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd // (Final|Native|Public|HasOutParms) // @ game+0x3ce3124
	void OnGeneratedLocalInputCmd__DelegateSignature(); // DelegateFunction ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature // (MulticastDelegate|Public|Delegate) // @ game+0xda7c34
	struct FDagwoodState_PT GetState_PT(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce201c
	struct FDagwoodInPersistent GetState_GT(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT // (Final|Native|Public|Const) // @ game+0x3ce1fb0
	struct FFortDagwoodCmd GetPendingInputCmd(); // Function ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd // (Final|Native|Public|Const) // @ game+0x3ce1f08
};

// Class ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters
// Size: 0x310 (Inherited: 0x2c0)
struct AFortAthenaMutator_OverrideValetVehicleParameters : AFortAthenaMutator {
	struct FScalableFloat MinInitialVehicleFuelPercent; // 0x2c0(0x28)
	struct FScalableFloat MaxInitialVehicleFuelPercent; // 0x2e8(0x28)

	void OnPlaylistLoaded(struct FName PlaylistName, struct FGameplayTagContainer PlaylistContainerTags); // Function ValetRuntime.FortAthenaMutator_OverrideValetVehicleParameters.OnPlaylistLoaded // (Final|Native|Public|HasOutParms) // @ game+0x3b54e20
};

// Class ValetRuntime.FortCameraMode_Dagwood
// Size: 0xe20 (Inherited: 0xde0)
struct UFortCameraMode_Dagwood : UFortCameraMode_AthenaVehicle {
	float HorizontalCameraSpaceOffsetWhileTurning; // 0xdd8(0x04)
	float SteeringAngleForMaxHorizontalOffset; // 0xddc(0x04)
	float InAirVerticalOffset; // 0xde0(0x04)
	float AirOffsetDampFactor; // 0xde4(0x04)
	float SpeedAlphaDampFactor; // 0xde8(0x04)
	float TimeInAirRequiredForVertOffset; // 0xdec(0x04)
	float VehicleBasePitch; // 0xdf0(0x04)
	float HorizOffsetInterpSpeed; // 0xdf4(0x04)
	float HorizOffsetInterpSpeedRecovery; // 0xdf8(0x04)
	float CurrentSpeedAlpha; // 0xdfc(0x04)
	float CurrentVerticalOffset; // 0xe00(0x04)
	float CurrentHorizontalOffset; // 0xe04(0x04)
	float TimeInAir; // 0xe08(0x04)
	float PreviousSpeed; // 0xe0c(0x04)
	float AppliedPitch; // 0xe10(0x04)
	char pad_E1C[0x4]; // 0xe1c(0x04)
};

// Class ValetRuntime.FortContextualTutorial_VehicleValetLowFuel
// Size: 0x128 (Inherited: 0x120)
struct UFortContextualTutorial_VehicleValetLowFuel : UFortContextualTutorial {
	char pad_120[0x8]; // 0x120(0x08)

	void HandleVehicleStateChanged(struct AFortPlayerPawn* PlayerPawn, struct AActor* NewVehicle, struct AActor* OldVehicle); // Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleVehicleStateChanged // (Final|Native|Private) // @ game+0x3ce22a8
	void HandleStartSkydivingForActivation(); // Function ValetRuntime.FortContextualTutorial_VehicleValetLowFuel.HandleStartSkydivingForActivation // (Final|Native|Private) // @ game+0x3ce2294
};

// Class ValetRuntime.FortDagwoodModsConfigs
// Size: 0xa8 (Inherited: 0x28)
struct UFortDagwoodModsConfigs : UObject {
	struct FMountedGun MountedGunData; // 0x28(0x80)
};

// Class ValetRuntime.FortDagwoodVehicle
// Size: 0x1b20 (Inherited: 0x1320)
struct AFortDagwoodVehicle : AFortAthenaSKMotorVehicle {
	char pad_1320[0x8]; // 0x1320(0x08)
	struct UMatineeCameraShake* HardLandingCameraShake; // 0x1328(0x08)
	struct UMatineeCameraShake* OffroadCamShakeClass; // 0x1330(0x08)
	struct UMatineeCameraShake* DriverCamShakeClass; // 0x1338(0x08)
	struct UMatineeCameraShake* HandBrakeCamShakeClass; // 0x1340(0x08)
	enum class EVehicleClass VehicleClass; // 0x1348(0x01)
	char pad_1349[0x3]; // 0x1349(0x03)
	float NativeMinPontoonRadiusToSink; // 0x134c(0x04)
	float NativePontoonScaleTimeFront; // 0x1350(0x04)
	float NativePontoonScaleRadiusPerTick; // 0x1354(0x04)
	float NativePontoonScaleTimeRear; // 0x1358(0x04)
	float NativeBasePontoonRadiusFront; // 0x135c(0x04)
	float NativeBasePontoonRadiusRear; // 0x1360(0x04)
	float FadeDelay; // 0x1364(0x04)
	float FadeDuration; // 0x1368(0x04)
	float MinBrakeForceForSkid; // 0x136c(0x04)
	float MinForwardSpeedForSkid; // 0x1370(0x04)
	struct FGameplayTag SpeedLinesCueTag; // 0x1374(0x08)
	float NormalizedRPM; // 0x137c(0x04)
	float FadeStartTime; // 0x1380(0x04)
	char pad_1384[0x4]; // 0x1384(0x04)
	struct FMulticastInlineDelegate OnOutOfFuelDelegate; // 0x1388(0x10)
	struct FMulticastInlineDelegate OnGainedFuelDelegate; // 0x1398(0x10)
	struct UDagwoodNetworkPhysicsComponent* NetworkPhysicsComponent; // 0x13a8(0x08)
	struct UFortVehicleSeatWeaponComponent* ModSeatWeaponComponent; // 0x13b0(0x08)
	struct FMountedGun MountedWeaponMod; // 0x13b8(0x80)
	struct FTireInfo BaseTireInfo; // 0x1438(0x1a0)
	float LastModApplyTime; // 0x15d8(0x04)
	float RechargeableBoostPercent; // 0x15dc(0x04)
	float BoostEndTime; // 0x15e0(0x04)
	char pad_15E4[0x4]; // 0x15e4(0x04)
	struct UFortSplatterSourceComponent* SplatterSourceComp; // 0x15e8(0x08)
	struct FCachedWaterData WaterBodyDataCache; // 0x15f0(0x38)
	enum class EFuelLeakType FuelLeakType; // 0x1628(0x01)
	bool bEnableNativizedTick; // 0x1629(0x01)
	char pad_162A[0x6]; // 0x162a(0x06)
	struct TArray<struct FName> PassengerLeanSockets; // 0x1630(0x10)
	struct TArray<struct FVector> PassngerLeanRelativeOffsets; // 0x1640(0x10)
	struct UFortCameraMode_AthenaVehicle* PassengerCameraModeClass; // 0x1650(0x08)
	struct UFortCameraMode* PassengerCameraModeClass_ADS; // 0x1658(0x08)
	struct TArray<struct FName> WheelSocketNames; // 0x1660(0x10)
	struct UFortDagwoodVehicleConfigs* FortDagwoodVehicleConfigs; // 0x1670(0x08)
	struct UFortDagwoodVehicleConfigs* FortDagwoodConfigsClass; // 0x1678(0x08)
	struct TArray<int32_t> RearShocks; // 0x1680(0x10)
	struct FGameplayTagContainer OffroadEnvironmentDamageTags; // 0x1690(0x20)
	struct FGameplayTagContainer FireDamageTags; // 0x16b0(0x20)
	struct FGameplayTag ModTag; // 0x16d0(0x08)
	struct FVector NativeWheelScaleRear; // 0x16d8(0x0c)
	struct FVector NativeWheelScaleFront; // 0x16e4(0x0c)
	struct FVector NativeTireScaleRear; // 0x16f0(0x0c)
	struct FVector NativeTireScaleFront; // 0x16fc(0x0c)
	bool bTireSmokeActive; // 0x1708(0x01)
	bool bBoostFailed; // 0x1709(0x01)
	bool bCanBoostPitch; // 0x170a(0x01)
	bool bOnRoad; // 0x170b(0x01)
	bool bOnLandscape; // 0x170c(0x01)
	bool bOnDirt; // 0x170d(0x01)
	bool bOnVehicle; // 0x170e(0x01)
	bool bWasBrakeSkidding; // 0x170f(0x01)
	uint64_t AccelForceFeedbackHandle; // 0x1710(0x08)
	uint64_t SkidForceFeedbackHandle; // 0x1718(0x08)
	uint64_t BrakeForceFeedbackHandle; // 0x1720(0x08)
	uint64_t HandBrakeForceFeedbackHandle; // 0x1728(0x08)
	struct TArray<enum class ETireSurfaces> TireSurfaces; // 0x1730(0x10)
	bool bBoosting; // 0x1740(0x01)
	bool bSpeedLinesActive; // 0x1741(0x01)
	char pad_1742[0xe]; // 0x1742(0x0e)
	struct UFortGameStateComponent_Valet* ValetComponent; // 0x1750(0x08)
	struct FDagwoodRuntimeModifiers DagwoodRuntimeModifiedProperties; // 0x1758(0x68)
	struct TArray<struct FAttachedWheel> ServerRepWheelData; // 0x17c0(0x10)
	char pad_17D0[0x50]; // 0x17d0(0x50)
	struct FVector FlipYawForwardTargetDirection; // 0x1820(0x0c)
	struct FVector FlipYawOriginalForward; // 0x182c(0x0c)
	enum class ETireLocations LastPoppedTire; // 0x1838(0x01)
	char pad_1839[0x3]; // 0x1839(0x03)
	float RoadTopSpeedMultiplier; // 0x183c(0x04)
	float CurrentBumpiness; // 0x1840(0x04)
	float CurrentForwardAcceleration; // 0x1844(0x04)
	float PreviousTurnAlpha; // 0x1848(0x04)
	float CurrentCameraAssistStrength; // 0x184c(0x04)
	float LostGripTime; // 0x1850(0x04)
	float LostGripRightAlpha; // 0x1854(0x04)
	float HandbrakeTime; // 0x1858(0x04)
	float HandbrakeStartTime; // 0x185c(0x04)
	float RimScrapeDamageTimer; // 0x1860(0x04)
	float FlipYawMult; // 0x1864(0x04)
	float FlipTimer; // 0x1868(0x04)
	float FlipExplodeTimer; // 0x186c(0x04)
	float FlipPushForceTimer; // 0x1870(0x04)
	float FlipAirTimer; // 0x1874(0x04)
	float FlipLanding; // 0x1878(0x04)
	float FlipStartTime; // 0x187c(0x04)
	float LastFlipDamageTime; // 0x1880(0x04)
	float PreFlipControlLossTimer; // 0x1884(0x04)
	float LastPopTireTime; // 0x1888(0x04)
	float HealthZeroTime; // 0x188c(0x04)
	float NativePontoonScaleTimerFront; // 0x1890(0x04)
	float NativePontoonScaleTimerRear; // 0x1894(0x04)
	float NativeScaledFrontPontoonRadius; // 0x1898(0x04)
	float NativeScaledRearPontoonRadius; // 0x189c(0x04)
	bool bDidCinematicFlip; // 0x18a0(0x01)
	bool bCanCinematicFlip; // 0x18a1(0x01)
	bool bClientWaitingToApplyMod; // 0x18a2(0x01)
	bool bInPopTireVeer; // 0x18a3(0x01)
	bool bInFlipRecovery; // 0x18a4(0x01)
	bool bExplodeAfterFlip; // 0x18a5(0x01)
	bool bLostGrip; // 0x18a6(0x01)
	bool bApplyHandbrakeCatchupForce; // 0x18a7(0x01)
	bool bDidHandbrakeCatchup; // 0x18a8(0x01)
	bool bInFlipRoll; // 0x18a9(0x01)
	bool bInFlipYaw; // 0x18aa(0x01)
	bool bInFlipPitch; // 0x18ab(0x01)
	bool bFlipDidLeaveGround; // 0x18ac(0x01)
	bool bBreakBuildingsIfBlockingLeaningPassenger; // 0x18ad(0x01)
	char pad_18AE[0x2]; // 0x18ae(0x02)
	float LeanBreakTimeAccumulator; // 0x18b0(0x04)
	float LeanBreakCheckInterval; // 0x18b4(0x04)
	struct FVector2D LastStickInput; // 0x18b8(0x08)
	struct TArray<struct FName> SeatToWindowShapeNames; // 0x18c0(0x10)
	struct UMatineeCameraShake* OffroadCameraShakeInstance; // 0x18d0(0x08)
	struct UMatineeCameraShake* DriverCameraShakeInstance; // 0x18d8(0x08)
	struct UMatineeCameraShake* AccelCameraShakeInstance; // 0x18e0(0x08)
	struct UMatineeCameraShake* HandBrakeCameraShakeInstance; // 0x18e8(0x08)
	struct UNiagaraComponent* NativeComp_RoadAndExhaust; // 0x18f0(0x08)
	struct UNiagaraComponent* NativeComp_LowFuelSputter; // 0x18f8(0x08)
	struct UNiagaraComponent* NativeComp_Damage; // 0x1900(0x08)
	struct UNiagaraComponent* NativeComp_SpeedLines; // 0x1908(0x08)
	struct UNiagaraSystem* TireExhaustFX; // 0x1910(0x08)
	struct UNiagaraSystem* NativeSys_LowFuelSputter; // 0x1918(0x08)
	struct UNiagaraSystem* NativeSys_SpeedLines; // 0x1920(0x08)
	char pad_1928[0x18]; // 0x1928(0x18)
	struct UFortAthenaVehicleFuelComponent* FuelComponent; // 0x1940(0x08)
	char pad_1948[0x8]; // 0x1948(0x08)
	struct TArray<enum class ETireStates> TireStates; // 0x1950(0x10)
	struct TArray<enum class ETireStates> FakeTireStates; // 0x1960(0x10)
	enum class EPoppedTireReactionStates ActivePoppedTireReaction; // 0x1970(0x01)
	enum class EPoppedTireReactionStates ServerPoppedTireReaction; // 0x1971(0x01)
	bool bExploded; // 0x1972(0x01)
	char pad_1973[0x1]; // 0x1973(0x01)
	float ServerCriticalHealth; // 0x1974(0x04)
	struct TWeakObjectPtr<struct AFortValetAudioController> ValetAudio; // 0x1978(0x08)
	struct TWeakObjectPtr<struct AController> KillerController; // 0x1980(0x08)
	struct TWeakObjectPtr<struct AActor> KillerCauser; // 0x1988(0x08)
	struct TArray<struct UStaticMeshComponent*> TireMeshes; // 0x1990(0x10)
	struct TArray<struct UStaticMeshComponent*> FakeTireMeshes; // 0x19a0(0x10)
	char pad_19B0[0x4]; // 0x19b0(0x04)
	bool bIsInoperable; // 0x19b4(0x01)
	char pad_19B5[0x3]; // 0x19b5(0x03)
	int32_t RandomSeed; // 0x19b8(0x04)
	struct FRandomStream RandStream; // 0x19bc(0x08)
	char pad_19C4[0x9c]; // 0x19c4(0x9c)
	char bSelfDestructEnabled : 1; // 0x1a60(0x01)
	char bClientUsesSelfDestructTimer : 1; // 0x1a60(0x01)
	char pad_1A60_2 : 6; // 0x1a60(0x01)
	char pad_1A61[0x7]; // 0x1a61(0x07)
	struct UStaticMesh* TireBootMesh; // 0x1a68(0x08)
	struct TMap<int32_t, struct FDagwoodActionDefForUI> MapSelfDestructActionDefForUI; // 0x1a70(0x50)
	float MinimumTimeBetweenSelfDestructPromptChanges; // 0x1ac0(0x04)
	char pad_1AC4[0x5c]; // 0x1ac4(0x5c)

	void UpdateVehicleFuelLeak(); // Function ValetRuntime.FortDagwoodVehicle.UpdateVehicleFuelLeak // (Final|Native|Public) // @ game+0x3ce32d8
	void StartFade(); // Function ValetRuntime.FortDagwoodVehicle.StartFade // (Final|Native|Public|BlueprintCallable) // @ game+0x2861ba0
	void SetValetAudioController(struct AFortValetAudioController* ValetAudio); // Function ValetRuntime.FortDagwoodVehicle.SetValetAudioController // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x1ec42b4
	void SetOnFire(bool bNewFire); // Function ValetRuntime.FortDagwoodVehicle.SetOnFire // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce3078
	void SetNormalizedAudioRPM(float InRPM); // Function ValetRuntime.FortDagwoodVehicle.SetNormalizedAudioRPM // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce2fd8
	void SetFuel(float NewFuel); // Function ValetRuntime.FortDagwoodVehicle.SetFuel // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x3ce2f38
	void ServerSetTireModTag(struct FGameplayTag TireModTag); // Function ValetRuntime.FortDagwoodVehicle.ServerSetTireModTag // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3ce2e98
	void ServerSetRuntimeSpringsInfo(struct FRuntimeSpringsInfo SpringsInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeSpringsInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3ce2de4
	void ServerSetRuntimeGravity(float GravMult); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeGravity // (Final|Native|Protected|BlueprintCallable) // @ game+0x3ce2d34
	void ServerSetRuntimeFuelInfo(struct FRuntimeFuelInfo FuelInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeFuelInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3ce2c60
	void ServerSetRuntimeDriveInfo(float MaxIncline, float MaxTilt); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeDriveInfo // (Final|Native|Protected|BlueprintCallable) // @ game+0x3ce2b60
	void ServerSetRuntimeBoostInfo(struct FRuntimeBoostInfo BoostInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerSetRuntimeBoostInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3ce2a8c
	void ServerSelfDestructActivated(); // Function ValetRuntime.FortDagwoodVehicle.ServerSelfDestructActivated // (Net|NetReliableNative|Event|Public|NetServer|NetValidate) // @ game+0x3ce2a40
	void ServerAddRuntimeGearsInfo(struct FRuntimeGearInfo GearInfo); // Function ValetRuntime.FortDagwoodVehicle.ServerAddRuntimeGearsInfo // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3ce2954
	void SelfDestructCleanup(); // Function ValetRuntime.FortDagwoodVehicle.SelfDestructCleanup // (Final|Native|Public) // @ game+0x3ce2940
	void RemoveModMountedGun(); // Function ValetRuntime.FortDagwoodVehicle.RemoveModMountedGun // (Final|Native|Public|BlueprintCallable) // @ game+0x203d3e0
	void OnTickAudioFade(float FadeParam); // Function ValetRuntime.FortDagwoodVehicle.OnTickAudioFade // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTickAudioController(float DeltaTime); // Function ValetRuntime.FortDagwoodVehicle.OnTickAudioController // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStopHandbrake(); // Function ValetRuntime.FortDagwoodVehicle.OnStopHandbrake // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStartHandbrake(); // Function ValetRuntime.FortDagwoodVehicle.OnStartHandbrake // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStartCriticalHealth(); // Function ValetRuntime.FortDagwoodVehicle.OnStartCriticalHealth // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSpawnLeakProjectile(struct AFortProjectileBase* SpawnProjectile); // Function ValetRuntime.FortDagwoodVehicle.OnSpawnLeakProjectile // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnServerAltInteract(struct AFortPawn* Pawn); // Function ValetRuntime.FortDagwoodVehicle.OnServerAltInteract // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRimScrapeDamage(int32_t TireIndex); // Function ValetRuntime.FortDagwoodVehicle.OnRimScrapeDamage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRep_Tires(struct TArray<enum class ETireStates> PrevTireStates); // Function ValetRuntime.FortDagwoodVehicle.OnRep_Tires // (Final|Native|Private|HasOutParms) // @ game+0x1e5af0c
	void OnRep_RandSeed(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_RandSeed // (Final|Native|Private) // @ game+0x2049074
	void OnRep_PoppedTireReaction(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_PoppedTireReaction // (Final|Native|Private) // @ game+0x27dc5ac
	void OnRep_MountedWeapon(struct FMountedGun PrevMountedWeapon); // Function ValetRuntime.FortDagwoodVehicle.OnRep_MountedWeapon // (Final|Native|Private|HasOutParms) // @ game+0x3ce284c
	void OnRep_IsInoperable(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_IsInoperable // (Final|Native|Private) // @ game+0x1f31104
	void OnRep_FakeTires(struct TArray<enum class ETireStates> PrevTireStates); // Function ValetRuntime.FortDagwoodVehicle.OnRep_FakeTires // (Final|Native|Private|HasOutParms) // @ game+0x2043c98
	void OnRep_Exploded(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_Exploded // (Final|Native|Private) // @ game+0x27ea904
	void OnRep_DagwoodRuntimeModifiers(struct FDagwoodRuntimeModifiers PrevMods); // Function ValetRuntime.FortDagwoodVehicle.OnRep_DagwoodRuntimeModifiers // (Final|Native|Private|HasOutParms) // @ game+0x1a488c4
	void OnRep_AttachedWheelMeshes(); // Function ValetRuntime.FortDagwoodVehicle.OnRep_AttachedWheelMeshes // (Final|Native|Private) // @ game+0x3ce2804
	void OnPoppedTire(int32_t TireIndex, bool bFakeTire); // Function ValetRuntime.FortDagwoodVehicle.OnPoppedTire // (Final|Native|Public|BlueprintCallable) // @ game+0x21ae17c
	void OnLowFuel(); // Function ValetRuntime.FortDagwoodVehicle.OnLowFuel // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnLeakingFuelStop(); // Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStop // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLeakingFuelStart(); // Function ValetRuntime.FortDagwoodVehicle.OnLeakingFuelStart // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInoperableChanged(bool bInoperable); // Function ValetRuntime.FortDagwoodVehicle.OnInoperableChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnHoldSelfDestructStopped(struct AFortPawn* DriverPawn); // Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStopped // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnHoldSelfDestructStarted(struct AFortPawn* DriverPawn, float ExitDuration); // Function ValetRuntime.FortDagwoodVehicle.OnHoldSelfDestructStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnGainedFuel(float NewPercent); // Function ValetRuntime.FortDagwoodVehicle.OnGainedFuel // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFlipImpactDamage(); // Function ValetRuntime.FortDagwoodVehicle.OnFlipImpactDamage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFireStop(); // Function ValetRuntime.FortDagwoodVehicle.OnFireStop // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnFireStart(); // Function ValetRuntime.FortDagwoodVehicle.OnFireStart // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExplode(); // Function ValetRuntime.FortDagwoodVehicle.OnExplode // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitRoad(); // Function ValetRuntime.FortDagwoodVehicle.OnExitRoad // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnExitLandscape(); // Function ValetRuntime.FortDagwoodVehicle.OnExitLandscape // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnterLandscape(); // Function ValetRuntime.FortDagwoodVehicle.OnEnterLandscape // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredRoad(); // Function ValetRuntime.FortDagwoodVehicle.OnEnteredRoad // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEmptyFuel(); // Function ValetRuntime.FortDagwoodVehicle.OnEmptyFuel // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDestroyedPropFromCollision(struct ABuildingActor* BuildingHitActor); // Function ValetRuntime.FortDagwoodVehicle.OnDestroyedPropFromCollision // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnClientBeginAltInteract(struct AFortPawn* Pawn); // Function ValetRuntime.FortDagwoodVehicle.OnClientBeginAltInteract // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnBoostReady(); // Function ValetRuntime.FortDagwoodVehicle.OnBoostReady // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnBoostFailed(); // Function ValetRuntime.FortDagwoodVehicle.OnBoostFailed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void NativeOnOutOfFuel(); // Function ValetRuntime.FortDagwoodVehicle.NativeOnOutOfFuel // (Final|Native|Public) // @ game+0x3ce27f0
	void NativeOnLowFuel(); // Function ValetRuntime.FortDagwoodVehicle.NativeOnLowFuel // (Final|Native|Public) // @ game+0x3ce27a8
	void NativeOnFuelChanged(float NewFuelPercent, float OldFuelPercent); // Function ValetRuntime.FortDagwoodVehicle.NativeOnFuelChanged // (Final|Native|Public) // @ game+0x1d364bc
	float NativeCalculateAccelRumbleIntensity(float MaxIntensity); // Function ValetRuntime.FortDagwoodVehicle.NativeCalculateAccelRumbleIntensity // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce2700
	void MakeOperable(bool bAddGas); // Function ValetRuntime.FortDagwoodVehicle.MakeOperable // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce2684
	void MakeInoperable(); // Function ValetRuntime.FortDagwoodVehicle.MakeInoperable // (Final|Native|Public|BlueprintCallable) // @ game+0x203d3e0
	bool IsVehicleAcceleratingWithSpeedThreshold(float SpeedThreshold); // Function ValetRuntime.FortDagwoodVehicle.IsVehicleAcceleratingWithSpeedThreshold // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce25d8
	bool IsTireSkidding(float MinSpeedForSkid, float AngleForSkid, float SpeedForPeelout, float SpeedForBraking); // Function ValetRuntime.FortDagwoodVehicle.IsTireSkidding // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce243c
	bool IsOnRoad(); // Function ValetRuntime.FortDagwoodVehicle.IsOnRoad // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x208be74
	bool IsOnLandscape(); // Function ValetRuntime.FortDagwoodVehicle.IsOnLandscape // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27de97c
	bool IsOnDirt(); // Function ValetRuntime.FortDagwoodVehicle.IsOnDirt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x27d0448
	bool IsOffroad(); // Function ValetRuntime.FortDagwoodVehicle.IsOffroad // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce2418
	bool IsNativeBPTickEnabled(); // Function ValetRuntime.FortDagwoodVehicle.IsNativeBPTickEnabled // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x1fade60
	bool IsInoperable(); // Function ValetRuntime.FortDagwoodVehicle.IsInoperable // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce2400
	bool HasTireMod(); // Function ValetRuntime.FortDagwoodVehicle.HasTireMod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x1ef3240
	bool HasAppliedMountedGunMod(); // Function ValetRuntime.FortDagwoodVehicle.HasAppliedMountedGunMod // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce23e8
	struct FGameplayTag GetVehicleModTag(); // Function ValetRuntime.FortDagwoodVehicle.GetVehicleModTag // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce227c
	enum class ETireSurfaces GetTireSurface(enum class ETireLocations TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireSurface // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce21c0
	bool GetTireState(int32_t TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireState // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce2118
	float GetTireHealthPercent(enum class ETireLocations TireIndex); // Function ValetRuntime.FortDagwoodVehicle.GetTireHealthPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce2068
	struct FString GetPlayerFacingName(); // Function ValetRuntime.FortDagwoodVehicle.GetPlayerFacingName // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1f3c
	bool GetOnFire(); // Function ValetRuntime.FortDagwoodVehicle.GetOnFire // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1eec
	float GetNormalizedAudioRPM(); // Function ValetRuntime.FortDagwoodVehicle.GetNormalizedAudioRPM // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1ed4
	int32_t GetMountedWeaponOnlySeatIndex(); // Function ValetRuntime.FortDagwoodVehicle.GetMountedWeaponOnlySeatIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1e78
	struct TArray<struct FName> GetModSocketNames(); // Function ValetRuntime.FortDagwoodVehicle.GetModSocketNames // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1e5c
	float GetMiddleAxleForwardAdjust(); // Function ValetRuntime.FortDagwoodVehicle.GetMiddleAxleForwardAdjust // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x2687180
	float GetHUDTopSpeed(); // Function ValetRuntime.FortDagwoodVehicle.GetHUDTopSpeed // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1e3c
	float GetFuelCapacity(); // Function ValetRuntime.FortDagwoodVehicle.GetFuelCapacity // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1e14
	float GetFuel(); // Function ValetRuntime.FortDagwoodVehicle.GetFuel // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1dec
	struct FDagwoodRuntimeModifiers GetCurrentDagwoodRuntimeProperties(); // Function ValetRuntime.FortDagwoodVehicle.GetCurrentDagwoodRuntimeProperties // (Final|Native|Protected|BlueprintCallable) // @ game+0x3ce1dd0
	float GetBumpiness(); // Function ValetRuntime.FortDagwoodVehicle.GetBumpiness // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1db8
	bool ForwardOrReverseInputPressed(); // Function ValetRuntime.FortDagwoodVehicle.ForwardOrReverseInputPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1d94
	void CleanupLoopingPooledFX(); // Function ValetRuntime.FortDagwoodVehicle.CleanupLoopingPooledFX // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnBoostStarted(); // Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostStarted // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnBoostFinished(); // Function ValetRuntime.FortDagwoodVehicle.BP_OnBoostFinished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	bool AreAnyTiresPopped(); // Function ValetRuntime.FortDagwoodVehicle.AreAnyTiresPopped // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3ce1d54
	void ApplyVehicleModMountedGun(struct UFortDagwoodModsConfigs* ModConfigsRef); // Function ValetRuntime.FortDagwoodVehicle.ApplyVehicleModMountedGun // (Final|Native|Public|BlueprintCallable) // @ game+0x3ce1cd8
	void ApplyTireMod(struct FGameplayTag NewTireModTag, struct AFortPlayerController* EventInstigator); // Function ValetRuntime.FortDagwoodVehicle.ApplyTireMod // (Final|Native|Protected|HasOutParms|BlueprintCallable) // @ game+0x3ce1bdc
};

// Class ValetRuntime.FortDagwoodVehicleAnimInstance
// Size: 0x470 (Inherited: 0x440)
struct UFortDagwoodVehicleAnimInstance : UFortVehicleAnimInstance {
	struct AFortDagwoodVehicle* Dagwood; // 0x438(0x08)
	struct FVector GlassScale_FR; // 0x440(0x0c)
	struct FVector GlassScale_FL; // 0x44c(0x0c)
	struct FVector GlassScale_BR; // 0x458(0x0c)
	struct FVector GlassScale_BL; // 0x464(0x0c)
};

// Class ValetRuntime.FortDagwoodVehicleConfigs
// Size: 0xaf8 (Inherited: 0x6f8)
struct UFortDagwoodVehicleConfigs : UFortSKMotorVehicleConfigs {
	struct FTireInfo BaseTireInfo; // 0x6f8(0x1a0)
	float BoostMinPushForce; // 0x898(0x04)
	float BoostTopSpeedForceMultiplier; // 0x89c(0x04)
	float BoostTopSpeedMultiplier; // 0x8a0(0x04)
	float BoostWaterMultiplier; // 0x8a4(0x04)
	float VehiclePowerSlideFrontMultiplier; // 0x8a8(0x04)
	float VehiclePowerSlideRearMultiplier; // 0x8ac(0x04)
	float HandbrakeGripAngle; // 0x8b0(0x04)
	float HandbrakeGripAngleRecovery; // 0x8b4(0x04)
	float HandbrakeSpeedForGripLoss; // 0x8b8(0x04)
	float MinSlipDuration; // 0x8bc(0x04)
	float HandbrakeLateralFriction; // 0x8c0(0x04)
	float HandbrakeSteeringMultiplier; // 0x8c4(0x04)
	float HandbrakeFrictionDampFactor; // 0x8c8(0x04)
	float RestoreTractionDampFactor; // 0x8cc(0x04)
	float HandbrakeForce; // 0x8d0(0x04)
	float HandbrakeForceNoAccel; // 0x8d4(0x04)
	float BoostSteeringMultiplier; // 0x8d8(0x04)
	float DirtRoadTopSpeedMultiplier; // 0x8dc(0x04)
	float DirtRoadFrontLateralFriction; // 0x8e0(0x04)
	float DirtRoadRearLateralFriction; // 0x8e4(0x04)
	float DirtRoadAccelForceMultiplier; // 0x8e8(0x04)
	float DirtRoadFakeBumpinessMultiplier; // 0x8ec(0x04)
	float OffRoadTopSpeedMultiplier; // 0x8f0(0x04)
	float OffRoadFrontLateralFriction; // 0x8f4(0x04)
	float OffRoadRearLateralFriction; // 0x8f8(0x04)
	float OffRoadPushForceMultiplier; // 0x8fc(0x04)
	float OffroadDamageImpactForceMin; // 0x900(0x04)
	float OffroadDamageImpactForceMax; // 0x904(0x04)
	float OffroadImpactDamageMin; // 0x908(0x04)
	float OffroadImpactDamageMax; // 0x90c(0x04)
	float MinSpeedForOffroadHandling; // 0x910(0x04)
	float FireHealthPercentThreshold; // 0x914(0x04)
	float MinBumpinessSpringHitTimeMultiplier; // 0x918(0x04)
	float MaxBumpinessSpringHitTimeMultiplier; // 0x91c(0x04)
	float BumpinessExponentForShocks; // 0x920(0x04)
	float OffroadRumbleIntensity; // 0x924(0x04)
	float DirtRoadRumbleIntensity; // 0x928(0x04)
	float OffroadDamageScaleExponent; // 0x92c(0x04)
	float HardLandingThresholdMin; // 0x930(0x04)
	float HardLandingThresholdMax; // 0x934(0x04)
	float HardLandingShakeZAmplitudeMin; // 0x938(0x04)
	float HardLandingShakeZAmplitudeMax; // 0x93c(0x04)
	float SpeedLinesThreshold; // 0x940(0x04)
	float PropDestructionImpulse; // 0x944(0x04)
	float DestructionAngle; // 0x948(0x04)
	float UpNormalMinProtected; // 0x94c(0x04)
	float UpForwardMinProtected; // 0x950(0x04)
	float NonCameraSteeringAngleMultiplier; // 0x954(0x04)
	float CameraAssistStrengthMax; // 0x958(0x04)
	float CameraAssistStrengthMin; // 0x95c(0x04)
	float CameraAssistStrengthRecovery; // 0x960(0x04)
	float CameraAssistInterpSpeed; // 0x964(0x04)
	float ReverseChangeDirectionBrakeForceMultiplier; // 0x968(0x04)
	float ReverseChangeDirectionSpeedThreshold; // 0x96c(0x04)
	float DriftExitPushForce; // 0x970(0x04)
	float DriftExitCatchupSpeed; // 0x974(0x04)
	float HandbrakeDurationRequiredForCatchup; // 0x978(0x04)
	float ImpactMagnitudeToEndCatchup; // 0x97c(0x04)
	float PoppedTireSpringLength; // 0x980(0x04)
	float PoppedTireSpringStiff; // 0x984(0x04)
	float PoppedTireSpringDamp; // 0x988(0x04)
	float PoppedTireTractionMultiplier_StageOne; // 0x98c(0x04)
	float PoppedTireTractionMultiplier_StageTwo; // 0x990(0x04)
	float PoppedTireTractionMultiplier_Min; // 0x994(0x04)
	float PoppedTireScrapeFrictionMultiplier; // 0x998(0x04)
	float MinSpeedForRimScrapeDamage; // 0x99c(0x04)
	float RimScrapeDamageRate; // 0x9a0(0x04)
	float RimScrapeFlipRollMagnitude; // 0x9a4(0x04)
	float RimScrapeFlipPitchMagnitude; // 0x9a8(0x04)
	float SpeedForRimFlip; // 0x9ac(0x04)
	float HealthPercentForFlip; // 0x9b0(0x04)
	float FlipYawDuration; // 0x9b4(0x04)
	float FlipRollDuration; // 0x9b8(0x04)
	float FlipPitchDuration; // 0x9bc(0x04)
	float FlipExplodeDuration_Yaw; // 0x9c0(0x04)
	float FlipExplodeDuration_Pitch; // 0x9c4(0x04)
	float FlipPushForceDuration_Yaw; // 0x9c8(0x04)
	float FlipPushForceDuration_Pitch; // 0x9cc(0x04)
	float FlipPushForcMultiplier; // 0x9d0(0x04)
	float FlipPushForce_UpComponentPitch; // 0x9d4(0x04)
	float FlipPushForce_UpComponentRoll; // 0x9d8(0x04)
	float MinTimeInAirRequiredForExplodeLanding; // 0x9dc(0x04)
	float FlipYawSpringStiff; // 0x9e0(0x04)
	float FlipYawSpringDamp; // 0x9e4(0x04)
	float FlipYawSpringMaxAccel; // 0x9e8(0x04)
	float HealthPercentForExplode; // 0x9ec(0x04)
	float FlipRecoveryTime; // 0x9f0(0x04)
	float FlipMaxDuration; // 0x9f4(0x04)
	float FlipWiggleDuration; // 0x9f8(0x04)
	float PoppedTireVeerDuration; // 0x9fc(0x04)
	float PoppedTireVeerSteeringAngle; // 0xa00(0x04)
	float FlipWiggleFrequency; // 0xa04(0x04)
	float FlipWiggleSteeringAngle; // 0xa08(0x04)
	float FlipYawAngleThreshold; // 0xa0c(0x04)
	bool bUsesBoost; // 0xa10(0x01)
	char pad_A11[0x3]; // 0xa11(0x03)
	float RechargeableBoostRateOfUse; // 0xa14(0x04)
	float RechargeableBoostRateOfRegen; // 0xa18(0x04)
	float BoostRateOfRegenMinMultiplier; // 0xa1c(0x04)
	float BoostRateOfRegenMaxMultiplier; // 0xa20(0x04)
	float BoostRegenMaxMultiplyTime; // 0xa24(0x04)
	float RechargeableBoostRequiredPercentToActivate; // 0xa28(0x04)
	float RechargeableBoostMaxPercent; // 0xa2c(0x04)
	float RechargeableBoostMinPercent; // 0xa30(0x04)
	int32_t NumWheelsOnSurfaceRequired; // 0xa34(0x04)
	float FuelLeakProjectileTimeInterval; // 0xa38(0x04)
	float FuelLeakHealthPercentThreshold; // 0xa3c(0x04)
	float ServerExtraHealth; // 0xa40(0x04)
	float MaxTimeZeroHealth; // 0xa44(0x04)
	float MaxTimeExplosion; // 0xa48(0x04)
	float MaxTimeSelfDestructCleanup; // 0xa4c(0x04)
	float SelfDestructTime; // 0xa50(0x04)
	float HUDTopSpeed; // 0xa54(0x04)
	float AnalogDriftStickThreshold; // 0xa58(0x04)
	struct FName TireBootRightSocketName; // 0xa5c(0x08)
	struct FName TireBootLeftSocketName; // 0xa64(0x08)
	float TireBootRelativeDistance; // 0xa6c(0x04)
	float BoostForceInAir; // 0xa70(0x04)
	float BoostAirMaxSpeed; // 0xa74(0x04)
	struct FString PlayerFacingName; // 0xa78(0x10)
	struct TArray<struct FName> TireSocketNames; // 0xa88(0x10)
	struct TArray<struct FName> TireBoneNames; // 0xa98(0x10)
	struct TArray<int32_t> RearTireIndices; // 0xaa8(0x10)
	struct TArray<int32_t> RightSideTires; // 0xab8(0x10)
	struct TArray<int32_t> FakeTireIndices; // 0xac8(0x10)
	bool bNoWheels; // 0xad8(0x01)
	char pad_AD9[0x3]; // 0xad9(0x03)
	float NoWheelsSpringLenMult; // 0xadc(0x04)
	struct TArray<struct FName> NoWheelsBonesToHide; // 0xae0(0x10)
	struct FGameplayTag SpawnWithModTag; // 0xaf0(0x08)
};

// Class ValetRuntime.FortDagwoodVehicleManager
// Size: 0xe0 (Inherited: 0xb0)
struct UFortDagwoodVehicleManager : UGameStateComponent {
	char pad_B0[0x20]; // 0xb0(0x20)
	bool bHasUpdatedPropReplacement; // 0xd0(0x01)
	char pad_D1[0x3]; // 0xd1(0x03)
	int32_t NumVehiclesSpawnedWithMod; // 0xd4(0x04)
	char pad_D8[0x8]; // 0xd8(0x08)

	void UpdatePropReplacement(); // Function ValetRuntime.FortDagwoodVehicleManager.UpdatePropReplacement // (Final|Native|Public) // @ game+0x203d3e0
	void OnVehicleSpawnsUpdated(struct UFortVehicleItemDefinition* VehicleItemDef, struct TArray<struct AActor*> SpawnedVehicles, int32_t NewVehicleCount); // Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawnsUpdated // (Final|Native|Public|HasOutParms) // @ game+0x3ce3450
	void OnVehicleSpawned(struct AFortAthenaVehicle* Vehicle); // Function ValetRuntime.FortDagwoodVehicleManager.OnVehicleSpawned // (Final|Native|Public) // @ game+0x3ce33b4
	void CustomHandleActorStreamedInEditor(struct AActor* SourceActor); // Function ValetRuntime.FortDagwoodVehicleManager.CustomHandleActorStreamedInEditor // (Final|Native|Public) // @ game+0x3ce1cd8
};

// Class ValetRuntime.FortGameStateComponent_Valet
// Size: 0x2c0 (Inherited: 0xb0)
struct UFortGameStateComponent_Valet : UFortGameStateComponent {
	char pad_B0[0x10]; // 0xb0(0x10)
	struct TMap<struct FGameplayTag, struct FTireInfo> TireMods; // 0xc0(0x50)
	struct FTireInfo EmptyTireInfo; // 0x110(0x1a0)
	struct TArray<struct FVehicleAttachment> Attachments; // 0x2b0(0x10)
};

// Class ValetRuntime.FortValetAudioController
// Size: 0x350 (Inherited: 0x220)
struct AFortValetAudioController : AActor {
	struct FMulticastInlineDelegate OnEngineLoadChanged; // 0x220(0x10)
	struct FMulticastInlineDelegate OnShiftGearCompleted; // 0x230(0x10)
	struct FMulticastInlineDelegate OnShiftGearDelegate; // 0x240(0x10)
	float RPMResetTime_Native; // 0x250(0x04)
	float JitterAmount_Native; // 0x254(0x04)
	float ShiftTimeThreshold_Native; // 0x258(0x04)
	float TimeSinceShift_Native; // 0x25c(0x04)
	float EngineRPMInterp_Native; // 0x260(0x04)
	float EngineRPMLinear_Native; // 0x264(0x04)
	float MinRPMRange_Native; // 0x268(0x04)
	float MaxRPMRange_Native; // 0x26c(0x04)
	bool bCurrentlyShifting_Native; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	float CurrentAccelRateGearModifier_Native; // 0x274(0x04)
	float CurrentAccelRate_Native; // 0x278(0x04)
	int32_t CurrentGear_Native; // 0x27c(0x04)
	int32_t MaxGear_Native; // 0x280(0x04)
	float DefaultAccelRateScalar_Native; // 0x284(0x04)
	float GearAttackInterpSpeed_Native; // 0x288(0x04)
	float GearReleaseInterpSpeed_Native; // 0x28c(0x04)
	float AccelRateScalarFirstGear_Native; // 0x290(0x04)
	float AccelRateScalarMinGear_Native; // 0x294(0x04)
	float AccelRateScalarMaxGear_Native; // 0x298(0x04)
	float ShiftToRPMStart_Native; // 0x29c(0x04)
	float ShiftToRPMEnd_Native; // 0x2a0(0x04)
	float ShiftFromRPMStart_Native; // 0x2a4(0x04)
	float ShiftFromRPMEnd_Native; // 0x2a8(0x04)
	float MaxRPMSawtoothDecrement_Native; // 0x2ac(0x04)
	float MaxRPMSawtoothRepeatTime_Native; // 0x2b0(0x04)
	float DownhillAccelScalar_Native; // 0x2b4(0x04)
	float UphillAccelScalar_Native; // 0x2b8(0x04)
	float NormalizedSpeed_Native; // 0x2bc(0x04)
	float SuspValue_Native; // 0x2c0(0x04)
	bool bIsHandbraking_Native; // 0x2c4(0x01)
	char pad_2C5[0x3]; // 0x2c5(0x03)
	float MotoSynthVolume_Native; // 0x2c8(0x04)
	float MotoSynthLogRPM_Native; // 0x2cc(0x04)
	bool bHasFuel_Native; // 0x2d0(0x01)
	bool bIsInWater_Native; // 0x2d1(0x01)
	bool bLocalPlayerInVehicle_Native; // 0x2d2(0x01)
	char pad_2D3[0x1]; // 0x2d3(0x01)
	float TimeLocalPlayerEnteredVehicle_Native; // 0x2d4(0x04)
	bool bAttemptingDirectionChange_Native; // 0x2d8(0x01)
	bool bPreDestroy_Native; // 0x2d9(0x01)
	bool bEngineLoad_Native; // 0x2da(0x01)
	char pad_2DB[0x1]; // 0x2db(0x01)
	float SkidAmount_Native; // 0x2dc(0x04)
	float TimeSinceAwoken_Native; // 0x2e0(0x04)
	bool bDestroyed_Native; // 0x2e4(0x01)
	char pad_2E5[0x3]; // 0x2e5(0x03)
	float TimeSinceSurfaceChange_Native; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct USoundBase* OnInitialSuspensionSound; // 0x2f0(0x08)
	float AngleForSkidding_Native; // 0x2f8(0x04)
	float SpringCompressionMultiplier; // 0x2fc(0x04)
	float MotoSynthMaxVolume_Native; // 0x300(0x04)
	struct FVector2D MotoSynthTimeInVehicleTimeRange; // 0x304(0x08)
	struct FVector2D MotoSynthTimeInVehicleVolumeRange; // 0x30c(0x08)
	struct TWeakObjectPtr<struct AFortDagwoodVehicle> ValetVehicle; // 0x314(0x08)
	char pad_31C[0x4]; // 0x31c(0x04)
	struct UFortLayeredAudioComponent* Engine_Native; // 0x320(0x08)
	struct UAudioComponent* BoostAudioComponent_Native; // 0x328(0x08)
	struct USynthComponentMoto* SynthComponentMoto_Native; // 0x330(0x08)
	struct UFortCollisionAudioComponent* SuspensionCollisionComponent_Native; // 0x338(0x08)
	char pad_340[0x10]; // 0x340(0x10)

	void Update_Native(); // Function ValetRuntime.FortValetAudioController.Update_Native // (Final|Native|Public|BlueprintCallable) // @ game+0xd743f4
	void OnTireModApplied(struct FTireInfo AppliedTireMod); // Function ValetRuntime.FortValetAudioController.OnTireModApplied // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnSuspensionCollision_Native(bool OutResult, float OutMagnitude); // Function ValetRuntime.FortValetAudioController.OnSuspensionCollision_Native // (Final|Native|Public|HasOutParms|BlueprintCallable) // @ game+0x166e084
	void CacheValetVehicle(struct AFortDagwoodVehicle* InVehicle); // Function ValetRuntime.FortValetAudioController.CacheValetVehicle // (Final|Native|Public|BlueprintCallable) // @ game+0x1ec4198
};

// Class ValetRuntime.FortValetGameFeatureData
// Size: 0x4d8 (Inherited: 0x458)
struct UFortValetGameFeatureData : UFortGameFeatureData {
	struct TMap<SoftClassProperty, struct FVehiclePropReplacementData> PropReplacements; // 0x458(0x50)
	SoftClassProperty VehicleSpawnerClass; // 0x4a8(0x28)
	enum class ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod; // 0x4d0(0x01)
	char pad_4D1[0x7]; // 0x4d1(0x07)
};

// Class ValetRuntime.FortValetMountedGunAnimInstance
// Size: 0x430 (Inherited: 0x410)
struct UFortValetMountedGunAnimInstance : UFortAnimInstance {
	struct AFortDagwoodVehicle* VehicleActor; // 0x408(0x08)
	bool bIsUsingMountedGun; // 0x410(0x01)
	int32_t SeatIndexCached; // 0x414(0x04)
	float AimingYaw; // 0x418(0x04)
	float AimingPitch; // 0x41c(0x04)
	struct AFortWeaponRangedForVehicle* MountedWeapon; // 0x420(0x08)
	char pad_42D[0x3]; // 0x42d(0x03)
};

// Class ValetRuntime.FortValetPassengerAnimInstance
// Size: 0x6e0 (Inherited: 0x670)
struct UFortValetPassengerAnimInstance : UFortVehicleOccupantAnimInstance {
	struct FCachedAnimRelevancyData IntoVehicleCachedData; // 0x668(0x1c)
	struct FCachedAnimRelevancyData OutOfVehicleCachedData; // 0x684(0x1c)
	struct TSoftObjectPtr<struct AFortDagwoodVehicle> DagwoodVehicleInstance; // 0x6a0(0x28)
	float TurnYaw; // 0x6c8(0x04)
	float InTime; // 0x6cc(0x04)
	float OutTime; // 0x6d0(0x04)
	float NegativeTurnYaw; // 0x6d4(0x04)
	bool bIsReloading; // 0x6d8(0x01)
	bool bIsTargeting; // 0x6d9(0x01)
	bool bIsFiring; // 0x6da(0x01)
	bool bIsUsingConsumable; // 0x6db(0x01)
	bool bIsInAction; // 0x6dc(0x01)
	bool bIsPassengerBackLeft; // 0x6dd(0x01)
	bool bIsThrowConsumable; // 0x6de(0x01)
	bool bIsTargetingOrThrowingConsumable; // 0x6df(0x01)
};

