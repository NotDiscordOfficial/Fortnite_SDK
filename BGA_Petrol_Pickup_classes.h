// BlueprintGeneratedClass BGA_Petrol_Pickup.BGA_Petrol_Pickup_C
// Size: 0xdd1 (Inherited: 0xa70)
struct ABGA_Petrol_Pickup_C : ABGA_HeldObject_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UNiagaraComponent* NS_Object_FloatingInWater; // 0xa78(0x08)
	struct UFortItemEntryComponent* FortItemEntry; // 0xa80(0x08)
	struct UStaticMeshComponent* PetrolCan; // 0xa88(0x08)
	struct USphereComponent* Sphere; // 0xa90(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xa98(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xaa0(0x08)
	bool ShouldExplode; // 0xaa8(0x01)
	char pad_AA9[0x7]; // 0xaa9(0x07)
	struct AFortPawn* ExplodeInstigator; // 0xab0(0x08)
	struct TArray<struct AActor*> TargetedActors; // 0xab8(0x10)
	struct FGameplayTag GC_Explode; // 0xac8(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0xad0(0x10)
	struct FScalableFloat SpawnedProjectileMinSpeed; // 0xae0(0x28)
	struct FScalableFloat SpawnedProjectileMaxSpeed; // 0xb08(0x28)
	struct FScalableFloat ConeHalfAngleInDegrees; // 0xb30(0x28)
	struct ABuildingGameplayActor* CurieBGAtoSpawn; // 0xb58(0x08)
	struct AFortProjectileBase* CurieFireballsToSpawn; // 0xb60(0x08)
	struct FScalableFloat FireBallsToSpawn; // 0xb68(0x28)
	struct UFortWorldItemDefinition* WeaponItemDefinition; // 0xb90(0x08)
	struct AFortPickup* WeaponPickupToGrant; // 0xb98(0x08)
	struct FHitResult LastHit; // 0xba0(0x88)
	struct FTimerHandle FuseTimerHandle; // 0xc28(0x08)
	struct FScalableFloat FuseMinDuration; // 0xc30(0x28)
	struct FScalableFloat FuseMaxDuration; // 0xc58(0x28)
	struct FGuid HeldItemGUID; // 0xc80(0x10)
	struct TScriptInterface<None> HeldItemInventoryInterface; // 0xc90(0x10)
	bool IsAttachedToWeapon; // 0xca0(0x01)
	bool Dropped; // 0xca1(0x01)
	char pad_CA2[0x2]; // 0xca2(0x02)
	struct FGameplayTag GC_OnFire; // 0xca4(0x08)
	char pad_CAC[0x4]; // 0xcac(0x04)
	struct FScalableFloat ExplosionRadius; // 0xcb0(0x28)
	struct FScalableFloat VehicleDamage; // 0xcd8(0x28)
	struct AFortWeapon* WeaponAttachedTo; // 0xd00(0x08)
	struct FGameplayTag GC_Refuel; // 0xd08(0x08)
	struct TArray<enum class EObjectTypeQuery> SpawnCollisionCheck_ObjectTypes; // 0xd10(0x10)
	float Max_Spawn_Z; // 0xd20(0x04)
	bool SpawnCollisionBlocked; // 0xd24(0x01)
	char pad_D25[0x3]; // 0xd25(0x03)
	struct FVector VelocityAfterVehicleOverlap; // 0xd28(0x0c)
	char pad_D34[0x4]; // 0xd34(0x04)
	struct FScalableFloat HotfixExplodeVehicleImpulse; // 0xd38(0x28)
	struct FScalableFloat HotfixExplodeSpinThrust; // 0xd60(0x28)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0xd88(0x08)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0xd90(0x08)
	struct UGameplayEffect* GE_ExplodeBuildingDamage; // 0xd98(0x08)
	bool FuseLit; // 0xda0(0x01)
	char pad_DA1[0x3]; // 0xda1(0x03)
	float MinSpeedOfNoStickBounce; // 0xda4(0x04)
	struct USoundBase* FailedInteractSound; // 0xda8(0x08)
	struct FGameplayTagContainer Tag_FailedInteract_InventoryIsFull; // 0xdb0(0x20)
	bool InWater; // 0xdd0(0x01)

	void GetGameplayEffectClassForTarget(struct AActor* Target, struct UGameplayEffect* GE Class); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.GetGameplayEffectClassForTarget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalcVehicleImpulse(struct AActor* Vehicle, float Magnitude, struct FVector Vector); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.CalcVehicleImpulse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_LastHit(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_LastHit // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_ShouldExplode(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnRep_ShouldExplode // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SpawnCurieFireballs(struct AFortPawn* ExplodeInstigator); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnCurieFireballs // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void SetFuseAndDrop(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetFuseAndDrop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnFireBallsExplodeAndDie(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SpawnFireBallsExplodeAndDie // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExplodeAndDie(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExplodeAndDie // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetHeldItemInfo(struct TScriptInterface<None> InventoryInterface, struct FGuid Guid, struct AFortWeapon* WeaponAttachedTo); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.SetHeldItemInfo // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DropHeldItem(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.DropHeldItem // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndDestroy(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.HideAndDestroy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void (ServerOnly)HideAndDestroy(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.(ServerOnly)HideAndDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Refuel(int32_t FuelToAdd); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.Refuel // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnCurieElementInteract_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle InteractParamsHandle); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteract_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnCurieElementInteractBegun_BP(struct FCurieContainerHandle CurieContainerHandle, struct FGameplayTag ElementTag, struct FCurieInteractParamsHandle InteractParamsHandle); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnCurieElementInteractBegun_BP // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnExitWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsLastBody); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_2_WaterInteractionOnExitWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Petrol_Pickup(int32_t EntryPoint); // Function BGA_Petrol_Pickup.BGA_Petrol_Pickup_C.ExecuteUbergraph_BGA_Petrol_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

