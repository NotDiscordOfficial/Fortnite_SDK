// BlueprintGeneratedClass B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C
// Size: 0x924 (Inherited: 0x900)
struct AB_Prj_Athena_AppleSun__C : AB_Prj_Athena_BGASpawner_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x900(0x08)
	struct UParticleSystemComponent* P_AppleSun_Projectile_Trail; // 0x908(0x08)
	struct UStaticMeshComponent* Apple_Sun; // 0x910(0x08)
	struct URotatingMovementComponent* RotatingMovement; // 0x918(0x08)
	int32_t CrashpadsBouncedOffOf; // 0x920(0x04)

	void UserConstructionScript(); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(struct UPrimitiveComponent* HitComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, struct FVector NormalImpulse, struct FHitResult Hit); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Prj_Athena_AppleSun_(int32_t EntryPoint); // Function B_Prj_Athena_AppleSun_.B_Prj_Athena_AppleSun__C.ExecuteUbergraph_B_Prj_Athena_AppleSun_ // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

