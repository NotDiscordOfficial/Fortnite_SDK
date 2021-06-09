// BlueprintGeneratedClass BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C
// Size: 0xed0 (Inherited: 0xa70)
struct ABGA_ValetMod_OffRoadTire_Pickup_C : ABGA_HeldObject_Parent_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa70(0x08)
	struct UCapsuleComponent* JumpCollision; // 0xa78(0x08)
	struct UNiagaraComponent* NS_ValetMod_TireHitGround; // 0xa80(0x08)
	struct USphereComponent* Sphere; // 0xa88(0x08)
	struct UFortItemEntryComponent* FortItemEntry; // 0xa90(0x08)
	struct UStaticMeshComponent* Tire; // 0xa98(0x08)
	struct AFortPlayerPawn* PlayerPawn; // 0xaa0(0x08)
	struct AFortPlayerControllerAthena* PlayerController; // 0xaa8(0x08)
	bool ShouldExplode; // 0xab0(0x01)
	char pad_AB1[0x7]; // 0xab1(0x07)
	struct TArray<struct UGameplayEffect*> ExplodeDamageGE; // 0xab8(0x10)
	struct AFortPawn* ExplodeInstigator; // 0xac8(0x08)
	struct TArray<struct AActor*> TargetedActors; // 0xad0(0x10)
	struct UGameplayEffect* GE_Explode; // 0xae0(0x08)
	struct FGameplayTag GC_Explode; // 0xae8(0x08)
	struct TArray<enum class EObjectTypeQuery> ObjectArray; // 0xaf0(0x10)
	struct FScalableFloat SpawnedProjectileMinSpeed; // 0xb00(0x28)
	struct FScalableFloat SpawnedProjectileMaxSpeed; // 0xb28(0x28)
	struct FScalableFloat ConeHalfAngleInDegrees; // 0xb50(0x28)
	struct ABuildingGameplayActor* CurieBGAtoSpawn; // 0xb78(0x08)
	struct AFortProjectileBase* CurieFireballsToSpawn; // 0xb80(0x08)
	struct FScalableFloat FireBallsToSpawn; // 0xb88(0x28)
	struct UFortWorldItemDefinition* WeaponItemDefinition; // 0xbb0(0x08)
	struct AFortPickup* WeaponPickupToGrant; // 0xbb8(0x08)
	struct FHitResult LastHit; // 0xbc0(0x88)
	struct FTimerHandle FuseTimerHandle; // 0xc48(0x08)
	struct FScalableFloat FuseMinDuration; // 0xc50(0x28)
	struct FScalableFloat FuseMaxDuration; // 0xc78(0x28)
	struct FGuid HeldItemGUID; // 0xca0(0x10)
	struct TScriptInterface<None> HeldItemInventoryInterface; // 0xcb0(0x10)
	bool IsAttachedToWeapon; // 0xcc0(0x01)
	bool Dropped; // 0xcc1(0x01)
	char pad_CC2[0x2]; // 0xcc2(0x02)
	struct FGameplayTag GC_OnFire; // 0xcc4(0x08)
	char pad_CCC[0x4]; // 0xccc(0x04)
	struct FScalableFloat ExplosionRadius; // 0xcd0(0x28)
	struct FScalableFloat VehicleDamage; // 0xcf8(0x28)
	struct AFortWeapon* WeaponAttachedTo; // 0xd20(0x08)
	struct FGameplayTag GC_Refuel; // 0xd28(0x08)
	struct TArray<enum class EObjectTypeQuery> SpawnCollisionCheck_ObjectTypes; // 0xd30(0x10)
	float Max_Spawn_Z; // 0xd40(0x04)
	bool SpawnCollisionBlocked; // 0xd44(0x01)
	char pad_D45[0x3]; // 0xd45(0x03)
	struct FVector VelocityAfterVehicleOverlap; // 0xd48(0x0c)
	char pad_D54[0x4]; // 0xd54(0x04)
	struct FScalableFloat HotfixVehicleImpulse; // 0xd58(0x28)
	struct FScalableFloat HotfixSpinThrust; // 0xd80(0x28)
	struct UGameplayEffect* GE_ExplodePlayerDamage; // 0xda8(0x08)
	struct UGameplayEffect* GE_ExplodeVehicleDamage; // 0xdb0(0x08)
	bool FuseLit; // 0xdb8(0x01)
	char pad_DB9[0x3]; // 0xdb9(0x03)
	float MinSpeedOfNoStickBounce; // 0xdbc(0x04)
	struct USoundBase* FailedInteractSound; // 0xdc0(0x08)
	struct FGameplayTagContainer Tag_FailedInteract_InventoryIsFull; // 0xdc8(0x20)
	struct AFortPawn* OverlapPawn; // 0xde8(0x08)
	float BounceHeight; // 0xdf0(0x04)
	float JumpHeight; // 0xdf4(0x04)
	float FinalBounceJumpHeight; // 0xdf8(0x04)
	char pad_DFC[0x4]; // 0xdfc(0x04)
	struct USoundBase* TireSound; // 0xe00(0x08)
	float Final Bounce X Vector; // 0xe08(0x04)
	float NoCeilingBounceHeight; // 0xe0c(0x04)
	struct AFortPlayerController* OverlapController; // 0xe10(0x08)
	struct UGameplayEffect* GE_PlayerLaunched; // 0xe18(0x08)
	struct UForceFeedbackEffect* LaunchForceFeedback; // 0xe20(0x08)
	float VehicleImpulseVelocityMulti; // 0xe28(0x04)
	float SpinThrust; // 0xe2c(0x04)
	struct AFortAthenaVehicle* OverlapVehicle; // 0xe30(0x08)
	struct UMaterialInstanceDynamic* TireMID; // 0xe38(0x08)
	struct FScalableFloat ShouldImpulsePlayer; // 0xe40(0x28)
	bool BBouncingProjectile; // 0xe68(0x01)
	char pad_E69[0x3]; // 0xe69(0x03)
	struct FGameplayTag GC Bounce Player; // 0xe6c(0x08)
	struct FVector JumpCollisionLocation; // 0xe74(0x0c)
	struct FGameplayTag Mod Tag to Apply; // 0xe80(0x08)
	struct FGameplayTag ModTagToApply; // 0xe88(0x08)
	struct AActor* Hit Actor; // 0xe90(0x08)
	struct UFXSystemAsset* PickupFX; // 0xe98(0x08)
	struct UFortWorldItemDefinition* TireModWID; // 0xea0(0x08)
	struct FGameplayTag GC_BounceVehicle; // 0xea8(0x08)
	struct FGameplayEffectContextHandle Context; // 0xeb0(0x18)
	struct UFXSystemAsset* FX_WaterSpash; // 0xec8(0x08)

	void SpawnPickup(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.SpawnPickup // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldApplyMod(struct AFortDagwoodVehicle* Vehicle); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ShouldApplyMod // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void PickValetTireToApply(struct AFortDagwoodVehicle* Vehicle); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.PickValetTireToApply // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_JumpCollisionLocation(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_JumpCollisionLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DebugJumpCapsule(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.DebugJumpCapsule // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void MID_Play_Animation(float StartFrame, float EndFrame); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.MID_Play_Animation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_OverlapVehicle(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_OverlapVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CeilingCheck(bool Success); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.CeilingCheck // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintOnLocalInteract(struct AFortPlayerPawn* InteractingPawn); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintOnLocalInteract // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CalcVehicleImpulse(struct AActor* Vehicle, float VelocityMultiplier, struct FVector Vector); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.CalcVehicleImpulse // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_LastHit(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_LastHit // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_ShouldExplode(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnRep_ShouldExplode // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	struct FText BlueprintGetInteractionString(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintGetInteractionString // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	bool BlueprintGetInteractionTime(struct AFortPawn* InteractingPawn, float OutInteractionTime, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintGetInteractionTime // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|Const) // @ game+0xda7c34
	void BlueprintOnInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BlueprintOnInteract // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__JumpCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__JumpCollision_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HealthChanged(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.HealthChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HideAndDestroy(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.HideAndDestroy // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LaunchVehicle(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.LaunchVehicle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventAttachedActorDestroyed(struct AActor* DestroyedActor); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.EventAttachedActorDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventAttachedBADied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.EventAttachedBADied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_0_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__JumpCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__JumpCollision_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void PlayerBounceCosmetics(); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.PlayerBounceCosmetics // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileBounceDelegate__DelegateSignature(struct FHitResult ImpactResult, struct FVector ImpactVelocity); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__FortProjectileMovement_K2Node_ComponentBoundEvent_3_OnProjectileBounceDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_4_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_ValetMod_OffRoadTire_Pickup(int32_t EntryPoint); // Function BGA_ValetMod_OffRoadTire_Pickup.BGA_ValetMod_OffRoadTire_Pickup_C.ExecuteUbergraph_BGA_ValetMod_OffRoadTire_Pickup // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

