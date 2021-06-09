// BlueprintGeneratedClass BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C
// Size: 0xb68 (Inherited: 0xa58)
struct ABP_Athena_Environmental_ZipLine_C : AFortAthenaZipline {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xa58(0x08)
	struct UCapsuleComponent* InteractCapsule; // 0xa60(0x08)
	struct UStaticMeshComponent* SM_Line; // 0xa68(0x08)
	struct UCapsuleComponent* OverlapCapsule; // 0xa70(0x08)
	struct USceneComponent* Zipline; // 0xa78(0x08)
	struct USceneComponent* Scene; // 0xa80(0x08)
	struct FVector StartLocation; // 0xa88(0x0c)
	struct FVector TargetLocation; // 0xa94(0x0c)
	struct FVector MotorOffset; // 0xaa0(0x0c)
	float LineThickness; // 0xaac(0x04)
	float LineCollisionThickness; // 0xab0(0x04)
	char pad_AB4[0x4]; // 0xab4(0x04)
	struct AActor* PoleA; // 0xab8(0x08)
	struct AActor* PoleB; // 0xac0(0x08)
	struct FCurveTableRowHandle SpeedCTHandle; // 0xac8(0x10)
	struct FCurveTableRowHandle ZipLineEnabledCTHandle; // 0xad8(0x10)
	struct FCurveTableRowHandle LineCollisionRadiusCTHandle; // 0xae8(0x10)
	struct FCurveTableRowHandle BuildingCheckBoxExtentsCTHandle; // 0xaf8(0x10)
	struct FName BackendName; // 0xb08(0x08)
	struct UFortQuestItemDefinition* QuestItem; // 0xb10(0x08)
	float LineExtendBeyondPoleLength; // 0xb18(0x04)
	struct FVector PoleASocketLocation; // 0xb1c(0x0c)
	struct FVector PoleBSocketLocation; // 0xb28(0x0c)
	char pad_B34[0x4]; // 0xb34(0x04)
	struct AFortPlayerPawn* PlayerPawn; // 0xb38(0x08)
	struct TArray<struct AFortPlayerPawn*> PlayersPendingMovementModeChange; // 0xb40(0x10)
	float CollisionHeightAboveLine; // 0xb50(0x04)
	struct FVector PlayerOffsetToLine_Hoverboard; // 0xb54(0x0c)
	struct FTimerHandle EndOverlapReleaseTimer; // 0xb60(0x08)

	bool BlueprintCanInteract(struct AFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class TInteractionType InteractionType); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.BlueprintCanInteract // (Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // @ game+0xda7c34
	void CalculatePositionsOfPoles(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CalculatePositionsOfPoles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Setup Overlap Bindings(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.Setup Overlap Bindings // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleEnterZipline(struct AFortPlayerPawn* InPlayerPawn); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleEnterZipline // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CheckForBuildings(struct AFortPlayerPawn* Player, bool BuildingNearby?); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.CheckForBuildings // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void QuestCheckForUse(struct AFortPlayerController* FortPlayerController); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.QuestCheckForUse // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetCharacterCustomMovementMode(struct APawn* Character, enum class EFortCustomMovement CustomMovementMode, enum class EMovementMode MovementMode); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.GetCharacterCustomMovementMode // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void StartZipLining(struct AFortPlayerPawn* FortPlayerPawn); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.StartZipLining // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UserConstructionScript(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.UserConstructionScript // (Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleOnMapInfoInitialized(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMapInfoInitialized // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOnMovementModeChanged(struct ACharacter* Character, enum class EMovementMode PrevMovementMode, char PreviousCustomMode); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnMovementModeChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOnBeginOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult SweepResult); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnBeginOverlap // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleOnEndOverlap(struct UPrimitiveComponent* OverlappedComponent, struct AActor* OtherActor, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.HandleOnEndOverlap // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReleaseZipline(); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ReleaseZipline // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Athena_Environmental_ZipLine(int32_t EntryPoint); // Function BP_Athena_Environmental_ZipLine.BP_Athena_Environmental_ZipLine_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

