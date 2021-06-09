// BlueprintGeneratedClass B_Athena_DangerGrape.B_Athena_DangerGrape_C
// Size: 0x328 (Inherited: 0x220)
struct AB_Athena_DangerGrape_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x228(0x08)
	struct FCurveTableRowHandle DecoyLifetimeRow; // 0x230(0x10)
	struct AFortPlayerPawnAthena* BotPawn; // 0x240(0x08)
	float LeashUpdateInterval; // 0x248(0x04)
	struct FName BB_Key_LeashLocation; // 0x24c(0x08)
	struct FName BB_Key_Radius; // 0x254(0x08)
	char pad_25C[0x4]; // 0x25c(0x04)
	struct FScalableFloat LeashRadius; // 0x260(0x28)
	struct FName BB_Key_Destination; // 0x288(0x08)
	struct FScalableFloat DistanceFromPlayerToMoveDecoy; // 0x290(0x28)
	struct FGameplayTagContainer T_QuestAbsorbDamage; // 0x2b8(0x20)
	struct UFortQuestItemDefinition* Quest Item; // 0x2d8(0x08)
	struct FName Quest Backend Name; // 0x2e0(0x08)
	float Damage; // 0x2e8(0x04)
	char pad_2EC[0x4]; // 0x2ec(0x04)
	struct FGameplayTagContainer No Starting Weapons Tag; // 0x2f0(0x20)
	int32_t SpawnRequestID; // 0x310(0x04)
	char pad_314[0x4]; // 0x314(0x04)
	struct UFortAthenaAISpawnerData* AISpawnerData; // 0x318(0x08)
	struct UFortAthenaAISpawnerData* AISpawnerData_NoStartingWeapons; // 0x320(0x08)

	void ReceiveBeginPlay(); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RemoveDecoy(); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.RemoveDecoy // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateLeashLocation(); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.UpdateLeashLocation // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PawnDied(struct AActor* DeadActor, float Damage, struct AFortPawn* InstigatedBy, struct FVector HitLocation, struct AActor* DamageCauser); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.PawnDied // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PawnDamaged(struct AActor* DamagedActor, float Damage, struct AController* InstigatedBy, struct AActor* DamageCauser, struct FVector HitLocation, struct UPrimitiveComponent* FHitComponent, struct FName BoneName, struct FVector Momentum); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.PawnDamaged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupSpawnedBot(struct APawn* Pawn, int32_t RequestID); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.SetupSpawnedBot // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_Athena_DangerGrape(int32_t EntryPoint); // Function B_Athena_DangerGrape.B_Athena_DangerGrape_C.ExecuteUbergraph_B_Athena_DangerGrape // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

