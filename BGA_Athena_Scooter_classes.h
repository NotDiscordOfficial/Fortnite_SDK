// BlueprintGeneratedClass BGA_Athena_Scooter.BGA_Athena_Scooter_C
// Size: 0xb08 (Inherited: 0x898)
struct ABGA_Athena_Scooter_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x8a0(0x08)
	struct UNiagaraComponent* NS_Scooter_ProjPhysics; // 0x8a8(0x08)
	struct UParticleSystemComponent* NearDeathBlink; // 0x8b0(0x08)
	struct UParticleSystemComponent* SlowBlink; // 0x8b8(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x8c0(0x08)
	struct UBP_SurfaceTypeSoundComponent_C* BP_SurfaceTypeSoundComponent; // 0x8c8(0x08)
	struct FLinearColor Beacon Streak Color (Friendly); // 0x8d0(0x10)
	struct FLinearColor Beacon Streak Color (Enemy); // 0x8e0(0x10)
	bool IsDead?; // 0x8f0(0x01)
	char pad_8F1[0x3]; // 0x8f1(0x03)
	struct FLinearColor Beacon Core Color (Friendly); // 0x8f4(0x10)
	struct FLinearColor Beacon Core Color (Enemy); // 0x904(0x10)
	bool IsSelfStickDelayOver?; // 0x914(0x01)
	char pad_915[0x3]; // 0x915(0x03)
	float SelfStickDelay; // 0x918(0x04)
	struct FVector HitLocation; // 0x91c(0x0c)
	bool bHasStopped; // 0x928(0x01)
	char pad_929[0x7]; // 0x929(0x07)
	struct UMaterialInstance* EnemyMeshMaterial; // 0x930(0x08)
	struct UMaterialInstance* FriendlyMeshMaterial; // 0x938(0x08)
	struct FGameplayTagContainer TC_ActorTagsThatShouldExplodeOnOverlap; // 0x940(0x20)
	bool bSimulationRunning; // 0x960(0x01)
	bool StickToAllies; // 0x961(0x01)
	char pad_962[0x6]; // 0x962(0x06)
	struct TSet<struct AActor*> Ignore; // 0x968(0x50)
	struct UParticleSystemComponent* PulsingFX; // 0x9b8(0x08)
	bool HasMark; // 0x9c0(0x01)
	char pad_9C1[0x7]; // 0x9c1(0x07)
	struct FString IndicatorGroup; // 0x9c8(0x10)
	struct AAthena_PlayerController_C* AthenaPlayerControler; // 0x9d8(0x08)
	int32_t MarkActorInt; // 0x9e0(0x04)
	char pad_9E4[0x4]; // 0x9e4(0x04)
	struct UParticleSystem* IndicatedPS; // 0x9e8(0x08)
	struct FName ParticleSystemParamName; // 0x9f0(0x08)
	struct FVector PSOffset; // 0x9f8(0x0c)
	struct FName PSVectorParamName; // 0xa04(0x08)
	struct FVector PSDBNOOffset; // 0xa0c(0x0c)
	struct TArray<struct FIndicatedActorDataWithFilter> IndicatedActorFilters; // 0xa18(0x10)
	struct FTimerHandle PulseTimer; // 0xa28(0x08)
	float Mark Duration; // 0xa30(0x04)
	char pad_A34[0x4]; // 0xa34(0x04)
	struct USoundBase* PingSound; // 0xa38(0x08)
	float PulseTime; // 0xa40(0x04)
	float Step Time; // 0xa44(0x04)
	struct FGameplayTag Gameplay Cue Tag; // 0xa48(0x08)
	float PostProcessPulseTime; // 0xa50(0x04)
	struct FGameplayTag Gameplay Cue Death; // 0xa54(0x08)
	char pad_A5C[0x4]; // 0xa5c(0x04)
	struct UNiagaraComponent* Pulsing NS_FX; // 0xa60(0x08)
	struct TArray<struct AActor*> MarkedPlayers; // 0xa68(0x10)
	struct AFortWeapon* OwnerWeapon; // 0xa78(0x08)
	struct FGameplayTag EnterWaterCue; // 0xa80(0x08)
	struct FScalableFloat Health; // 0xa88(0x28)
	struct FScalableFloat IndividualMarkDuration; // 0xab0(0x28)
	struct USoundBase* NearDeathAudio; // 0xad8(0x08)
	struct FScalableFloat MarkRadius; // 0xae0(0x28)

	void On Actor Removed(struct AActor* IndicatedActor); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.On Actor Removed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void On Actor Added(struct AActor* IndicatedActor); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.On Actor Added // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PulseMarkers(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.PulseMarkers // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateModifiedIndicatedActorFilter(struct FIndicatedActorDataWithFilter NewParam, struct FIndicatedActorDataWithFilter NewParam1); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.CreateModifiedIndicatedActorFilter // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void UserConstructionScript(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Event_Building_Actor_Destroyed(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.Event_Building_Actor_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PostProcessPulse(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.PostProcessPulse // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnStop_2(struct FHitResult Hit); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.OnStop_2 // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDeathServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.OnDeathServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnDeathPlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.OnDeathPlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void NearDeathFx(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.NearDeathFx // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Ready(); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.Ready // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.BndEvt__FortWaterInteraction_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_Scooter(int32_t EntryPoint); // Function BGA_Athena_Scooter.BGA_Athena_Scooter_C.ExecuteUbergraph_BGA_Athena_Scooter // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

