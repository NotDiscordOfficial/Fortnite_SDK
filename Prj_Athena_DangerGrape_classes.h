// BlueprintGeneratedClass Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C
// Size: 0x974 (Inherited: 0x91c)
struct APrj_Athena_DangerGrape_C : AB_Prj_ThrownConsumable_C {
	char pad_91C[0x4]; // 0x91c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x920(0x08)
	struct AActor* ActorToSpawn; // 0x928(0x08)
	float DelayBeforeSpawningFX; // 0x930(0x04)
	char pad_934[0x4]; // 0x934(0x04)
	struct UParticleSystemComponent* BotSpawnParticleSystem; // 0x938(0x08)
	struct FLinearColor SweepColor; // 0x940(0x10)
	struct USoundBase* Impact Spawn Sound; // 0x950(0x08)
	struct USoundBase* Water Impact Sound; // 0x958(0x08)
	float ZToleranceForFloorExplosion; // 0x960(0x04)
	struct FLinearColor Trail Ribbon Color; // 0x964(0x10)

	void UserConstructionScript(); // Function Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_0_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnStop(struct FHitResult Hit); // Function Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C.OnStop // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Prj_Athena_DangerGrape(int32_t EntryPoint); // Function Prj_Athena_DangerGrape.Prj_Athena_DangerGrape_C.ExecuteUbergraph_Prj_Athena_DangerGrape // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

