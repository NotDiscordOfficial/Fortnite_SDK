// BlueprintGeneratedClass BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C
// Size: 0xc64 (Inherited: 0x898)
struct ABGA_AppleSun_Apple_Athena_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UBoxComponent* PlayerDetector; // 0x8a0(0x08)
	struct UAudioComponent* Applesun_Activate; // 0x8a8(0x08)
	struct UAudioComponent* AppleSun_Warning_Loop_01; // 0x8b0(0x08)
	struct UFortLinkToActorComponent* FortLinkToActor; // 0x8b8(0x08)
	struct UBoxComponent* SidesPawnBlocker; // 0x8c0(0x08)
	struct UStaticMeshComponent* Pad; // 0x8c8(0x08)
	struct UBoxComponent* Box; // 0x8d0(0x08)
	struct UParticleSystemComponent* P_AppleSun_Spawn; // 0x8d8(0x08)
	struct UParticleSystemComponent* P_AppleSun_DespawnTell; // 0x8e0(0x08)
	float BeginDeflate_NewTrack_0_E511D36F4D2E46D8AE33548AA66A76B4; // 0x8e8(0x04)
	enum class ETimelineDirection BeginDeflate__Direction_E511D36F4D2E46D8AE33548AA66A76B4; // 0x8ec(0x01)
	char pad_8ED[0x3]; // 0x8ed(0x03)
	struct UTimelineComponent* BeginDeflate; // 0x8f0(0x08)
	struct FVector Destroy_Scale_A5AFC0D0430E50F432FB2FB260534172; // 0x8f8(0x0c)
	float Destroy_Deflate_A5AFC0D0430E50F432FB2FB260534172; // 0x904(0x04)
	enum class ETimelineDirection Destroy__Direction_A5AFC0D0430E50F432FB2FB260534172; // 0x908(0x01)
	char pad_909[0x7]; // 0x909(0x07)
	struct UTimelineComponent* Destroy; // 0x910(0x08)
	struct FScalableFloat GrowthStart; // 0x918(0x28)
	bool OverlapLaunchesActivated; // 0x940(0x01)
	char pad_941[0x7]; // 0x941(0x07)
	struct UCurveFloat* LaunchCurve; // 0x948(0x08)
	struct FTimerHandle LifespanTimer; // 0x950(0x08)
	struct FTimerHandle TimeoutTellTimer; // 0x958(0x08)
	struct UCurveFloat* LaunchAngleWeight; // 0x960(0x08)
	struct FVector StartScale; // 0x968(0x0c)
	struct FGameplayTag SpawnFeedbackGC; // 0x974(0x08)
	struct FGameplayTag DeathFeedbackGC; // 0x97c(0x08)
	char pad_984[0x4]; // 0x984(0x04)
	struct FGameplayTagContainer T_Quest_AppleSun_Use; // 0x988(0x20)
	struct FVector WaterLocation; // 0x9a8(0x0c)
	struct FVector BounceLocation; // 0x9b4(0x0c)
	struct UAudioComponent* NewVar_1; // 0x9c0(0x08)
	struct FScalableFloat GrowthEnd; // 0x9c8(0x28)
	struct FScalableFloat MinLaunch; // 0x9f0(0x28)
	struct FScalableFloat MaxLaunch; // 0xa18(0x28)
	struct FScalableFloat VehicleLaunchMultiplierXY; // 0xa40(0x28)
	struct FScalableFloat VehicleLaunchMultiplierZ; // 0xa68(0x28)
	struct FScalableFloat ProjectileLaunchMultiplierXY; // 0xa90(0x28)
	struct FScalableFloat ProjectileLaunchMultiplierZ; // 0xab8(0x28)
	struct FScalableFloat Lifespan_; // 0xae0(0x28)
	struct FScalableFloat TimeoutTellDuration_; // 0xb08(0x28)
	struct FScalableFloat HorizontalLaunch; // 0xb30(0x28)
	float MinNonPawnVelocity; // 0xb58(0x04)
	float MaxNonPawnVelocity; // 0xb5c(0x04)
	struct AActor* LinkedActor; // 0xb60(0x08)
	struct TMap<struct AFortPawn*, float> TrackedPlayers; // 0xb68(0x50)
	struct FGameplayTagContainer TC_Crashpad+; // 0xbb8(0x20)
	struct FScalableFloat MinLaunch_Crashpad+; // 0xbd8(0x28)
	struct FScalableFloat MaxLaunch_Crashpad+; // 0xc00(0x28)
	bool HasLifespan; // 0xc28(0x01)
	bool IsWorldPlaced; // 0xc29(0x01)
	bool UsesCollisionTimer; // 0xc2a(0x01)
	bool DestroyByShark; // 0xc2b(0x01)
	struct FGameplayTag Tag_BuildingPhysics; // 0xc2c(0x08)
	char pad_C34[0x4]; // 0xc34(0x04)
	struct FScalableFloat Row_PhysicsObjectImpulseMult; // 0xc38(0x28)
	float PhysicsObjectMassMultiplier; // 0xc60(0x04)

	struct FVector Get Launch Reference Vector(struct ACharacter* Fort Pawn); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Get Launch Reference Vector // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckForSpyPerk(bool HasPerk); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CheckForSpyPerk // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UserConstructionScript(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BeginDeflate__FinishedFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void BeginDeflate__UpdateFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BeginDeflate__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void Destroy__FinishedFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Destroy__UpdateFunc(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.Destroy__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BounceMulticast(struct FVector Position, float BounceIntensity); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BounceMulticast // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DespawnTell(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DespawnTell // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__Box_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void DestroyPad(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.DestroyPad // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__FortLinkToActor_K2Node_ComponentBoundEvent_0_OnLinkedActorDestroyed__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.BndEvt__PlayerDetector_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void CatchObjectsInside(); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.CatchObjectsInside // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void LaunchBuldingActors(struct AActor* Actor); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.LaunchBuldingActors // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_AppleSun_Apple_Athena(int32_t EntryPoint); // Function BGA_AppleSun_Apple_Athena.BGA_AppleSun_Apple_Athena_C.ExecuteUbergraph_BGA_AppleSun_Apple_Athena // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

