// BlueprintGeneratedClass PlayerPawn_Generic.PlayerPawn_Generic_C
// Size: 0x38b0 (Inherited: 0x3408)
struct APlayerPawn_Generic_C : APlayerPawn_Generic_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3408(0x08)
	struct UParticleSystemComponent* SplashEffectsForEnteringOrExitingWater; // 0x3410(0x08)
	struct UParticleSystemComponent* GamplayWindInteractionEffects; // 0x3418(0x08)
	struct UParticleSystemComponent* Effect_Player_Run_Land; // 0x3420(0x08)
	struct UParticleSystemComponent* Effect_Player_Walk_Land; // 0x3428(0x08)
	struct UParticleSystemComponent* Effect_Player_Walk_Water; // 0x3430(0x08)
	struct UParticleSystemComponent* Effect_Player_Run_Water; // 0x3438(0x08)
	struct UParticleSystemComponent* Effect_WaterInteraction_FX; // 0x3440(0x08)
	struct UParticleSystemComponent* HitDamageParticles; // 0x3448(0x08)
	struct UWidgetComponent* SpeechBubbleComponent; // 0x3450(0x08)
	struct USpotLightComponent* PlayerLight; // 0x3458(0x08)
	float ShatterShield_Push_3B96BD02488A8F69F3D086A2B7978EC8; // 0x3460(0x04)
	float ShatterShield_Opacity_3B96BD02488A8F69F3D086A2B7978EC8; // 0x3464(0x04)
	float ShatterShield_Highlight_Cracks_3B96BD02488A8F69F3D086A2B7978EC8; // 0x3468(0x04)
	enum class ETimelineDirection ShatterShield__Direction_3B96BD02488A8F69F3D086A2B7978EC8; // 0x346c(0x01)
	char pad_346D[0x3]; // 0x346d(0x03)
	struct UTimelineComponent* ShatterShield; // 0x3470(0x08)
	struct USoundBase* HitByHuskRangedSound; // 0x3478(0x08)
	struct USoundBase* HitByHuskMeleeSound; // 0x3480(0x08)
	struct UAnimMontage* SoulSuckVictimMontage; // 0x3488(0x08)
	float PlayerSpeed; // 0x3490(0x04)
	float Run_Particle_Activate_Speed; // 0x3494(0x04)
	float Walk_Dust_Activate_Speed; // 0x3498(0x04)
	float Walk_Particle_Reset_Speed; // 0x349c(0x04)
	struct FVector PreviousVelocityVector; // 0x34a0(0x0c)
	bool CanSpawnRunKickupFX?; // 0x34ac(0x01)
	bool CanSpawnWalkKickupFX?; // 0x34ad(0x01)
	bool CanSpawnDustLandFX?; // 0x34ae(0x01)
	char pad_34AF[0x1]; // 0x34af(0x01)
	struct FRotator RunWalkParticleRotation; // 0x34b0(0x0c)
	bool IsNinjaInShadowStance?; // 0x34bc(0x01)
	char pad_34BD[0x3]; // 0x34bd(0x03)
	struct FGameplayTagContainer GameplayTagsForHitByHuskMeleeSound; // 0x34c0(0x20)
	struct UMaterialInterface* Shield Material; // 0x34e0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> BodyShieldMIDArray; // 0x34e8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> HeadShieldMIDArray; // 0x34f8(0x10)
	bool Shield Active; // 0x3508(0x01)
	char pad_3509[0x7]; // 0x3509(0x07)
	struct USoundBase* Sound_Shield_Impact; // 0x3510(0x08)
	struct USoundBase* Sound_Shield_Destroyed; // 0x3518(0x08)
	struct USoundBase* Sound_Shield_FullyCharged; // 0x3520(0x08)
	float Shield Shatter Opacity; // 0x3528(0x04)
	float Regen Opacity; // 0x352c(0x04)
	float Damage Opacity; // 0x3530(0x04)
	float Default Shield opacity; // 0x3534(0x04)
	float Shield_PushMinValue; // 0x3538(0x04)
	bool ShieldVisible_Hit; // 0x353c(0x01)
	bool ShieldVisible_Recover; // 0x353d(0x01)
	bool ShieldVisible_Shatter; // 0x353e(0x01)
	bool ShieldVisible_FullHealth; // 0x353f(0x01)
	float Fully Regened Shield health Opacity; // 0x3540(0x04)
	char pad_3544[0x4]; // 0x3544(0x04)
	struct FGameplayTagContainer TC_GameplayCueDamageShielded; // 0x3548(0x20)
	bool LatestDamageIsShieldDamage; // 0x3568(0x01)
	char pad_3569[0x3]; // 0x3569(0x03)
	float Damage_Taken; // 0x356c(0x04)
	float Last_Shield_Damage_Time; // 0x3570(0x04)
	char pad_3574[0x4]; // 0x3574(0x04)
	struct TArray<struct UMaterialInstanceDynamic*> CharmShieldMIDArray; // 0x3578(0x10)
	bool BodyValid; // 0x3588(0x01)
	bool BackpackValid; // 0x3589(0x01)
	bool HatValid; // 0x358a(0x01)
	bool FaceValid; // 0x358b(0x01)
	bool CharmValid; // 0x358c(0x01)
	bool HeadValid; // 0x358d(0x01)
	bool On_Player_Built_Floor; // 0x358e(0x01)
	char pad_358F[0x1]; // 0x358f(0x01)
	struct FGameplayTag Event_NeedRoadsActive; // 0x3590(0x08)
	struct FGameplayTag Event_NeedRoadsDeactive; // 0x3598(0x08)
	struct FGameplayTagContainer TC_WhereWereGoingWeNeedRoads; // 0x35a0(0x20)
	struct UParticleSystem* Effect_Player_LandedDust; // 0x35c0(0x08)
	struct USkeletalMeshComponent* Shield_BodySkeletalMesh; // 0x35c8(0x08)
	struct USkeletalMeshComponent* Shield_HeadSkeletalMesh; // 0x35d0(0x08)
	struct USkeletalMeshComponent* Shield_CharmSkeletalMesh; // 0x35d8(0x08)
	struct USceneComponent* Sound Player Hit; // 0x35e0(0x08)
	struct UForceFeedbackEffect* DamageForceFeedback; // 0x35e8(0x08)
	struct UParticleSystem* Effect_Player_Landed_WindVector_P; // 0x35f0(0x08)
	struct UUserWidget* SpeechBubbleWidgetClass; // 0x35f8(0x08)
	struct FText LastSpeechText; // 0x3600(0x18)
	struct UMatineeCameraShake* DamageCameraShake; // 0x3618(0x08)
	bool UseAnimTrailsNotifies; // 0x3620(0x01)
	char pad_3621[0x3]; // 0x3621(0x03)
	struct FVector StableVelocityVector; // 0x3624(0x0c)
	bool TickWaterLevel; // 0x3630(0x01)
	char pad_3631[0x7]; // 0x3631(0x07)
	struct UTextureRenderTarget2D* WetnessDepthTexture; // 0x3638(0x08)
	struct UMaterialInstanceDynamic* WaterLevelMID; // 0x3640(0x08)
	struct UMaterialInstanceDynamic* WaterDecayMID; // 0x3648(0x08)
	bool Was RTT Enabled Var Set; // 0x3650(0x01)
	bool Water Scene Capture Enabled; // 0x3651(0x01)
	char pad_3652[0x6]; // 0x3652(0x06)
	struct AActor* CachedEffect; // 0x3658(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> WaterInteractionWakeMIDS; // 0x3660(0x10)
	struct FLinearColor WaterTraceImpactNormalAndZHeightLocation; // 0x3670(0x10)
	struct FVector PlayerVelocity; // 0x3680(0x0c)
	bool EnableRunWalkWaterGroundFX; // 0x368c(0x01)
	char pad_368D[0x3]; // 0x368d(0x03)
	struct TArray<struct UMaterialInstanceDynamic*> Previous MID; // 0x3690(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Weapon MID; // 0x36a0(0x10)
	struct USkeletalMeshComponent* DuplicateCharacterMesh; // 0x36b0(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Head MID; // 0x36b8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Body MID; // 0x36c8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Hat MID; // 0x36d8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Backpack MID; // 0x36e8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Charm MID; // 0x36f8(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> Previous Face MID; // 0x3708(0x10)
	struct FMulticastInlineDelegate SwingRight; // 0x3718(0x10)
	struct FMulticastInlineDelegate SwingRightEnd; // 0x3728(0x10)
	struct FMulticastInlineDelegate SwingLeft; // 0x3738(0x10)
	struct FMulticastInlineDelegate SwingLeftEnd; // 0x3748(0x10)
	struct FMulticastInlineDelegate AnimNotify_Begin; // 0x3758(0x10)
	struct FMulticastInlineDelegate AnimNotify_End; // 0x3768(0x10)
	struct UFXSystemComponent* OverrideAnimTrail; // 0x3778(0x08)
	struct FMulticastInlineDelegate SwingRight2; // 0x3780(0x10)
	struct FMulticastInlineDelegate SwingLeft2; // 0x3790(0x10)
	struct UFXSystemComponent* AnimTrailFx; // 0x37a0(0x08)
	bool BlockedByPawns; // 0x37a8(0x01)
	char pad_37A9[0x7]; // 0x37a9(0x07)
	struct FGameplayAttribute Attribute CurrentShield Const; // 0x37b0(0x38)
	struct FGameplayAttribute Attribute Shield Const; // 0x37e8(0x38)
	struct FGameplayAttribute Attribute CurrentHealth Const; // 0x3820(0x38)
	struct FGameplayAttribute Attribute Max Health Const; // 0x3858(0x38)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_PlayerHealthDamage; // 0x3890(0x08)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_PlayerShieldDamage; // 0x3898(0x08)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_Directional_PlayerShieldDamage; // 0x38a0(0x08)
	struct FCameraLensInterfaceClassSupport LensEffectInterfaceClass_Directional_PlayerHealthDamage; // 0x38a8(0x08)

	void Melee_Effect_Color(struct FVector Melee_Color_Set); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float GetHealthPercent2(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GetHealthPercent2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	float GetShieldPercent2(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GetShieldPercent2 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_BlockedByPawns(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_BlockedByPawns // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayHitSound(struct AFortPawn* Instigator, struct AActor* Damage Causer); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayHitSound // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableWaterAudio(bool IsEnteringWater); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.EnableWaterAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Body Type Sounds(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Body Type Sounds // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Scalar Parameter on Duplicate Mesh MIDs(struct FName Parameter Name, float Parameter Value); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Duplicate Mesh MIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Scalar Parameter on Character MIDs(struct FName Parameter Name, float Parameter Value); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Set Scalar Parameter on Character MIDs // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Restore Previous Materials on Weapons Mesh(struct AFortWeapon* Weapon to Restore); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Weapons Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Restore Previous Materials on Character Mesh(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Restore Previous Materials on Character Mesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Override Materials and Copy Parameters on Weapons Mesh(struct UMaterialInterface* Material to Apply); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Override Materials and Copy Parameters on Weapons Mesh // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerGameplayWindEmitter(enum class PlayerWindParticleEmitters Player Wind Particle Emitter To Fire); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.TriggerGameplayWindEmitter // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Are the wind and water RTT passes enabled(bool NewParam); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Are the wind and water RTT passes enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisableWaterLevelTick(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.DisableWaterLevelTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_On_Player_Built_Floor(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnRep_On_Player_Built_Floor // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup FX Mesh Duplicates(struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*> Charm MID Array, struct USkeletalMeshComponent* Charm Mesh, struct TArray<struct UMaterialInstanceDynamic*> Head MID Array, struct USkeletalMeshComponent* Head Mesh, struct TArray<struct UMaterialInstanceDynamic*> Body MID Array, struct USkeletalMeshComponent* Body Mesh, int32_t Translucent Sort Order, bool Transfer Material Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Setup FX Mesh Duplicates // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create and Duplicate Effect Poseable Skeletal Mesh(enum class EFortCustomPartType BodyType, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*> Empty MID Array, int32_t TranslucentSortPriority, struct UPoseableMeshComponent* PoseableMesh); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleShieldVisibility(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ToggleShieldVisibility // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SlaveAMeshToTheBody(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* Master); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SlaveAMeshToTheBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetShieldMids_InternalLoop(float Highlight Cracks, bool Set Highlight Cracks, float Push, bool Set Push, struct TArray<struct UMaterialInstanceDynamic*> NewParam1); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids_InternalLoop // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetShieldMids(float Highlight Cracks, bool Set Highlight Cracks, float Push, bool Set Push); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetShieldMids // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FindShieldOpacity(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.FindShieldOpacity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create and Duplicate Effect Skeletal Meshes Parent(enum class EFortCustomPartType BodyType, struct USkeletalMeshComponent* DuplicatedSkeletalMeshComponent, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*> Empty MID Array, int32_t TranslucentSortPriority); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShatterShield__FinishedFunc(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ShatterShield__UpdateFunc(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ShatterShield__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLanded(struct FHitResult Hit); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveTick(float DeltaSeconds); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceiveTick // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void FootStepLeft(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FootStepRight(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCharacterPartsReinitialized(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnCharacterPartsReinitialized // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetFirstPersonCamera(bool bNewUseFirstPersonCamera); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetFirstPersonCamera // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void InternalSetFirstPersonCamera(bool NewUseFirstPersonCamera); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.InternalSetFirstPersonCamera // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBaseChanged(struct AActor* NewBase); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnBaseChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceivePossessed(struct AController* NewController); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReceivePossessed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDisplaySentence(struct FText SpeechText); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDisplaySentence // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnClearSentence(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnClearSentence // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ClientBindWeaponSwap(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ClientBindWeaponSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindWeaponSwap(float InDuration); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.BindWeaponSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MultiSwapWeapon(struct AFortWeapon* New, struct AFortWeapon* Prev); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiSwapWeapon // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnBindWeaponSwap(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.UnBindWeaponSwap // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MultiEndSwap(struct AFortWeapon* CurrentWeapon); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MultiEndSwap // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlayGameplayWindEffect(enum class PlayerWindParticleEmitters Player Wind Particle Emitter To Fire); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.PlayGameplayWindEffect // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Entered Water Volume(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Entered Water Volume // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Player Creates a Splash(struct FTransform NewTransform); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.Player Creates a Splash // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReinitializeWeaponMaterials(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ReinitializeWeaponMaterials // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Shield.FullyCharged(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.FullyCharged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Shield.Destroyed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Shield.Destroyed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Damage(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.GameplayCue.Damage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredVehicle(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredVehicle // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedVehicle(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedVehicle // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft_End(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight_End(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEnteredWaterVolume(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnEnteredWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnExitedWaterVolume(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnExitedWaterVolume // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetBlockedByPawns(bool bLocked); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SetBlockedByPawns // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLand_CE(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.OnLand_CE // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTrailsDisable(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsDisable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTrailsSetup(struct UParticleSystem* ParticleSystemReference, struct UNiagaraSystem* NiagaraSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, struct UFXSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsSetup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTrailsNotify(bool bActive); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimTrailsNotify // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerPawn_Generic(int32_t EntryPoint); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.ExecuteUbergraph_PlayerPawn_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void SwingLeft2__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRight2__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight2__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimNotify_End__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_End__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimNotify_Begin__DelegateSignature(bool bActive); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.AnimNotify_Begin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeftEnd__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeftEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeft__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingLeft__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRightEnd__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRightEnd__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRight__DelegateSignature(); // Function PlayerPawn_Generic.PlayerPawn_Generic_C.SwingRight__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

