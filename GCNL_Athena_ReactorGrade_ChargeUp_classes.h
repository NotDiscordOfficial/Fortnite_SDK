// BlueprintGeneratedClass GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C
// Size: 0x8b0 (Inherited: 0x820)
struct AGCNL_Athena_ReactorGrade_ChargeUp_C : AReactorGradeGameplayCue_ChargeUp {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x820(0x08)
	struct UFortAudioShapeLineComponent* FortAudioShapeLine; // 0x828(0x08)
	struct FScalableFloat MaxRange; // 0x830(0x28)
	struct AFortPawn* Pawn_1; // 0x858(0x08)
	struct UFXSystemComponent* LoopingFX; // 0x860(0x08)
	struct FDataTableRowHandle Data Table Row Handle; // 0x868(0x10)
	float Min Charge Time; // 0x878(0x04)
	float Max Charge Time; // 0x87c(0x04)
	int32_t Compare With; // 0x880(0x04)
	char pad_884[0x4]; // 0x884(0x04)
	struct FScalableFloat Row_TraceThroughBuildingsLimit; // 0x888(0x28)

	void SetEndPoint(struct FVector EndPoint); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.SetEndPoint // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetMinMaxChargeTimes(); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.SetMinMaxChargeTimes // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Aim End Point BP(float DeltaTime, struct FVector End); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.Update Aim End Point BP // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	bool OnExecute(struct AActor* MyTarget, struct FGameplayCueParameters Parameters); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.OnExecute // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoopingStartGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.OnLoopingStartGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnRemovalGeneric(struct AActor* MyTarget, struct FGameplayCueParameters Parameters, struct TArray<struct UFXSystemComponent*> ParticleComponents, struct TArray<struct UAudioComponent*> AudioComponents, struct UMatineeCameraShake* BurstCameraShakeInstance, struct ADecalActor* BurstDecalInstance); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.OnRemovalGeneric // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnEndPointFound(struct FVector FoundPoint); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.OnEndPointFound // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCNL_Athena_ReactorGrade_ChargeUp(int32_t EntryPoint); // Function GCNL_Athena_ReactorGrade_ChargeUp.GCNL_Athena_ReactorGrade_ChargeUp_C.ExecuteUbergraph_GCNL_Athena_ReactorGrade_ChargeUp // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

