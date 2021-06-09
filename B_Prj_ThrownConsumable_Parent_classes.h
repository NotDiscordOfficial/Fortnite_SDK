// BlueprintGeneratedClass B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C
// Size: 0x892 (Inherited: 0x880)
struct AB_Prj_ThrownConsumable_Parent_C : AFortProjectileBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x880(0x08)
	float BouncePawnAgainstPawnGravityScale; // 0x888(0x04)
	float FuseTime; // 0x88c(0x04)
	bool bSimulationRunning; // 0x890(0x01)
	bool bShouldRestartSimulating; // 0x891(0x01)

	void ResetSimulatedComponents(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ResetSimulatedComponents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRep_bSimulationRunning(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnRep_bSimulationRunning // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBounceVelocityPawn(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocityPawn // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBounceVelocity(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.SetBounceVelocity // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void FuseEnded(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.FuseEnded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveAnyDamage(float Damage, struct UDamageType* DamageType, struct AController* InstigatedBy, struct AActor* DamageCauser); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveAnyDamage // (BlueprintAuthorityOnly|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void Event_BuildingActorDied(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_BuildingActorDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Event_OnVehicleDestroyed(struct AActor* DestroyedActor); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.Event_OnVehicleDestroyed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RestartSimulating(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.RestartSimulating // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_ThrownConsumable_Parent(int32_t EntryPoint); // Function B_Prj_ThrownConsumable_Parent.B_Prj_ThrownConsumable_Parent_C.ExecuteUbergraph_B_Prj_ThrownConsumable_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

