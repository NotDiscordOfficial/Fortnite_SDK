// BlueprintGeneratedClass B_Melee_Generic.B_Melee_Generic_C
// Size: 0xf38 (Inherited: 0xe00)
struct AB_Melee_Generic_C : AFortWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	struct UParticleSystemComponent* IdleFX; // 0xe08(0x08)
	struct UParticleSystemComponent* SwingFX; // 0xe10(0x08)
	struct UParticleSystemComponent* AnimTrial; // 0xe18(0x08)
	struct UParticleSystemComponent* MeleeHeavy_PSC; // 0xe20(0x08)
	struct UParticleSystem* IdleFX Template; // 0xe28(0x08)
	bool Has_Idle_Effect; // 0xe30(0x01)
	char pad_E31[0x7]; // 0xe31(0x07)
	struct UParticleSystem* Idle_Effect; // 0xe38(0x08)
	struct UParticleSystemComponent* Idle Effect Component; // 0xe40(0x08)
	struct FName IdleFXAttachSocket; // 0xe48(0x08)
	enum class EAttachmentRule IdleFX Location Rule; // 0xe50(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0xe51(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0xe52(0x01)
	char pad_E53[0x5]; // 0xe53(0x05)
	struct UParticleSystem* Swing FX Template; // 0xe58(0x08)
	bool Has_Swing_Effect; // 0xe60(0x01)
	char pad_E61[0x7]; // 0xe61(0x07)
	struct UParticleSystem* Swing_Effect; // 0xe68(0x08)
	struct UParticleSystemComponent* Swing Effect Component; // 0xe70(0x08)
	struct FName SwingFXSocket; // 0xe78(0x08)
	enum class EAttachmentRule SwingFX Location Rule; // 0xe80(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0xe81(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0xe82(0x01)
	bool UseAnimTrails; // 0xe83(0x01)
	char pad_E84[0x4]; // 0xe84(0x04)
	struct UParticleSystem* Anim Trail Template; // 0xe88(0x08)
	struct FName OverrideFirstSocketName; // 0xe90(0x08)
	struct FName OverrideSecond Socket Name; // 0xe98(0x08)
	struct UParticleSystem* AnimTrailsParticles; // 0xea0(0x08)
	struct UParticleSystemComponent* AnimTrail_PSC; // 0xea8(0x08)
	struct FName FirstSocketName; // 0xeb0(0x08)
	struct FName Second Socket Name; // 0xeb8(0x08)
	float Width; // 0xec0(0x04)
	char pad_EC4[0x4]; // 0xec4(0x04)
	struct UParticleSystem* MeleeHeavy_ParticleSystem; // 0xec8(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0xed0(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0xed8(0x08)
	bool UseDestroyEffect; // 0xee0(0x01)
	char pad_EE1[0x7]; // 0xee1(0x07)
	struct TArray<struct UAnimMontage*> PokeAnimations; // 0xee8(0x10)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0xef8(0x08)
	struct USoundBase* MeleeHeavy_Sound; // 0xf00(0x08)
	struct FGameplayTag Melee Heavy Launch Gameplay Cue Tag Override; // 0xf08(0x08)
	struct FGameplayTag Melee Heavy Impact Gameplay Cue Tag Override; // 0xf10(0x08)
	struct FVector Effects_Color_Level; // 0xf18(0x0c)
	char pad_F24[0x4]; // 0xf24(0x04)
	struct USoundAttenuation* MeleeHeavySoundAttenuationSettings; // 0xf28(0x08)
	struct USoundConcurrency* MeleeHeavySoundConcurrencySettings; // 0xf30(0x08)

	void Melee_Effect_Color(struct FVector Melee_Color_Set); // Function B_Melee_Generic.B_Melee_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayCQCPickaxeEnemyAudio(struct FHitResult Hit Result); // Function B_Melee_Generic.B_Melee_Generic_C.PlayCQCPickaxeEnemyAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Function B_Melee_Generic.B_Melee_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWpnRarity(); // Function B_Melee_Generic.B_Melee_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Melee_Generic.B_Melee_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_CB594210420542B302428F8181D85E48(struct UObject* Loaded); // Function B_Melee_Generic.B_Melee_Generic_C.OnLoaded_CB594210420542B302428F8181D85E48 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight(bool First Right); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft(bool First Left); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FootStepLeft(); // Function B_Melee_Generic.B_Melee_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FootStepRight(); // Function B_Melee_Generic.B_Melee_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight_End(); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft_End(); // Function B_Melee_Generic.B_Melee_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Melee_Generic.B_Melee_Generic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Melee_Generic.B_Melee_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayRClickImpacts(); // Function B_Melee_Generic.B_Melee_Generic_C.PlayRClickImpacts // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayImpactFX(struct FHitResult HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Melee_Generic.B_Melee_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnEquippedWeaponDestory(); // Function B_Melee_Generic.B_Melee_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Melee_Generic.B_Melee_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponDetached(); // Function B_Melee_Generic.B_Melee_Generic_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Melee_Generic(int32_t EntryPoint); // Function B_Melee_Generic.B_Melee_Generic_C.ExecuteUbergraph_B_Melee_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

