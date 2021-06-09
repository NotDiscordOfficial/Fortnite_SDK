// BlueprintGeneratedClass BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C
// Size: 0xd08 (Inherited: 0xa70)
struct ABGA_FireExtinguisher_Pickup_C : ABGA_HeldObject_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UAudioComponent* Audio_ReleaseSmoke; // 0xa78(0x08)
	struct USphereComponent* PostProcessParentShape; // 0xa80(0x08)
	struct UStaticMeshComponent* SmokeScreen_Sphere; // 0xa88(0x08)
	struct UStaticMeshComponent* SmokeVolumeMesh; // 0xa90(0x08)
	struct UParticleSystemComponent* P_Athena_SmokeGrenade_OuterSmoke_01; // 0xa98(0x08)
	struct UFortItemEntryComponent* FortItemEntry; // 0xaa0(0x08)
	struct USphereComponent* Sphere; // 0xaa8(0x08)
	struct UStaticMeshComponent* FireExtinguisher; // 0xab0(0x08)
	float FadeSmokeTL_Float_CF905F0F47270980030E72B404D48CF0; // 0xab8(0x04)
	enum class ETimelineDirection FadeSmokeTL__Direction_CF905F0F47270980030E72B404D48CF0; // 0xabc(0x01)
	char pad_ABD[0x3]; // 0xabd(0x03)
	struct UTimelineComponent* FadeSmokeTL; // 0xac0(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xac8(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xad0(0x08)
	struct AFortPawn* ExplodeInstigator; // 0xad8(0x08)
	struct FHitResult LastHit; // 0xae0(0x88)
	bool FuseLit; // 0xb68(0x01)
	bool IsAttachedToWeapon; // 0xb69(0x01)
	bool Dropped; // 0xb6a(0x01)
	bool ShouldExplode; // 0xb6b(0x01)
	struct FGameplayTag GC_Smoking; // 0xb6c(0x08)
	char pad_B74[0x4]; // 0xb74(0x04)
	struct FScalableFloat ExplosionRadius; // 0xb78(0x28)
	struct TArray<struct AActor*> TargetedActors; // 0xba0(0x10)
	struct TArray<struct UGameplayEffect*> GE_ExplodeDamage; // 0xbb0(0x10)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0xbc0(0x10)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0xbd0(0x08)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0xbd8(0x08)
	struct AFortWeapon* WeaponAttachedTo; // 0xbe0(0x08)
	float MinSpeedOfNoStickBounce; // 0xbe8(0x04)
	char pad_BEC[0x4]; // 0xbec(0x04)
	struct UFortWorldItemDefinition* WeaponItemDefinition; // 0xbf0(0x08)
	bool HealthIsZero; // 0xbf8(0x01)
	bool bShouldDie; // 0xbf9(0x01)
	char pad_BFA[0x2]; // 0xbfa(0x02)
	struct FGameplayTag ExplosionCUE; // 0xbfc(0x08)
	struct FGameplayTag ExplosionCUE_Water; // 0xc04(0x08)
	char pad_C0C[0x4]; // 0xc0c(0x04)
	struct FScalableFloat Radius; // 0xc10(0x28)
	struct FVector HitLocation; // 0xc38(0x0c)
	float WaterTraceRadius; // 0xc44(0x04)
	struct TArray<enum class EObjectTypeQuery> WaterTraceObjectTypes; // 0xc48(0x10)
	struct AFortPlayerController* LastDamageInstigator; // 0xc58(0x08)
	float LandscapeExtinguishRadius; // 0xc60(0x04)
	float FuseDuration; // 0xc64(0x04)
	struct FGameplayTagContainer Tag_FailedInteract_InventoryIsFull; // 0xc68(0x20)
	struct USoundBase* FailedInteractSound; // 0xc88(0x08)
	bool CurieActivated; // 0xc90(0x01)
	char pad_C91[0x7]; // 0xc91(0x07)
	struct TScriptInterface<None> HeldItemInventoryInterface; // 0xc98(0x10)
	struct FGuid HeldItemGUID; // 0xca8(0x10)
	struct UParticleSystem* EmitterOnDamage; // 0xcb8(0x08)
	float EmitterScale; // 0xcc0(0x04)
	char pad_CC4[0x4]; // 0xcc4(0x04)
	struct USoundBase* PreExplodeSound; // 0xcc8(0x08)
	struct FTimerHandle FuseTimerHandle; // 0xcd0(0x08)
	float SmokeLifespan; // 0xcd8(0x04)
	float SmokeDelayBeforeFadeIn; // 0xcdc(0x04)
	float SmokeFadeOutTime; // 0xce0(0x04)
	char pad_CE4[0x4]; // 0xce4(0x04)
	struct UMaterialInstanceDynamic* SmokeVolumeMeshMID; // 0xce8(0x08)
	struct UMaterialInstanceDynamic* SmokeScreenMID; // 0xcf0(0x08)
	float SmokeFadeValue; // 0xcf8(0x04)
	float SmokeFadeInTime; // 0xcfc(0x04)
	float SmokeRadius; // 0xd00(0x04)
	float AfterSmokeDelay; // 0xd04(0x04)

	void OnRep_LastHit(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.OnRep_LastHit // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ApplyWaterInRadiusIfCurieEnabled(struct FHitResult HitResult); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.ApplyWaterInRadiusIfCurieEnabled // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void UserConstructionScript(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FadeSmokeTL__FinishedFunc(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.FadeSmokeTL__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FadeSmokeTL__UpdateFunc(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.FadeSmokeTL__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void (ServerOnly) HideAndDestroy(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.(ServerOnly) HideAndDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndDestroy(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.HideAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetFuseAndDrop(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.SetFuseAndDrop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DropHeldItem(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.DropHeldItem // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExplodeAndDie(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.ExplodeAndDie // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void EventDestroyed(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.EventDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExplosionTrace(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.ExplosionTrace // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AllowInteractDelay(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.AllowInteractDelay // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHeldItemInfo(struct TScriptInterface<None> InventoryInterface, struct FGuid Guid, struct AFortWeapon* WeaponAttachedTo); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.SetHeldItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SplashWater(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.SplashWater // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SmokeFadeOut(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.SmokeFadeOut // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SmokeFadeIn(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.SmokeFadeIn // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AfterSmoke(); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.AfterSmoke // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_FireExtinguisher_Pickup(int32_t EntryPoint); // Function BGA_FireExtinguisher_Pickup.BGA_FireExtinguisher_Pickup_C.ExecuteUbergraph_BGA_FireExtinguisher_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

