// BlueprintGeneratedClass B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C
// Size: 0xf20 (Inherited: 0xeb0)
struct AB_Athena_Pickaxe_Generic_C : AFortWeaponPickaxeAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xeb0(0x08)
	struct UParticleSystemComponent* MeleeHeavy_PSC; // 0xeb8(0x08)
	enum class EAttachmentRule IdleFX Location Rule; // 0xec0(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0xec1(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0xec2(0x01)
	enum class EAttachmentRule SwingFX Location Rule; // 0xec3(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0xec4(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0xec5(0x01)
	char pad_EC6[0x2]; // 0xec6(0x02)
	struct UParticleSystem* MeleeHeavy_ParticleSystem; // 0xec8(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0xed0(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0xed8(0x08)
	bool UseDestroyEffect; // 0xee0(0x01)
	char pad_EE1[0x7]; // 0xee1(0x07)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0xee8(0x08)
	struct FVector Effects_Color_Level; // 0xef0(0x0c)
	bool Equipped; // 0xefc(0x01)
	bool bEquipPendingInstigator; // 0xefd(0x01)
	bool UseTimeofDayControl; // 0xefe(0x01)
	bool Swing_Right?; // 0xeff(0x01)
	struct UFXSystemComponent* Impact FX; // 0xf00(0x08)
	struct FRotator Left Swing Rotation; // 0xf08(0x0c)
	struct FRotator Right Swing Rotation; // 0xf14(0x0c)

	void Melee_Effect_Color(struct FVector Melee_Color_Set); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Melee_Effect_Color // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Binding Time of Day Control(bool F)); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Binding Time of Day Control // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnbindSwingAnimTrailEvents(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UnbindSwingAnimTrailEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BindSwingAnimTrailEvents(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.BindSwingAnimTrailEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayCQCPickaxeEnemyAudio(struct FHitResult Hit Result); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayCQCPickaxeEnemyAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetActiveAlterationIdleParticles(bool Active, bool Reset); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWpnRarity(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStatChanged_F171C56748FEA3E19F93088E968D3E21(struct FName StatName, int32_t StatValue); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnStatChanged_F171C56748FEA3E19F93088E968D3E21 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2(struct UObject* Loaded); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnLoaded_5BC5DA3B4E308BE7A188FBB2571333D2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight(bool First Right); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft(bool First Left); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FootStepLeft(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepLeft // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FootStepRight(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.FootStepRight // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingRight_End(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingRight_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MeleeSwingLeft_End(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.MeleeSwingLeft_End // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayRClickImpacts(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.PlayRClickImpacts // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEquippedWeaponDestory(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponDetached(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitWeaponCosmetics(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInitWeaponCosmetics // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleKillWatch(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.HandleKillWatch // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateBasedOnKills(int32_t Watched Kills); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.UpdateBasedOnKills // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Anim Trails Notify(bool bActive); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Notify // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Anim Trails Disable(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.Anim Trails Disable // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRight(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRight // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeft(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeft // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingRightEnd(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingRightEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeftEnd(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.SwingLeftEnd // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInstigatorSet(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnInstigatorSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void TODCheck(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.TODCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayImpactFX(struct FHitResult HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Athena_Pickaxe_Generic(int32_t EntryPoint); // Function B_Athena_Pickaxe_Generic.B_Athena_Pickaxe_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

