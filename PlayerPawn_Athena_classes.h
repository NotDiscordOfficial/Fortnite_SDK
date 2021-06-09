// BlueprintGeneratedClass PlayerPawn_Athena.PlayerPawn_Athena_C
// Size: 0x4898 (Inherited: 0x41f0)
struct APlayerPawn_Athena_C : APlayerPawn_Athena_Generic_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x41f0(0x08)
	struct UFortContrailsComponent* FortContrails; // 0x41f8(0x08)
	struct UFortUnderwaterDamageComponent* FortUnderwaterDamage; // 0x4200(0x08)
	float Timeline_0_BlendWeight_A4943458400C3662DB243099F9EAC7E8; // 0x4208(0x04)
	enum class ETimelineDirection Timeline_0__Direction_A4943458400C3662DB243099F9EAC7E8; // 0x420c(0x01)
	char pad_420D[0x3]; // 0x420d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x4210(0x08)
	struct USkeletalMeshComponent* TargetHead; // 0x4218(0x08)
	struct USkeletalMeshComponent* TargetBody; // 0x4220(0x08)
	struct TArray<struct UMaterialInterface*> PawnHeadMaterials_1; // 0x4228(0x10)
	struct TArray<struct UMaterialInterface*> PawnBodyMaterials_1; // 0x4238(0x10)
	struct FGameplayTagContainer TC_FlakVest; // 0x4248(0x20)
	struct FGameplayEventData Event Data; // 0x4268(0xb0)
	struct FGameplayTag EventSpawnEffect; // 0x4318(0x08)
	bool IsMale; // 0x4320(0x01)
	char pad_4321[0x7]; // 0x4321(0x07)
	struct AFortWeapon* MenuGoingCommandowWeapon; // 0x4328(0x08)
	struct USoundBase* SafeZonePassThroughSound; // 0x4330(0x08)
	bool bHasBeenOutsideSafeZone; // 0x4338(0x01)
	char pad_4339[0x3]; // 0x4339(0x03)
	struct FLinearColor ThreatColor; // 0x433c(0x10)
	char pad_434C[0x4]; // 0x434c(0x04)
	struct USoundBase* PlayerKilledSound; // 0x4350(0x08)
	struct UParticleSystemComponent* WindDebrisParticles; // 0x4358(0x08)
	struct UParticleSystemComponent* FallingRainParticles; // 0x4360(0x08)
	struct UParticleSystemComponent* StormAuraParticles; // 0x4368(0x08)
	struct FVector LightningSpawnLocation; // 0x4370(0x0c)
	float LightningIntensityMin; // 0x437c(0x04)
	float LightningIntensityMax; // 0x4380(0x04)
	char pad_4384[0x4]; // 0x4384(0x04)
	struct AActor* SafeZoneActor; // 0x4388(0x08)
	float LightningIntensity; // 0x4390(0x04)
	char pad_4394[0x4]; // 0x4394(0x04)
	struct UPointLightComponent* RandomLightningLight; // 0x4398(0x08)
	float LightningTimelinePlaySpeedMin; // 0x43a0(0x04)
	float LightningTimelinePlaySpeedMax; // 0x43a4(0x04)
	float LightningFlashDiameter; // 0x43a8(0x04)
	float LightningFlashHeight; // 0x43ac(0x04)
	float LightningFlashRepeatDelayMin; // 0x43b0(0x04)
	float LightningFlashRepeatDelayMax; // 0x43b4(0x04)
	struct AEmitterCameraLensEffectBase* RainCameraLensParticles; // 0x43b8(0x08)
	float %ChanceOfLightningMesh; // 0x43c0(0x04)
	bool ShowInvulnerableVisuals; // 0x43c4(0x01)
	char pad_43C5[0x3]; // 0x43c5(0x03)
	struct UAudioComponent* StormAudioLoop_Inst; // 0x43c8(0x08)
	float StormAudioVolume; // 0x43d0(0x04)
	char pad_43D4[0x4]; // 0x43d4(0x04)
	struct UAudioComponent* FallingAudioLoop_Inst; // 0x43d8(0x08)
	bool bIsPlayingFallingSound; // 0x43e0(0x01)
	char pad_43E1[0x3]; // 0x43e1(0x03)
	float PlayerAttributes_Speed_Walk; // 0x43e4(0x04)
	float PlayerAttributes_Speed_Run; // 0x43e8(0x04)
	float PlayerAttributes_Speed_Sprint; // 0x43ec(0x04)
	int32_t MaxTrailsLOD; // 0x43f0(0x04)
	char pad_43F4[0x4]; // 0x43f4(0x04)
	struct UPostProcessComponent* MobilePostProcess; // 0x43f8(0x08)
	bool bIsOutsideSafeZoneCached; // 0x4400(0x01)
	char pad_4401[0x7]; // 0x4401(0x07)
	struct TArray<struct UMaterialInstanceDynamic*> ResOutMaterials; // 0x4408(0x10)
	struct ADuplicateResOutMesh_C* RezInFXActor; // 0x4418(0x08)
	bool bQueueRezIn; // 0x4420(0x01)
	char pad_4421[0x7]; // 0x4421(0x07)
	struct ADuplicateResOutMesh_C* RezOutFXActor; // 0x4428(0x08)
	bool bQueueRezOut; // 0x4430(0x01)
	bool bWasEverInWarmUp; // 0x4431(0x01)
	bool bStormAudioCleanedUp; // 0x4432(0x01)
	char pad_4433[0xd]; // 0x4433(0x0d)
	struct FTransform Box Local Transform; // 0x4440(0x30)
	float BoundsRadius; // 0x4470(0x04)
	char pad_4474[0x4]; // 0x4474(0x04)
	struct UPointLightComponent* TeleportationPointLight; // 0x4478(0x08)
	float MaxLightIntensity; // 0x4480(0x04)
	struct FName Socket_MeshTop; // 0x4484(0x08)
	struct FName Socket_MeshBot; // 0x448c(0x08)
	struct FName MIDParam_Transition; // 0x4494(0x08)
	struct FName MIDParam_DissolvePercent; // 0x449c(0x08)
	struct FName MIDParam_DissolveDirection; // 0x44a4(0x08)
	struct FName MIDParam_DissolveBaseLoc; // 0x44ac(0x08)
	struct FName MIDParam_DissolveDistance; // 0x44b4(0x08)
	struct FName MIDParam_DissolveFirstSpawn; // 0x44bc(0x08)
	char pad_44C4[0x4]; // 0x44c4(0x04)
	struct UMaterialInterface* Mat_CharacterDissolve; // 0x44c8(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> DissolveMIDs; // 0x44d0(0x10)
	bool bUseNewTeleportFX; // 0x44e0(0x01)
	char pad_44E1[0x3]; // 0x44e1(0x03)
	struct FGameplayTag OutsideSafeZoneGameplayCueTag; // 0x44e4(0x08)
	int32_t SafeZonePhase; // 0x44ec(0x04)
	int32_t WhichSafeZoneTag; // 0x44f0(0x04)
	bool bOutsideSafeZoneGameplayCueActive; // 0x44f4(0x01)
	char pad_44F5[0x3]; // 0x44f5(0x03)
	struct FScalableFloat SafeZoneDamageScalableFloat; // 0x44f8(0x28)
	bool bFrontendPartyInProgress; // 0x4520(0x01)
	bool bLockOnInteractionComplete; // 0x4521(0x01)
	char pad_4522[0x6]; // 0x4522(0x06)
	struct FMulticastInlineDelegate ResIn; // 0x4528(0x10)
	struct FMulticastInlineDelegate ResOut; // 0x4538(0x10)
	struct FMulticastInlineDelegate SwingRight; // 0x4548(0x10)
	struct FMulticastInlineDelegate SwingLeft; // 0x4558(0x10)
	bool bSkeletalArrayReady; // 0x4568(0x01)
	char pad_4569[0x3]; // 0x4569(0x03)
	int32_t CurDissolveSetupAttempt; // 0x456c(0x04)
	struct USoundBase* DBNOEnterSound; // 0x4570(0x08)
	struct FMulticastInlineDelegate onFadeToWhiteTeleported; // 0x4578(0x10)
	bool Is_Ashton; // 0x4588(0x01)
	char pad_4589[0x7]; // 0x4589(0x07)
	struct UParticleSystemComponent* Ashton; // 0x4590(0x08)
	struct FMulticastInlineDelegate SwingRightEnd; // 0x4598(0x10)
	struct FMulticastInlineDelegate SwingLeftEnd; // 0x45a8(0x10)
	struct FGameplayTag PhoneGhostCue; // 0x45b8(0x08)
	struct FGameplayTag WhiteoutCue; // 0x45c0(0x08)
	struct FGameplayTag OutsideSafeZoneCue; // 0x45c8(0x08)
	struct FGameplayTag OutsideSafeZone2Cue; // 0x45d0(0x08)
	struct FGameplayTag OutsideSafeZone3Cue; // 0x45d8(0x08)
	bool PlayRespawnFXOnSpawn; // 0x45e0(0x01)
	char pad_45E1[0x7]; // 0x45e1(0x07)
	struct AFortPlayerPawnAthena* PlayerPawnAthena; // 0x45e8(0x08)
	struct FMulticastInlineDelegate SwingRight2; // 0x45f0(0x10)
	struct FMulticastInlineDelegate SwingLeft2; // 0x4600(0x10)
	bool TestProceduralWaterInIsolation; // 0x4610(0x01)
	bool NewVar_1; // 0x4611(0x01)
	bool Is First Water Body; // 0x4612(0x01)
	bool Is Last Water Body; // 0x4613(0x01)
	float AccumulatedNormalizedDiveSpeed; // 0x4614(0x04)
	struct FGameplayTag WaterSprintBoostTag; // 0x4618(0x08)
	struct FMulticastInlineDelegate CCPM_isHiddenInProp; // 0x4620(0x10)
	struct TMap<struct UObject*, struct FPawnHighlight> PawnHighlights; // 0x4630(0x50)
	struct UObject* Current Highlight Source; // 0x4680(0x08)
	float Current Highlight Priority; // 0x4688(0x04)
	struct FPawnHighlight Invulnerable Highlight; // 0x468c(0x30)
	struct FFCreativeEffectColorIndex LastCreativeEffectColorIndex; // 0x46bc(0x08)
	bool IsGalileo; // 0x46c4(0x01)
	char pad_46C5[0x3]; // 0x46c5(0x03)
	struct FScalableFloat HotFixSnow; // 0x46c8(0x28)
	struct TSet<struct FName> NoSnowPlaylists; // 0x46f0(0x50)
	struct FGameplayTag GalileoPlaylistTag; // 0x4740(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> WeaponMIDs; // 0x4748(0x10)
	int32_t AmountOfTimesToAttemptRestoreMats; // 0x4758(0x04)
	struct FGameplayTag TC_PawnAthenaNPC; // 0x475c(0x08)
	float HitGlowBrightnessScalar; // 0x4764(0x04)
	struct TArray<struct UMaterialInterface*> CurrentWeaponMaterials; // 0x4768(0x10)
	struct TArray<struct USkeletalMeshComponent*> CurrentWeaponMeshes; // 0x4778(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> WeaponDissolveMIDs; // 0x4788(0x10)
	float HitGlowBrightnessScalar_Mobile; // 0x4798(0x04)
	struct FGameplayTag TC_PawnAthenaDecoy; // 0x479c(0x08)
	float ScaleRate; // 0x47a4(0x04)
	struct FGameplayTagContainer TetherQuestTag; // 0x47a8(0x20)
	struct FName FirefliesTag; // 0x47c8(0x08)
	struct FTransform RightSideRim_Transform; // 0x47d0(0x30)
	struct USpotLightComponent* Right Side Rim Light; // 0x4800(0x08)
	float Rim light Shadow Bias; // 0x4808(0x04)
	float Rim Light Attenuation Radius; // 0x480c(0x04)
	float Rim Light Intensity; // 0x4810(0x04)
	struct FRotator PlayerAimRotation; // 0x4814(0x0c)
	struct FScalableFloat ControlRotationReplicationTickRate; // 0x4820(0x28)
	struct FGameplayTag Elimination Rez Sequence GC; // 0x4848(0x08)
	struct FGameplayTag Creative Respawn Teleportation GC; // 0x4850(0x08)
	struct FGameplayTag Teleport In GC; // 0x4858(0x08)
	float RimlightDistanceFromCamera; // 0x4860(0x04)
	float RimlightOffsetFromCamera; // 0x4864(0x04)
	struct FLinearColor Rim Light Color - Night; // 0x4868(0x10)
	struct FLinearColor Rim Light Color - Day; // 0x4878(0x10)
	struct FGameplayTag PhoneModeratorModeGameplayCue; // 0x4888(0x08)
	struct FGameplayTag PhoneInvulnerableGameplayCue; // 0x4890(0x08)

	void Get Creative Effect Data(struct FFCreativeEffectColorIndex Effect Color); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Creative Effect Data // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Hide Character Parts(bool IsHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Hide Character Parts // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Rim Light Location(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Update Rim Light Location // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void handleCvarsUpdated(struct FString CVarName); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.handleCvarsUpdated // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_PlayerAimRotation(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayerAimRotation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetAimPoint(struct FRotator ControlRotation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetAimPoint // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void validateRimLight(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.validateRimLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool PawnIsDecoy(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsDecoy // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool PawnIsNPC(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.PawnIsNPC // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RemoveSkeletalMeshComponentsFromWeaponObject(struct AFortWeapon* WeaponObject); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSkeletalMeshComponentsFromWeaponObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddSkeletalMeshComponentsFromWeaponObject(struct AFortWeapon* WeaponObject); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSkeletalMeshComponentsFromWeaponObject // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GalileoMaterialSetup(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GalileoMaterialSetup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Get Highest Priority Highlight(struct UObject* Source, struct FPawnHighlight Top Priority); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Get Highest Priority Highlight // (Private|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Highlight Pawn from Source(struct UObject* Source, struct FPawnHighlight Highlight, bool Only Update If Current); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Highlight Pawn from Source // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Remove Pawn Highlight from Source(struct UObject* Source); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Remove Pawn Highlight from Source // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyPawnHighlight(struct UObject* Source, struct FPawnHighlight HitGlow); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyPawnHighlight // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_PlayRespawnFXOnSpawn(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnRep_PlayRespawnFXOnSpawn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LockonSearchCompleteTimedOut(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.LockonSearchCompleteTimedOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLockOnSearchCompleted(bool bConsumeEvent); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLockOnSearchCompleted // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPartyInProgress(bool bIsPartyInProgress); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPartyInProgress // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanUpTeleportationFXLight(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanUpTeleportationFXLight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RestoreCharacterMats(bool bFullyCompleted); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RestoreCharacterMats // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPetHidden(bool NewHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetPetHidden // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupDissolveFx(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupDissolveFx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CleanupDissolveFX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.CleanupDissolveFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateDissolveFx(float Scalar_Transition, float Scalar_ZHeight, float Scalar_LightIntensity); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.UpdateDissolveFx // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnTeleportationLight(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SpawnTeleportationLight // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FindBounds(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.FindBounds // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void QueueTeleportOut(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportOut // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void QueueTeleportIn(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.QueueTeleportIn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStartLongInteract(struct AActor* ReceivingActor, bool Out_bConsumeEvent, bool Out_bSkipSetInteractDuration, bool Out_bSkipStartAnimation, enum class EItemInteractionType Out_ItemInteractionType); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnStartLongInteract // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InWarmup(bool bInWarmup); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.InWarmup // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopLoopingAudio(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.StopLoopingAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableWaterAudio(bool Is Entering Water); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.EnableWaterAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetLocationInCircle_XY(struct FVector LocationLocalSpace); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GetLocationInCircle_XY // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void InitAthenaFoleyAudio(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.InitAthenaFoleyAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnReady_978607004CDEB137CACF38831BECEF40(struct AFortGameStateAthena* GameState, struct UFortPlaylist* Playlist, struct FGameplayTagContainer PlaylistContextTags); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReady_978607004CDEB137CACF38831BECEF40 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Athena.Equipping(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Equipping // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SafeZoneStatusChanged(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SafeZoneStatusChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Athena.Player.BeingRevivedFromDBNO(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Player.BeingRevivedFromDBNO // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveStormFX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveStormFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.DBNOResurrect(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOResurrect // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterVolume(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedWaterVolume(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void NotifyTeammateSkydivedFromBus(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.NotifyTeammateSkydivedFromBus // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveEndPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnLeftReplayRelevancy(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLeftReplayRelevancy // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredReplayRelevancy(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredReplayRelevancy // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCharacterCustomizationCompleted(struct AFortPlayerPawn* Pawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCharacterCustomizationCompleted // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnResInDuringWarmup(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnResInDuringWarmup // (BlueprintCosmetic|Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddStormFX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddStormFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetSafeZonePhaseAndGameplayCueTag(int32_t InSafeZonePhase, bool bSpawnGameplayCue); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZonePhaseAndGameplayCueTag // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSafeZoneTagWhenChanged(int32_t NewWhichSafeZoneTag, struct FGameplayTag GameplayTag, bool bSpawnGameplayCue); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetSafeZoneTagWhenChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnOutsideSafeZonePhaseChanged(int32_t SafeZonePhase); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnOutsideSafeZonePhaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void RemoveSafeZoneGameplayCue(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCue // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnReceivedStormSurgeDamage(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnReceivedStormSurgeDamage // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.DBNOEnter(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.DBNOEnter // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateInvincibleVisuals(float Duration); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ActivateInvincibleVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceivePossessed(struct AController* NewController); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Athena.Reloading(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Reloading // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TeleportInNSeconds(float SecondsTillTeleport, struct FVector DestLocation, struct FRotator DestRotation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.TeleportInNSeconds // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClientRunSnowGC(bool Instant); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ClientRunSnowGC // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void WhiteoutAndTeleport(struct FVector DestLocation, struct FRotator DestRotation, bool Instant, float Gravity); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.WhiteoutAndTeleport // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Athena.Boost(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Athena.Boost // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeStopGhost(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopGhost // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeStartGhost(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartGhost // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft_End(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight_End(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddSafeZoneGameplayCue(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AddSafeZoneGameplayCue // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RemoveSafeZoneGameplayCueServerToClient(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.RemoveSafeZoneGameplayCueServerToClient // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSuccessfulBuildingEdit(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSuccessfulBuildingEdit // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Play Respawn FX(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.Play Respawn FX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSpawnImmunityTimeReset(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnSpawnImmunityTimeReset // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsFirstBody); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnEnteredWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedWaterBody(struct AFortWaterBodyActor* WaterBody, bool bIsLastBody); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnExitedWaterBody // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnMovementModeChanged(enum class EMovementMode PrevMovementMode, enum class EMovementMode NewMovementMode, char PrevCustomMode, char NewCustomMode); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.K2_OnMovementModeChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBeginWaterSprintBoost(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnBeginWaterSprintBoost // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void isHiddingInProp(bool IsHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.isHiddingInProp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ServerSetCreativeEffectColorIndex(struct FFCreativeEffectColorIndex Index); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ServerSetCreativeEffectColorIndex // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLandscapeCheckFailedAndTeleported(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnLandscapeCheckFailedAndTeleported // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ScalePlayerUp(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerUp // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScalePlayerDown(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ScalePlayerDown // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTetheredExitPressed(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitPressed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTetheredExitReleased(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetheredExitReleased // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTetherStarted(struct APawn* LastTetherPawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherStarted // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTetherEnded(struct APawn* LastTetherPawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnTetherEnded // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void StartAImRotationTick(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.StartAImRotationTick // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EndRotationTick(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.EndRotationTick // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReplicateAimRotation(struct FRotator PlayerAimRotation); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReplicateAimRotation // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AimTick(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.AimTick // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Damage(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Healing(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Healing // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Shield.PotionConsumed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.GameplayCue.Shield.PotionConsumed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupColdTag(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SetupColdTag // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyColdTag(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyColdTag_Retry(struct UFortAbilitySystemComponent* AbilitySystemComponent, struct AFortPlayerPawn* AffectedPawn); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ApplyColdTag_Retry // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeModeratorModeActivate(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeActivate // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeModeratorModeDeactivate(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeModeratorModeDeactivate // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeStartInvulnerable(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStartInvulnerable // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCreativeStopInvulnerable(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.OnCreativeStopInvulnerable // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerPawn_Athena(int32_t EntryPoint); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ExecuteUbergraph_PlayerPawn_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void CCPM_isHiddenInProp__DelegateSignature(bool IsHidden); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.CCPM_isHiddenInProp__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeft2__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRight2__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeftEnd__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeftEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRightEnd__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRightEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void onFadeToWhiteTeleported__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.onFadeToWhiteTeleported__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeft__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRight__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.SwingRight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResOut__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResOut__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResIn__DelegateSignature(); // Function PlayerPawn_Athena.PlayerPawn_Athena_C.ResIn__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

