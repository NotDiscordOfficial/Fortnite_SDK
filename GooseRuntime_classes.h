// Class GooseRuntime.AthenaGoosePickup
// Size: 0xaf0 (Inherited: 0x898)
struct AAthenaGoosePickup : ABuildingGameplayActor {
	enum class EGoosePickupState PickupState; // 0x898(0x01)
	bool bIsDespawning; // 0x899(0x01)
	char pad_89A[0x6]; // 0x89a(0x06)
	struct FScalableFloat DeployedLifetime; // 0x8a0(0x28)
	struct FScalableFloat DespawnWarningTime; // 0x8c8(0x28)
	struct FScalableFloat InStormLifetime; // 0x8f0(0x28)
	struct FScalableFloat DropGravityScale; // 0x918(0x28)
	int32_t DisplayIndex; // 0x940(0x04)
	char pad_944[0xc]; // 0x944(0x0c)
	struct TMap<struct FName, struct UGameplayEffect*> Loot_To_Health_GE_Map; // 0x950(0x50)
	struct TMap<struct FName, struct UGameplayEffect*> Loot_To_Boost_GE_Map; // 0x9a0(0x50)
	struct TMap<struct FName, struct UGameplayEffect*> Loot_To_Passengers_GE_Map; // 0x9f0(0x50)
	struct TMap<struct FName, struct UGameplayEffect*> Loot_to_Driver_GE_Map; // 0xa40(0x50)
	struct FName ForcedLootTableName; // 0xa90(0x08)
	struct TArray<struct FGooseDisplayData> DisplayData; // 0xa98(0x10)
	char pad_AA8[0x8]; // 0xaa8(0x08)
	float DeployHeight; // 0xab0(0x04)
	char pad_AB4[0x3c]; // 0xab4(0x3c)

	void SetStaticMesh(struct UStaticMesh* NewStaticMesh, struct TArray<struct UMaterialInterface*> MaterialsToSwap, int32_t InDisplayIndex); // Function GooseRuntime.AthenaGoosePickup.SetStaticMesh // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnStartDespawnWarning_Client(); // Function GooseRuntime.AthenaGoosePickup.OnStartDespawnWarning_Client // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc4820
	void OnRep_PickupState(); // Function GooseRuntime.AthenaGoosePickup.OnRep_PickupState // (Final|Native|Protected) // @ game+0x3dc47c0
	void OnRep_DisplayIndex(); // Function GooseRuntime.AthenaGoosePickup.OnRep_DisplayIndex // (Final|Native|Protected) // @ game+0x3dc4774
	void OnRep_bIsDespawning(); // Function GooseRuntime.AthenaGoosePickup.OnRep_bIsDespawning // (Final|Native|Protected) // @ game+0x3dc47d4
	void OnImpactedByPlane_Server(); // Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Server // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc4418
	void OnImpactedByPlane_Client(); // Function GooseRuntime.AthenaGoosePickup.OnImpactedByPlane_Client // (Native|Event|Protected|BlueprintEvent) // @ game+0x1dfee98
	void OnFalling_Server(); // Function GooseRuntime.AthenaGoosePickup.OnFalling_Server // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc4400
	void OnFalling_Client(); // Function GooseRuntime.AthenaGoosePickup.OnFalling_Client // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc43e8
	void OnDeployed_Server(); // Function GooseRuntime.AthenaGoosePickup.OnDeployed_Server // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc43d0
	void OnDeployed_Client(); // Function GooseRuntime.AthenaGoosePickup.OnDeployed_Client // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc43b8
	void OnCollide(struct AActor* CollidingActor); // Function GooseRuntime.AthenaGoosePickup.OnCollide // (Final|Native|Protected|BlueprintCallable) // @ game+0x3dc4308
	void DeployTimerUp_Server(); // Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Server // (Native|Event|Protected|BlueprintEvent) // @ game+0x1a03894
	void DeployTimerUp_Client(); // Function GooseRuntime.AthenaGoosePickup.DeployTimerUp_Client // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dc3d24
};

// Class GooseRuntime.FortAthenaMutator_Goose
// Size: 0x8d8 (Inherited: 0x3d0)
struct AFortAthenaMutator_Goose : AFortAthenaMutator_GameModeBase {
	struct TArray<struct UGameplayEffect*> PlaneStatusEffects; // 0x3d0(0x10)
	char pad_3E0[0x8]; // 0x3e0(0x08)
	struct FScalableFloat AircraftPhaseLength; // 0x3e8(0x28)
	struct FScalableFloat bHidePlaneAndFriendlyPawnsDuringAimDownSightsForLocalControlledPlayer; // 0x410(0x28)
	struct FScalableFloat PlaneSpawnZHeight; // 0x438(0x28)
	struct FVector PlaneSpawnOffsetFromPreviouslySpawnedPlane; // 0x460(0x0c)
	char pad_46C[0x4]; // 0x46c(0x04)
	struct FScalableFloat InitialRadius; // 0x470(0x28)
	struct FScalableFloat PlaneSpawnHeight; // 0x498(0x28)
	struct FScalableFloat PlaneSkyCapOffset; // 0x4c0(0x28)
	struct FScalableFloat PlaneSpawnPitch; // 0x4e8(0x28)
	struct FScalableFloat InitialNumOfSleepingPlanes; // 0x510(0x28)
	struct FScalableFloat PlaneSpawnStormRadiusMultiplier; // 0x538(0x28)
	struct FScalableFloat GroundTestValue; // 0x560(0x28)
	struct FScalableFloat DriverRespawnScalar; // 0x588(0x28)
	struct AFortAthenaVehicle* VehicleClass; // 0x5b0(0x08)
	struct UGameplayEffect* SiphonEffectForPlanes; // 0x5b8(0x08)
	struct UGameplayEffect* ImmuneToStormDamageEffect; // 0x5c0(0x08)
	char pad_5C8[0x20]; // 0x5c8(0x20)
	struct FScalableFloat NumberOfPlanesPerSquad; // 0x5e8(0x28)
	struct FScalableFloat bEliminatePassengersAfterPlaneDeath; // 0x610(0x28)
	struct FScalableFloat PassengerEliminationDelay; // 0x638(0x28)
	struct FScalableFloat bPlayerImmuneToStormDamageEnabled; // 0x660(0x28)
	char pad_688[0x10]; // 0x688(0x10)
	struct TArray<struct FPlaneLootTypeEntry> LootTypeEntries; // 0x698(0x10)
	struct FScalableFloat HowOftenToUpdatePickupCount; // 0x6a8(0x28)
	struct FName DefaultLootTableName; // 0x6d0(0x08)
	struct FScalableFloat DefaultDeployAltitude; // 0x6d8(0x28)
	struct FScalableFloat DefaultPickupSpawnHeight; // 0x700(0x28)
	struct AAthenaGoosePickup* PickupClass; // 0x728(0x08)
	struct FScalableFloat MaxNumOfAlivePickups; // 0x730(0x28)
	struct AActor* BoundsXYSplineClass; // 0x758(0x08)
	struct FPlaneSquadInfoArray SquadInfoArray; // 0x760(0x130)
	struct TArray<struct AFortAthenaVehicle*> SpawnedVehicles; // 0x890(0x10)
	struct TArray<struct AAthenaGoosePickup*> SpawnedPickups; // 0x8a0(0x10)
	struct AFortAthenaMutator_ItemPromotion* ItemPromotionMutator; // 0x8b0(0x08)
	struct AFortAthenaMutator_MarkerUtilities* MarkerUtilitiesMutator; // 0x8b8(0x08)
	char pad_8C0[0x10]; // 0x8c0(0x10)
	struct AFortPlayerPawnAthena* LocalControlledPlayerPawn; // 0x8d0(0x08)

	void OnVehicleStolen(char OldID, char NewID); // Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleStolen // (Final|Native|Protected) // @ game+0x3dc4a04
	void OnVehicleDied(struct AFortAthenaVehicle* DestroyedVehicle, struct FGameplayTagContainer InTags, struct AController* EventInstigator, struct AActor* DamageCauser); // Function GooseRuntime.FortAthenaMutator_Goose.OnVehicleDied // (Final|Native|Protected|HasOutParms) // @ game+0x3dc4838
	void OnPawnDied(struct AFortPlayerPawnAthena* PlayerPawn); // Function GooseRuntime.FortAthenaMutator_Goose.OnPawnDied // (Final|Native|Protected) // @ game+0x3dc4430
	void KillPlayerPawns(struct TArray<struct TWeakObjectPtr<struct AFortPlayerPawn>> PawnsToKill, struct FGameplayTagContainer DeathReasonTags, struct AController* EventInstigator, struct AActor* DamageCauser); // Function GooseRuntime.FortAthenaMutator_Goose.KillPlayerPawns // (Final|Native|Protected) // @ game+0x3dc40ec
	void HandleClientVehicleDestroyed(struct AActor* VehicleActor); // Function GooseRuntime.FortAthenaMutator_Goose.HandleClientVehicleDestroyed // (Final|Native|Protected) // @ game+0x3dc4050
	void HandleClientPawnExitedVehicle(struct TScriptInterface<None> Vehicle, struct AFortPawn* Pawn, int32_t SeatIndex); // Function GooseRuntime.FortAthenaMutator_Goose.HandleClientPawnExitedVehicle // (Final|Native|Protected|HasOutParms) // @ game+0x3dc3f08
	void HandleClientPawnEnteredVehicle(struct TScriptInterface<None> Vehicle, struct AFortPawn* Pawn, int32_t SeatIndex); // Function GooseRuntime.FortAthenaMutator_Goose.HandleClientPawnEnteredVehicle // (Final|Native|Protected|HasOutParms) // @ game+0x3dc3dc0
};

// Class GooseRuntime.FortCheatManager_Goose
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_Goose : UFortCheatManager_Coupled {

	void GooseUpgradePlaneGuns(int32_t Index); // Function GooseRuntime.FortCheatManager_Goose.GooseUpgradePlaneGuns // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3b54d20
	void GooseToggleDrops(bool bToggleValue); // Function GooseRuntime.FortCheatManager_Goose.GooseToggleDrops // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3ce2684
	void GooseStealPlane(); // Function GooseRuntime.FortCheatManager_Goose.GooseStealPlane // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x203d3e0
	void GooseSetPlaneLives(int32_t NewLives); // Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneLives // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3b54d20
	void GooseSetPlaneHealthPercent(float Percent); // Function GooseRuntime.FortCheatManager_Goose.GooseSetPlaneHealthPercent // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3dc3d3c
	void GooseKillPlaneSquad(); // Function GooseRuntime.FortCheatManager_Goose.GooseKillPlaneSquad // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x203d3e0
	void GooseGivePlaneHealthGE(int32_t Index); // Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneHealthGE // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3b54d20
	void GooseGivePlaneEffect(int32_t Index); // Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneEffect // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3b54d20
	void GooseGivePlaneBoostGE(int32_t Index); // Function GooseRuntime.FortCheatManager_Goose.GooseGivePlaneBoostGE // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x3b54d20
};

