// Class ValetModsRuntime.FortGameStateComponent_ValetMods
// Size: 0x120 (Inherited: 0xb0)
struct UFortGameStateComponent_ValetMods : UFortGameStateComponent {
	struct TArray<struct AFortValetModBase*> AllMods; // 0xb0(0x10)
	struct FGameplayTag TiresTag; // 0xc0(0x08)
	struct FScalableFloat MaxVehiclesCanSpawnWithMod; // 0xc8(0x28)
	struct FScalableFloat PercentChanceSpawnWithMod; // 0xf0(0x28)
	char pad_118[0x8]; // 0x118(0x08)

	bool TryInitValetMods(); // Function ValetModsRuntime.FortGameStateComponent_ValetMods.TryInitValetMods // (Final|Native|Public|BlueprintCallable) // @ game+0x3d3e0ec
};

// Class ValetModsRuntime.FortModInteractPoint
// Size: 0x250 (Inherited: 0x220)
struct AFortModInteractPoint : AActor {
	char pad_220[0x8]; // 0x220(0x08)
	struct FText InteractText; // 0x228(0x18)
	struct TWeakObjectPtr<struct AFortValetModGarage> ModGarage; // 0x240(0x08)
	struct TWeakObjectPtr<struct AFortValetModBase> Mod; // 0x248(0x08)
};

// Class ValetModsRuntime.FortValetModBase
// Size: 0x258 (Inherited: 0x220)
struct AFortValetModBase : AActor {
	struct FGameplayTagContainer ModTags; // 0x220(0x20)
	struct FText InteractText; // 0x240(0x18)

	void OnModAppliedClient(struct AFortDagwoodVehicle* ModdedVehicle); // Function ValetModsRuntime.FortValetModBase.OnModAppliedClient // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class ValetModsRuntime.FortValetMod_Tire
// Size: 0x3f8 (Inherited: 0x258)
struct AFortValetMod_Tire : AFortValetModBase {
	struct FTireInfo TireData; // 0x258(0x1a0)
};

// Class ValetModsRuntime.FortValetModGarage
// Size: 0x250 (Inherited: 0x220)
struct AFortValetModGarage : AActor {
	struct AFortDagwoodVehicle* CurrentVehicle; // 0x220(0x08)
	struct AFortModInteractPoint* ModInteractPointClass; // 0x228(0x08)
	struct TArray<struct FModInteractCategory> ModInteractCategories; // 0x230(0x10)
	struct TArray<struct AFortModInteractPoint*> SpawnedInteractPoints; // 0x240(0x10)

	void OnVehicleExit(struct AFortDagwoodVehicle* ExitingVehicle); // Function ValetModsRuntime.FortValetModGarage.OnVehicleExit // (Final|Native|Public|BlueprintCallable) // @ game+0x3d3e000
	void OnVehicleEnter(struct AFortDagwoodVehicle* NewVehicle); // Function ValetModsRuntime.FortValetModGarage.OnVehicleEnter // (Final|Native|Public|BlueprintCallable) // @ game+0x3d3df64
};

// Class ValetModsRuntime.FortVehicleModData
// Size: 0x28 (Inherited: 0x28)
struct UFortVehicleModData : UObject {
};

