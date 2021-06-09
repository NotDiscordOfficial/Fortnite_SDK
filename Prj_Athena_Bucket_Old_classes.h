// BlueprintGeneratedClass Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C
// Size: 0x95c (Inherited: 0x91c)
struct APrj_Athena_Bucket_Old_C : AB_Prj_ThrownConsumable_C {
	char pad_91C[0x4]; // 0x91c(0x04)
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x920(0x08)
	struct UFortWorldItemDefinition* ItemToSpawn; // 0x928(0x08)
	bool TurnOffFX; // 0x930(0x01)
	char pad_931[0x7]; // 0x931(0x07)
	struct USoundBase* HitMarkerSound; // 0x938(0x08)
	struct USoundBase* ThrowIndicator_SoundRef; // 0x940(0x08)
	bool ShouldSpawnItem; // 0x948(0x01)
	char pad_949[0x7]; // 0x949(0x07)
	struct USoundBase* Splash Sound_1; // 0x950(0x08)
	float ImpactSpawnOffset; // 0x958(0x04)

	void OnRep_TurnOffFX(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.OnRep_TurnOffFX // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnExploded(struct TArray<struct AActor*> HitActors, struct TArray<struct FHitResult> HitResults); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.OnExploded // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature(struct AFortWaterBodyActor* WaterBody, struct UFortWaterInteractionComponent* WaterInteractionComponent, bool bIsFirstBody); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_2_WaterInteractionOnEnterWater__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void PlayHitSound(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.PlayHitSound // (Net|NetClient|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Held Water Impact(); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.Held Water Impact // (Net|NetMulticast|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Prj_Athena_Bucket_Old(int32_t EntryPoint); // Function Prj_Athena_Bucket_Old.Prj_Athena_Bucket_Old_C.ExecuteUbergraph_Prj_Athena_Bucket_Old // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

