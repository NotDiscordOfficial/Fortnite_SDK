// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// Size: 0x13c0 (Inherited: 0x1198)
struct AB_Ranged_Generic_C : AFortWeaponRanged {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x1198(0x08)
	struct UParticleSystemComponent* Reload(Empty); // 0x11a0(0x08)
	struct UStaticMeshComponent* ScopeMesh1P; // 0x11a8(0x08)
	struct UParticleSystemComponent* Muzzle(Empty); // 0x11b0(0x08)
	float AnimateScopePostProcess_DownSightPostProcessAmount_393D8BA5486879173797EF8C9B8D4642; // 0x11b8(0x04)
	enum class ETimelineDirection AnimateScopePostProcess__Direction_393D8BA5486879173797EF8C9B8D4642; // 0x11bc(0x01)
	char pad_11BD[0x3]; // 0x11bd(0x03)
	struct UTimelineComponent* AnimateScopePostProcess; // 0x11c0(0x08)
	struct UParticleSystem* MuzzleParticleSystem; // 0x11c8(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffect; // 0x11d0(0x08)
	struct UParticleSystem* WeaponDurabilityDestroyEffectIcon; // 0x11d8(0x08)
	bool UseDestroyEffect; // 0x11e0(0x01)
	bool Use Reload Particles; // 0x11e1(0x01)
	char pad_11E2[0x6]; // 0x11e2(0x06)
	struct UParticleSystem* Reload_ParticleSystem; // 0x11e8(0x08)
	float LastPlayFXTime; // 0x11f0(0x04)
	float MinPlayFXTime; // 0x11f4(0x04)
	bool UseShellsOnFire?; // 0x11f8(0x01)
	bool UseShellsOnReload?; // 0x11f9(0x01)
	bool UseShellsOnPump?; // 0x11fa(0x01)
	char pad_11FB[0x1]; // 0x11fb(0x01)
	struct FName ReloadSocketName; // 0x11fc(0x08)
	char pad_1204[0x4]; // 0x1204(0x04)
	struct TArray<struct AFortAIPawn*> Array Of Active Enemy AI; // 0x1208(0x10)
	bool Scope - Render Enemies To Custom Depth Buffer; // 0x1218(0x01)
	char pad_1219[0x3]; // 0x1219(0x03)
	struct FName Shells Socket Name; // 0x121c(0x08)
	enum class En_ShellTypes_01 ShellTypeSelect; // 0x1224(0x01)
	char pad_1225[0x3]; // 0x1225(0x03)
	float Shells Spawn Rate Scale; // 0x1228(0x04)
	struct FVector ShellsRotationRate; // 0x122c(0x0c)
	struct FVector Shells Velocity; // 0x1238(0x0c)
	struct FVector Shells Gravity; // 0x1244(0x0c)
	struct FVector Shells Size; // 0x1250(0x0c)
	float Target Scope Vignette Blur Screen Percentage; // 0x125c(0x04)
	float Scope Camera Offset Amount; // 0x1260(0x04)
	float Inherit Parent Velocity; // 0x1264(0x04)
	float Cylindrical Radius; // 0x1268(0x04)
	float Cylindrical Height; // 0x126c(0x04)
	struct FLinearColor Shell Color; // 0x1270(0x10)
	struct UNiagaraComponent* Spawned_Shells; // 0x1280(0x08)
	bool DebugShellsSocket?; // 0x1288(0x01)
	char pad_1289[0x7]; // 0x1289(0x07)
	struct USoundBase* Sound_ScopeZoomIn; // 0x1290(0x08)
	struct USoundBase* Sound_ScopeZoomOut; // 0x1298(0x08)
	struct UParticleSystemComponent* Alteration Ambient PS; // 0x12a0(0x08)
	struct FGameplayTagContainer ReticleHUDElementTags; // 0x12a8(0x20)
	bool Is Wind Enabled; // 0x12c8(0x01)
	char pad_12C9[0x7]; // 0x12c9(0x07)
	struct UParticleSystem* MuzzleWindParticleSystem; // 0x12d0(0x08)
	struct UParticleSystem* MuzzleParticleSystem1P; // 0x12d8(0x08)
	bool ShouldHideReticleAfterDelay; // 0x12e0(0x01)
	char pad_12E1[0x7]; // 0x12e1(0x07)
	struct UParticleSystemComponent* MuzzleWindParticleSpawned; // 0x12e8(0x08)
	int32_t StencilBufferValue; // 0x12f0(0x04)
	char pad_12F4[0x4]; // 0x12f4(0x04)
	struct UCurveFloat* Curve_PitchOffset; // 0x12f8(0x08)
	struct USoundBase* Sound_ScopedInLoop; // 0x1300(0x08)
	struct UAudioComponent* ScopeZoomInComp; // 0x1308(0x08)
	struct UAudioComponent* ScopedInLoopComp; // 0x1310(0x08)
	struct UAudioComponent* ScopeZoomOutComp; // 0x1318(0x08)
	float Alteration Ambient PS Max Draw Distance; // 0x1320(0x04)
	float Muzzle PS Max Draw Distance; // 0x1324(0x04)
	float Beam PS Max Draw Distance; // 0x1328(0x04)
	float Reload PS Max Draw Distance; // 0x132c(0x04)
	float Shells PS Max Draw Distance; // 0x1330(0x04)
	char pad_1334[0x4]; // 0x1334(0x04)
	struct FMulticastInlineDelegate onAimDownSightsChanged; // 0x1338(0x10)
	bool IsMuzzleNiagara; // 0x1348(0x01)
	char pad_1349[0x7]; // 0x1349(0x07)
	struct UNiagaraSystem* MuzzleNiagaraSystemInstance; // 0x1350(0x08)
	struct TSoftObjectPtr<struct UNiagaraSystem> MuzzleNiagaraSystemAsset; // 0x1358(0x28)
	struct UNiagaraComponent* MuzzleNiagaraComponentInstance; // 0x1380(0x08)
	struct TArray<struct UParticleSystemComponent*> MuzzleParticleSystemComponents; // 0x1388(0x10)
	float Muzzle_ChanceOfLargeFlash; // 0x1398(0x04)
	float Muzzle_FlashLarge_MinScale; // 0x139c(0x04)
	float Muzzle_FlashLarge_MaxScale; // 0x13a0(0x04)
	float Muzzle_FlashSmall_MinScale; // 0x13a4(0x04)
	float Muzzle_FlashSmall_MaxScale; // 0x13a8(0x04)
	char pad_13AC[0x4]; // 0x13ac(0x04)
	struct FTimerHandle ScopeEffectDelay1Handle; // 0x13b0(0x08)
	struct FTimerHandle ScopeEffectDelay2Handle; // 0x13b8(0x08)

	void PlayScopeOutAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetScopeParameters(struct UStaticMeshComponent* ScopeComponent, struct FVector2D DepthOfFieldVignetteRange, float WeaponSightsCameraOffset); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetActiveMuzzleComponents(struct TArray<struct UFXSystemComponent*> NewParam); // Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetActiveMuzzleComponent(bool NiagaraEnabled); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopScopedAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StartScopedAudio(); // Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetPostProcessParams(float InputPin); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetActiveAlterationIdleParticles(bool Active); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowReticle(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideReticle(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateOrDeactivateWindParticle(bool bNewActive); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateMuzzleFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateReloadSmokeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateReloadSmokeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ActivateShellsFX(bool Bool); // Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DeactivateShellsFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupShellFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateShellEmittersFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Muzzle Play Reload FX(enum class EFortReloadFXState Selection); // Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Muzzle Flash FX(bool Persistent Fire); // Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWpnRarity(); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddRandomScale(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AnimateScopePostProcess__FinishedFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void AnimateScopePostProcess__UpdateFunc(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_4D1409A247BFDB4C074B628406FC7A72(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_4DE6158742ED7EE528BC98A240A81632(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4DE6158742ED7EE528BC98A240A81632 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_83457BA843174AC6288682A342EBEAD9(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_5B08633343C4DA6FF40449A8A36357E4(struct UObject* Loaded); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnStopWeaponFireFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnPlayReloadFX(enum class EFortReloadFXState ReloadStage); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetTargeting(bool bNewIsTargeting); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void K2_OnUnEquip(); // Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void InitializeScopeVariables(); // Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Enemy Custom Depths(bool Enable Or Disable, int32_t StencilBufferValue); // Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInitAlteration(struct UFortAlterationItemDefinition* NewAlteration); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitCosmeticAlterations(struct FFortCosmeticModification CosmeticMod); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ShellsON_(onPump)(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump) // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnEquippedWeaponDestory(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory // (BlueprintCosmetic|Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetWeaponPierceThrough(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough // (Net|NetReliableNetServer|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetWeaponPierceThrough_ClientRep(bool Enable, int32_t TargetLimit); // Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep // (Net|NetReliableNetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HideWeaponMesh(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowWeaponMesh(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideWeapon(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowWeapon(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReverseScopePP(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetDoonceScopeSound(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnhideThirdPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayScopePP(); // Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideFirstPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AbortScopeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HideThirdPersonStuff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnhideFirstPersonStuffPart2(int32_t Which Call); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UnhideFirstPersonStuffPart1(); // Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceScopeFX(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BindFireRateChange(); // Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PitchUpOnRateOfFireChange(float NewRateOfFire); // Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShellEjectionFixOn(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Bind on Effects Quality(); // Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShellEjectionOff(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceScopeBackImmediatly(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPlayImpactFX(struct FHitResult HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, struct UFXSystemComponent* SpawnedPSC); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStartOverheated(); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void LoadNiagaraMuzzleSoftObject(); // Function B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnApplyFireModeData(struct UFortWeaponFireModeData* FireModeData); // Function B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ScopeEffectDelay2(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ScopeEffectDelay1(); // Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Ranged_Generic(int32_t EntryPoint); // Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void onAimDownSightsChanged__DelegateSignature(bool AimDownsights); // Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

