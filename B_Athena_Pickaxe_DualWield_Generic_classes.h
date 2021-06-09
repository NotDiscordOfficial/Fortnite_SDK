// BlueprintGeneratedClass B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C
// Size: 0x11cc (Inherited: 0x1140)
struct AB_Athena_Pickaxe_DualWield_Generic_C : AFortWeaponPickaxeDualWieldAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1140(0x08)
	bool Equipped; // 0x1148(0x01)
	enum class EAttachmentRule IdleFX Location Rule; // 0x1149(0x01)
	enum class EAttachmentRule Idle FX Rotation Rule; // 0x114a(0x01)
	enum class EAttachmentRule Idle FX Scale Rule; // 0x114b(0x01)
	enum class EAttachmentRule SwingFX Location Rule; // 0x114c(0x01)
	enum class EAttachmentRule Swing FX Rotation Rule; // 0x114d(0x01)
	enum class EAttachmentRule Swing FX Scale Rule; // 0x114e(0x01)
	char pad_114F[0x1]; // 0x114f(0x01)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x1150(0x08)
	struct UParticleSystem* MeleeHeavy_ParticleSystem; // 0x1158(0x08)
	struct UParticleSystemComponent* MeleeHeavy_PSC; // 0x1160(0x08)
	bool UseDestroyEffect; // 0x1168(0x01)
	char pad_1169[0x7]; // 0x1169(0x07)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x1170(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x1178(0x08)
	struct UParticleSystemComponent* Offhand Alteration Ambient PS; // 0x1180(0x08)
	bool bEquipPendingInstigator; // 0x1188(0x01)
	char pad_1189[0x3]; // 0x1189(0x03)
	struct FName Offhand Socket Name; // 0x118c(0x08)
	char pad_1194[0x4]; // 0x1194(0x04)
	struct UAnimMontage* MontageReference; // 0x1198(0x08)
	bool UseTimeofDayControl; // 0x11a0(0x01)
	char pad_11A1[0x7]; // 0x11a1(0x07)
	struct UFXSystemComponent* Impact FX; // 0x11a8(0x08)
	bool Swing Right?; // 0x11b0(0x01)
	char pad_11B1[0x3]; // 0x11b1(0x03)
	struct FRotator Left Swing Rotation; // 0x11b4(0x0c)
	struct FRotator Right Swing Rotation; // 0x11c0(0x0c)

	void Binding Time of Day Control(bool F)); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWpnRarity(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Unbind Dual Melee Swing Events(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind Dual Melee Swing Events(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Active Alteration Idle Particles(bool Active, bool Reset); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStatChanged_9F72D14C4573F491E38302B51F08A0B8(struct FName StatName, int32_t StatValue); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D(struct UObject* Loaded); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayRClickImpacts(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEquippedWeaponDestory(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponDetached(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitWeaponCosmetics(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Swing Left End(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Swing Right End(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInstigatorSet(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SwingRight_Common(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SwingLeft_Common(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Swing Left(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Swing Right(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Swing Left 2(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Swing Right 2(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Anim Trails Notify(bool bActive); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Anim Trails Disable(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayImpactFX(struct FHitResult HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void TODCheck(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleKillWatch(); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateBasedOnKills(int32_t Watched Kills); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic(int32_t EntryPoint); // Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

