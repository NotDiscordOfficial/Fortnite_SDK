// BlueprintGeneratedClass Prj_Athena_Scooter.Prj_Athena_Scooter_C
// Size: 0xb88 (Inherited: 0xa98)
struct APrj_Athena_Scooter_C : APrj_Athena_Lotus_Scooter_C {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa98(0x08)
	struct UAudioComponent* InAirAudioLoop; // 0xaa0(0x08)
	struct UNiagaraComponent* NS_Scooter_ProjLaunch; // 0xaa8(0x08)
	struct UParticleSystemComponent* NearDeathBlink; // 0xab0(0x08)
	struct FScalableFloat Duration; // 0xab8(0x28)
	struct FScalableFloat MaxBounceVelocity; // 0xae0(0x28)
	struct FScalableFloat MinBounceVelocity; // 0xb08(0x28)
	struct FVector SavedVelocity; // 0xb30(0x0c)
	struct FVector SavedNormal; // 0xb3c(0x0c)
	float SavedDot; // 0xb48(0x04)
	struct FGameplayTag Water Cue; // 0xb4c(0x08)
	char pad_B54[0x4]; // 0xb54(0x04)
	struct FScalableFloat SpawnPhysicsObject; // 0xb58(0x28)
	struct FGameplayTag DestroyedCue; // 0xb80(0x08)

	void CustomEvent_1(struct AActor* DestroyedActor); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.CustomEvent_1 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature(struct FHitResult ImpactResult); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.BndEvt__ProjectileMovementComponent_K2Node_ComponentBoundEvent_1_OnProjectileStopDelegate__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnBounce(struct FHitResult Hit); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.OnBounce // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void NearDeathFx(); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.NearDeathFx // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ReceiveDestroyed(); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.ReceiveDestroyed // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Prj_Athena_Scooter(int32_t EntryPoint); // Function Prj_Athena_Scooter.Prj_Athena_Scooter_C.ExecuteUbergraph_Prj_Athena_Scooter // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

