// BlueprintGeneratedClass BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C
// Size: 0x9be (Inherited: 0x898)
struct ABGA_Athena_WithGravity_Parent_C : ABuildingGameplayActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x898(0x08)
	struct UFortWaterInteractionComponent* FortWaterInteraction; // 0x8a0(0x08)
	struct UStaticMeshComponent* StaticMesh; // 0x8a8(0x08)
	struct UProjectileMovementComponent* ProjectileMovement; // 0x8b0(0x08)
	bool ResumeGravSimOnBegin; // 0x8b8(0x01)
	bool bResumeSimulation; // 0x8b9(0x01)
	char pad_8BA[0x2]; // 0x8ba(0x02)
	struct FHitResult NullHit; // 0x8bc(0x88)
	struct FVector GravImpact_Loc; // 0x944(0x0c)
	struct FVector GravHitNormal; // 0x950(0x0c)
	float GravMaxSlope; // 0x95c(0x04)
	bool CheckForBounce; // 0x960(0x01)
	char pad_961[0x3]; // 0x961(0x03)
	float ForcedBounceExtraZ; // 0x964(0x04)
	int32_t ForcedBounceCurrentCount; // 0x968(0x04)
	float ForcedBounceMult; // 0x96c(0x04)
	struct TArray<struct AActor*> GravFoundBuildingOnDied; // 0x970(0x10)
	bool RepCollision; // 0x980(0x01)
	char pad_981[0x7]; // 0x981(0x07)
	struct UObject* AdditionalBounceObject; // 0x988(0x08)
	int32_t ForcedBounceMaxCount; // 0x990(0x04)
	bool ForceBounce; // 0x994(0x01)
	bool CountNonForceBounces; // 0x995(0x01)
	char pad_996[0x2]; // 0x996(0x02)
	float BounceExtraZ; // 0x998(0x04)
	float BounceMult; // 0x99c(0x04)
	bool ShouldAttach; // 0x9a0(0x01)
	char pad_9A1[0x7]; // 0x9a1(0x07)
	struct TArray<struct AActor*> ActorsToNotAttachTo; // 0x9a8(0x10)
	bool DontAttachToOthersOfThisClass; // 0x9b8(0x01)
	bool DebugText; // 0x9b9(0x01)
	bool ShouldNotReattach; // 0x9ba(0x01)
	bool BlockStoppingSim; // 0x9bb(0x01)
	bool DeactivatePawnAndVehicleCollisionOnStop; // 0x9bc(0x01)
	bool AllowReattachmentToActors; // 0x9bd(0x01)

	void Init(struct FVector GravHitNormal); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Init // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnAttach(struct AActor* AttachedActor); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnAttach // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RestartSimulation(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.RestartSimulation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttachToBindedActor(struct UPrimitiveComponent* AttachComp); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachToBindedActor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BounceBGA(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BounceBGA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckForSameClassToBounce(struct AActor* Hit, bool HitSameClass); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.CheckForSameClassToBounce // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_RepCollision(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_RepCollision // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ForceBounceBGA(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ForceBounceBGA // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_bResumeSimulation(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.OnRep_bResumeSimulation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BaseDestroyed(struct AActor* DestroyedActor); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleBinding(struct AActor* Actor, struct UPrimitiveComponent* HitComp); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.HandleBinding // (Net|NetReliableNetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BaseDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.BaseDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopSim(struct FHitResult Hit); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.StopSim // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Impulse(float DelayBeforeImpulse, float DelayBeforeCollision, struct FVector ImpulseOrigin, struct FVector ImpulseAmount, bool SetCollisionAfterImpulse); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.Impulse // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayHitFX(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.PlayHitFX // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SpawnFXSounds(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SpawnFXSounds // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AttachedWasDestroyed(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.AttachedWasDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SlidingDoorOpened(); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.SlidingDoorOpened // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BGA_Athena_WithGravity_Parent(int32_t EntryPoint); // Function BGA_Athena_WithGravity_Parent.BGA_Athena_WithGravity_Parent_C.ExecuteUbergraph_BGA_Athena_WithGravity_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

