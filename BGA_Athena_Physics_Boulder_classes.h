// BlueprintGeneratedClass BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C
// Size: 0xdb0 (Inherited: 0x8cc)
struct ABGA_Athena_Physics_Boulder_C : ABGA_Athena_Physics_Parent_C {
	char pad_8CC[0x4]; // 0x8cc(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x8d0(0x08)
	struct UNiagaraComponent* NS_Boulder_Speedlines; // 0x8d8(0x08)
	struct UNiagaraComponent* NS_Boulder_Wake; // 0x8e0(0x08)
	struct UFortActorComponent_Affiliation* FortActorComponent_Affiliation; // 0x8e8(0x08)
	struct UAthenaPhysicsAIPerceptionStimuliSourceComponent* AthenaPhysicsAIPerceptionStimuliSource; // 0x8f0(0x08)
	struct UFortPhysicsObjectNavigationComponent* FortPhysicsObjectNavigation; // 0x8f8(0x08)
	struct FGameplayTagContainer QuestTargetTags; // 0x900(0x20)
	float DelayBetweenDamageFX; // 0x920(0x04)
	char pad_924[0x4]; // 0x924(0x04)
	struct USoundBase* DamageSound; // 0x928(0x08)
	struct TArray<struct AActor*> AlreadyDamagedAndSelf; // 0x930(0x10)
	bool DamageEnabled; // 0x940(0x01)
	char pad_941[0x3]; // 0x941(0x03)
	struct FGameplayTag ImpactCueLarge; // 0x944(0x08)
	struct FGameplayTag ImpactCueSmall; // 0x94c(0x08)
	char pad_954[0x4]; // 0x954(0x04)
	struct FTimerHandle EnvironmentDestructionUpdateTimer; // 0x958(0x08)
	struct FGameplayTag ImpactCuePlayer; // 0x960(0x08)
	struct FGameplayTag ImpactCueBuilds; // 0x968(0x08)
	struct FScalableFloat MinSpeedForLowDamage; // 0x970(0x28)
	struct FScalableFloat MinSpeedForHighDamage; // 0x998(0x28)
	int32_t DamageState; // 0x9c0(0x04)
	int32_t MaterialState; // 0x9c4(0x04)
	struct FScalableFloat MinPlayerLaunchSpeed; // 0x9c8(0x28)
	struct FScalableFloat MaxPlayerLaunchSpeed; // 0x9f0(0x28)
	struct FScalableFloat SmashEffectRadius; // 0xa18(0x28)
	struct FScalableFloat SmashLaunchSpeed; // 0xa40(0x28)
	struct TMap<struct AFortPawn*, float> PlayersRecentlyDamaged; // 0xa68(0x50)
	struct FScalableFloat PlayerImmunityTimeAfterHit; // 0xab8(0x28)
	struct APawn* LastInstigator; // 0xae0(0x08)
	struct FHitResult LastHitInfo; // 0xae8(0x88)
	struct AController* LastServerInstigator; // 0xb70(0x08)
	struct FScalableFloat PickaxeImpulse; // 0xb78(0x28)
	struct FScalableFloat LaunchSpeedFromWeakpoint; // 0xba0(0x28)
	struct FScalableFloat DamageImpulseMultiplier; // 0xbc8(0x28)
	float ImpactMagnitude; // 0xbf0(0x04)
	float LastInstigationTime; // 0xbf4(0x04)
	struct FScalableFloat SelfDamageImmunityTime; // 0xbf8(0x28)
	struct TArray<struct APawn*> AllInstigatorsSinceSleep; // 0xc20(0x10)
	float PlayerLaunchSpeedMultiplier; // 0xc30(0x04)
	char pad_C34[0x4]; // 0xc34(0x04)
	struct FScalableFloat MaxDistanceFromWeakspot; // 0xc38(0x28)
	struct FScalableFloat PlayerLaunchSpeedMultiplier_; // 0xc60(0x28)
	struct FVector Effect Location; // 0xc88(0x0c)
	float Min Large Impulse Magnitude; // 0xc94(0x04)
	bool KillWeakpoint; // 0xc98(0x01)
	char pad_C99[0x7]; // 0xc99(0x07)
	struct FScalableFloat LowVehicleDamage; // 0xca0(0x28)
	struct FScalableFloat HighVehicleDamage; // 0xcc8(0x28)
	struct FVector NormalImpulseDir; // 0xcf0(0x0c)
	struct FHitResult HitInfo; // 0xcfc(0x88)
	char pad_D84[0x4]; // 0xd84(0x04)
	struct FScalableFloat IsSelfDamageAllowed?; // 0xd88(0x28)

	bool IsPlayerImmune(struct AActor* HitActor); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.IsPlayerImmune // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool IsWeakpointTooFarAway(struct UFortWeakPointComponent* WeakPointComponent, struct FBuildingWeakSpotData WeakSpotData); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.IsWeakpointTooFarAway // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool ShouldDie(float Damage, struct AController* EventInstigator, struct AActor* DamageCauser); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ShouldDie // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnDamageServer(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnDamageServer // (BlueprintAuthorityOnly|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void DamageFX(struct FVector Location, struct UPrimitiveComponent* HitComponent); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.DamageFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnDamagePlayEffects(float Damage, struct FGameplayTagContainer DamageTags, struct FVector Momentum, struct FHitResult HitInfo, struct AFortPawn* InstigatedBy, struct AActor* DamageCauser, struct FGameplayEffectContextHandle EffectContext); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnDamagePlayEffects // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnDamage(struct FHitResult Hit, struct APawn* Instigator, float Damage, struct AActor* DamageCauser, struct FGameplayTagContainer DamageTags); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnDamage // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BreakCollisionLoop(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.BreakCollisionLoop // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ParentMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.BndEvt__ParentMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Update(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.Update // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceDamageCheck(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ForceDamageCheck // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPickedUp(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnPickedUp // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnPutDown(); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.OnPutDown // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_Physics_Boulder(int32_t EntryPoint); // Function BGA_Athena_Physics_Boulder.BGA_Athena_Physics_Boulder_C.ExecuteUbergraph_BGA_Athena_Physics_Boulder // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

