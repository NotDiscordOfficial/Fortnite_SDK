// BlueprintGeneratedClass B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C
// Size: 0x1301 (Inherited: 0x1198)
struct AB_Ranged_Generic_Athena_Deprecated_C : AFortWeaponRanged {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1198(0x08)
	struct UParticleSystemComponent* Muzzle1P(Empty); // 0x11a0(0x08)
	struct UStaticMeshComponent* IronSightsMesh1P; // 0x11a8(0x08)
	struct UParticleSystemComponent* MuzzleWindParticle(Empty); // 0x11b0(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x11b8(0x08)
	struct UParticleSystemComponent* Shells(empty); // 0x11c0(0x08)
	struct UStaticMeshComponent* ScopeMesh1P; // 0x11c8(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x11d0(0x08)
	float AnimateScopePostProcess_DownSightPostProcessAmount_8E980769412DEF67B9B63CAE644DA93B; // 0x11d8(0x04)
	enum class ETimelineDirection AnimateScopePostProcess__Direction_8E980769412DEF67B9B63CAE644DA93B; // 0x11dc(0x01)
	char pad_11DD[0x3]; // 0x11dd(0x03)
	struct UTimelineComponent* AnimateScopePostProcess; // 0x11e0(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x11e8(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x11f0(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x11f8(0x08)
	bool UseDestroyEffect; // 0x1200(0x01)
	bool RandomMuzzleFlashScaling; // 0x1201(0x01)
	bool Use Reload Particles; // 0x1202(0x01)
	char pad_1203[0x5]; // 0x1203(0x05)
	struct UParticleSystem* Reload_ParticleSystem; // 0x1208(0x08)
	float LastPlayFXTime; // 0x1210(0x04)
	float MinPlayFXTime; // 0x1214(0x04)
	bool UseShellsOnFire?; // 0x1218(0x01)
	bool UseShellsOnReload?; // 0x1219(0x01)
	bool UseShellsOnPump?; // 0x121a(0x01)
	char pad_121B[0x5]; // 0x121b(0x05)
	struct UParticleSystem* ShellsParticleSystemTemplate; // 0x1220(0x08)
	struct FName ReloadSocketName; // 0x1228(0x08)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1230(0x10)
	bool Scope - Render Enemies To Custom Depth Buffer; // 0x1240(0x01)
	char pad_1241[0x3]; // 0x1241(0x03)
	struct FName Shells Socket Name; // 0x1244(0x08)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x124c(0x01)
	char pad_124D[0x3]; // 0x124d(0x03)
	float Shells Spawn Rate Scale; // 0x1250(0x04)
	struct FVector ShellsRotationRate; // 0x1254(0x0c)
	struct FVector Shells Velocity; // 0x1260(0x0c)
	struct FVector Shells Gravity; // 0x126c(0x0c)
	float Shells Lifetime; // 0x1278(0x04)
	struct FVector Shells Size; // 0x127c(0x0c)
	float Shells Time Dilation; // 0x1288(0x04)
	float Target Scope Vignette Blur Screen Percentage; // 0x128c(0x04)
	float Scope Camera Offset Amount; // 0x1290(0x04)
	bool SmallShells; // 0x1294(0x01)
	bool MediumShells; // 0x1295(0x01)
	bool LargeShells; // 0x1296(0x01)
	bool ShotgunShells; // 0x1297(0x01)
	bool EnergyShells; // 0x1298(0x01)
	char pad_1299[0x3]; // 0x1299(0x03)
	float Inherit Parent Velocity; // 0x129c(0x04)
	float Cylindrical Radius; // 0x12a0(0x04)
	float Cylindrical Height; // 0x12a4(0x04)
	bool DebugShellsSocket?; // 0x12a8(0x01)
	char pad_12A9[0x7]; // 0x12a9(0x07)
	struct USoundBase* Sound_ScopeZoomIn; // 0x12b0(0x08)
	struct USoundBase* Sound_ScopeZoomOut; // 0x12b8(0x08)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x12c0(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x12c8(0x20)
	bool Is Wind Enabled; // 0x12e8(0x01)
	char pad_12E9[0x7]; // 0x12e9(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x12f0(0x08)
	struct UParticleSystem* MuzzleParticleSystem1P; // 0x12f8(0x08)
	bool ShouldHideReticleAfterDelay; // 0x1300(0x01)

	void GetScopeParameters(struct UStaticMeshComponent* ScopeComponent, struct FVector2D DepthOfFieldVignetteRange, float WeaponSightsCameraOffset); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.GetScopeParameters // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePawnAndWeaponVisFor1PTargeting(bool IsTargeting); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HandlePawnAndWeaponVisFor1PTargeting // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowReticle(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideReticle(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideIronSightsMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideIronSightsMesh // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateMuzzleFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.DeactivateMuzzleFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateReloadSmokeFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateReloadSmokeFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateShellsFX(bool Bool); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateShellsFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupShellFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateShellEmittersFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.UpdateShellEmittersFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.Muzzle Flash FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWpnRarity(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddRandomScale(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.AddRandomScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimateScopePostProcess__FinishedFunc(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.AnimateScopePostProcess__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void AnimateScopePostProcess__UpdateFunc(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.AnimateScopePostProcess__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_43F549264BB135D3D385D4BB5846412A(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_43F549264BB135D3D385D4BB5846412A // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_109F12F046377B483CA7FF92A795CBD2(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_109F12F046377B483CA7FF92A795CBD2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_65280D504DA982E453E39BA22D9D1643(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_65280D504DA982E453E39BA22D9D1643 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_351A9D71483BD9CF417705946595CB08(struct UObject* Loaded); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnLoaded_351A9D71483BD9CF417705946595CB08 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStopWeaponFireFX(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void InitializeScopeVariables(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.InitializeScopeVariables // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ShellsON_(onPump)(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShellsON_(onPump) // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEquippedWeaponDestory(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HideWeaponMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowWeaponMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideGunMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideGunMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowGunMesh(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowGunMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideWeapon(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowWeapon(); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Ranged_Generic_Athena_Deprecated(int32_t EntryPoint); // Function B_Ranged_Generic_Athena_Deprecated.B_Ranged_Generic_Athena_Deprecated_C.ExecuteUbergraph_B_Ranged_Generic_Athena_Deprecated // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

