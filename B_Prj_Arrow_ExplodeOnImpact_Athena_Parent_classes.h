// BlueprintGeneratedClass B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C
// Size: 0xa20 (Inherited: 0x9a0)
struct AB_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C : AFortProjectileAthena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x9a0(0x08)
	struct UParticleSystemComponent* ProjectileTrail; // 0x9a8(0x08)
	struct UStaticMeshComponent* TracerMesh; // 0x9b0(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x9b8(0x08)
	struct UAudioComponent* GrenadeFuse_AudioComponent; // 0x9c0(0x08)
	struct UParticleSystem* P_Explosion; // 0x9c8(0x08)
	struct USoundBase* Cue_DistantSound; // 0x9d0(0x08)
	struct USoundBase* Cue_CloseSound; // 0x9d8(0x08)
	struct FRotator HitRotation; // 0x9e0(0x0c)
	struct FVector HitLocation; // 0x9ec(0x0c)
	float DrawDistance; // 0x9f8(0x04)
	bool HitPlayer; // 0x9fc(0x01)
	char pad_9FD[0x3]; // 0x9fd(0x03)
	struct FVector DecalSize; // 0xa00(0x0c)
	struct FGameplayTag FeedbackCue; // 0xa0c(0x08)
	char pad_A14[0x4]; // 0xa14(0x04)
	struct UParticleSystem* WaterImpactFX; // 0xa18(0x08)

	void OnRep_HitLocation(); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnRep_HitLocation // (HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Event_Building_Actor_Destroyed(); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.Event_Building_Actor_Destroyed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTouched(struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FHitResult HitResult, bool bIsOverlap); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.OnTouched // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent(int32_t EntryPoint); // Function B_Prj_Arrow_ExplodeOnImpact_Athena_Parent.B_Prj_Arrow_ExplodeOnImpact_Athena_Parent_C.ExecuteUbergraph_B_Prj_Arrow_ExplodeOnImpact_Athena_Parent // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

