// BlueprintGeneratedClass PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C
// Size: 0x41f0 (Inherited: 0x3fb0)
struct APlayerPawn_Athena_Generic_C : APlayerPawn_Athena_Generic_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3fb0(0x08)
	struct UParticleSystemComponent* Effect_WaterInteraction_FX; // 0x3fb8(0x08)
	struct UParticleSystemComponent* AnimTrailPS; // 0x3fc0(0x08)
	bool CanSpawnDustLandFX?; // 0x3fc8(0x01)
	bool IsInWater; // 0x3fc9(0x01)
	char pad_3FCA[0x2]; // 0x3fca(0x02)
	struct FRotator RunWalkParticleRotation; // 0x3fcc(0x0c)
	int32_t WaterCounter; // 0x3fd8(0x04)
	float Tick Delta Seconds; // 0x3fdc(0x04)
	struct USoundBase* Sound_Shield_Impact; // 0x3fe0(0x08)
	struct USoundBase* Sound_Shield_Destroyed; // 0x3fe8(0x08)
	struct USoundBase* Sound_Shield_FullyCharged; // 0x3ff0(0x08)
	struct USoundBase* Sound_Shield_StartRecharge; // 0x3ff8(0x08)
	bool BodyValid; // 0x4000(0x01)
	bool BackpackValid; // 0x4001(0x01)
	bool HatValid; // 0x4002(0x01)
	bool FaceValid; // 0x4003(0x01)
	bool CharmValid; // 0x4004(0x01)
	bool HeadValid; // 0x4005(0x01)
	char pad_4006[0x2]; // 0x4006(0x02)
	struct UParticleSystem* Effect_Player_LandedDust; // 0x4008(0x08)
	struct TArray<struct UMaterialInstanceDynamic*> TempArray; // 0x4010(0x10)
	struct USceneComponent* Sound Player Hit; // 0x4020(0x08)
	struct UParticleSystem* Effect_Player_Landed_WindVector_P; // 0x4028(0x08)
	struct UUserWidget* SpeechBubbleWidgetClass; // 0x4030(0x08)
	struct FText LastSpeechText; // 0x4038(0x18)
	bool UseAnimTrailsNotifies; // 0x4050(0x01)
	char pad_4051[0x3]; // 0x4051(0x03)
	float Time when you'll be able to splash again; // 0x4054(0x04)
	struct AActor* CurrentWaterMeshActor; // 0x4058(0x08)
	struct FHitResult WaterTraceHitLocation; // 0x4060(0x88)
	struct FVector StableVelocityVector; // 0x40e8(0x0c)
	char pad_40F4[0x4]; // 0x40f4(0x04)
	struct UParticleSystem* PlayerRunTemplate_Ground; // 0x40f8(0x08)
	struct UParticleSystem* PlayerWalkTemplate_Ground; // 0x4100(0x08)
	struct UParticleSystem* PlayerRunTemplate_Water; // 0x4108(0x08)
	struct UParticleSystem* PlayerWalkTemplate_Water; // 0x4110(0x08)
	struct USkeletalMesh* Pawn Charm Skeletal Mesh; // 0x4118(0x08)
	struct UParticleSystemComponent* AnimTrailsPS_Ref; // 0x4120(0x08)
	struct UMaterialInterface* WeaponMaterialOverride; // 0x4128(0x08)
	bool TickWaterLevel; // 0x4130(0x01)
	char pad_4131[0x7]; // 0x4131(0x07)
	struct UTextureRenderTarget2D* WetnessDepthTexture; // 0x4138(0x08)
	struct UMaterialInstanceDynamic* WaterLevelMID; // 0x4140(0x08)
	struct UMaterialInstanceDynamic* WaterDecayMID; // 0x4148(0x08)
	bool Was RTT Enabled Var Set; // 0x4150(0x01)
	bool Is RTT Enabled; // 0x4151(0x01)
	char pad_4152[0x2]; // 0x4152(0x02)
	float StartingMinCapsuleShadowVis; // 0x4154(0x04)
	bool IsShielded; // 0x4158(0x01)
	char pad_4159[0x3]; // 0x4159(0x03)
	float InstigatorCheckDistanceSqrd; // 0x415c(0x04)
	float SlideDustActivateSpeed; // 0x4160(0x04)
	bool CanSpawnSlideKickupFX?; // 0x4164(0x01)
	char pad_4165[0x3]; // 0x4165(0x03)
	struct UParticleSystem* Effect_Player_ShieldActivate; // 0x4168(0x08)
	struct UParticleSystem* Effect_PLayer_ShieldBreak; // 0x4170(0x08)
	bool GhostMode; // 0x4178(0x01)
	char pad_4179[0x7]; // 0x4179(0x07)
	struct UFXSystemComponent* OverrideAnimTrail; // 0x4180(0x08)
	struct FMulticastInlineDelegate AnimNotify_Begin; // 0x4188(0x10)
	struct FMulticastInlineDelegate AnimNotify_End; // 0x4198(0x10)
	struct USoundBase* Sound_Shield_Destroyed_2D; // 0x41a8(0x08)
	struct USoundBase* Sound_Shield_Destroyed_Crit_2D; // 0x41b0(0x08)
	struct UFXSystemComponent* AnimTrailFx; // 0x41b8(0x08)
	struct FMulticastInlineDelegate PlayDamageEffect; // 0x41c0(0x10)
	struct FName Component Tag AnimTrailFX Const; // 0x41d0(0x08)
	float ReppedCapsuleExtraHalfHeight; // 0x41d8(0x04)
	float CachedCapsuleHalfHeight; // 0x41dc(0x04)
	struct FMulticastInlineDelegate OnCharacterPartsMIDInitialized; // 0x41e0(0x10)

	void Melee_Effect_Color(struct FVector Melee_Color_Set); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_CapsuleEnlarged(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnRep_CapsuleEnlarged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayShieldDestroyedSound(struct FGameplayCueParameters GameplayCueParameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayShieldDestroyedSound // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReInitFrontendPetDisplay(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReInitFrontendPetDisplay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Are the wind and water RTT passes enabled(bool NewParam); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Are the wind and water RTT passes enabled // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DisableWaterLevelTick(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.DisableWaterLevelTick // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create and Duplicate Effect Poseable Skeletal Mesh(enum class EFortCustomPartType BodyType, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*> Empty MID Array, int32_t TranslucentSortPriority, struct UPoseableMeshComponent* PoseableMesh); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Poseable Skeletal Mesh // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SlaveAMeshToTheBody(struct USkeletalMeshComponent* Mesh, struct USkeletalMeshComponent* Master); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.SlaveAMeshToTheBody // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Create and Duplicate Effect Skeletal Meshes Parent(enum class EFortCustomPartType BodyType, struct USkeletalMeshComponent* DuplicatedSkeletalMeshComponent, struct UMaterialInterface* Material to Apply, struct TArray<struct UMaterialInstanceDynamic*> Empty MID Array, int32_t TranslucentSortPriority); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Create and Duplicate Effect Skeletal Meshes Parent // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight(bool First Right); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft(bool First Left); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight_End(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft_End(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnLanded(struct FHitResult Hit); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnLanded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponEquipped(struct AFortWeapon* NewWeapon, struct AFortWeapon* PrevWeapon); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnWeaponEquipped // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void FootStepLeft(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FootStepRight(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCharacterPartsReinitialized(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsReinitialized // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier1 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.Activation.Generic.HarvestBuff.Tier2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Entered WaterVolume(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.Entered WaterVolume // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CharacterDestroyed(struct AActor* DestroyedActor); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.CharacterDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindOnDestroyed(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.BindOnDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTrailsNotify(bool bActive); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsNotify // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTrailsSetup(struct UParticleSystem* ParticleSystemReference, struct UNiagaraSystem* NiagaraSystemReference, struct FName FirstSocketName, struct FName SecondSocketName, float Width, struct UFXSystemComponent* OverrideParticleComp, struct FName OverideFirstSocketName, struct FName OverideSecondSocketName); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsSetup // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimTrailsDisable(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimTrailsDisable // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Abilities.SpookyMist.Loop(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Abilities.SpookyMist.Loop // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Shield.PotionConsumed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.PotionConsumed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Damage.Shielded(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Damage.Shielded // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Shield.Destroyed(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Destroyed // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Shield.Reapplied(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Shield.Reapplied // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GameplayCue.Loop.Shadow.Bomb(enum class EGameplayCueEvent EventType, struct FGameplayCueParameters Parameters); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.GameplayCue.Loop.Shadow.Bomb // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerPawn_Athena_Generic(int32_t EntryPoint); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.ExecuteUbergraph_PlayerPawn_Athena_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnCharacterPartsMIDInitialized__DelegateSignature(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.OnCharacterPartsMIDInitialized__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayDamageEffect__DelegateSignature(struct FGameplayTagContainer Damage Tags, struct FHitResult Hit Info, struct AFortPawn* Instigated By, struct AActor* Damage Causer); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.PlayDamageEffect__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimNotify_End__DelegateSignature(); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_End__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimNotify_Begin__DelegateSignature(bool bActive); // Function PlayerPawn_Athena_Generic.PlayerPawn_Athena_Generic_C.AnimNotify_Begin__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

