// Enum GooseRuntime.EGoosePickupState
enum class EGoosePickupState : uint8 {
	None,
	Falling,
	Deployed,
	ImpactedByPlane,
	DeployTimerUp,
	EGoosePickupState_MAX,
};

// ScriptStruct GooseRuntime.GooseWeaponTierData
// Size: 0x10 (Inherited: 0x00)
struct FGooseWeaponTierData {
	struct TArray<struct UFortWeaponItemDefinition*> WeaponItemDefinitions; // 0x00(0x10)
};

// ScriptStruct GooseRuntime.GooseDisplayData
// Size: 0x20 (Inherited: 0x00)
struct FGooseDisplayData {
	struct FName LootTableName; // 0x00(0x08)
	struct UStaticMesh* StaticMesh; // 0x08(0x08)
	struct TArray<struct UMaterialInterface*> MaterialsToSwap; // 0x10(0x10)
};

// ScriptStruct GooseRuntime.PlanePickupSpawnData
// Size: 0x30 (Inherited: 0x00)
struct FPlanePickupSpawnData {
	struct AAthenaGoosePickup* PickupClass; // 0x00(0x08)
	char pad_8[0x28]; // 0x08(0x28)
};

// ScriptStruct GooseRuntime.PlaneLootTypeEntry
// Size: 0x38 (Inherited: 0x00)
struct FPlaneLootTypeEntry {
	struct FScalableFloat RelativeWeight; // 0x00(0x28)
	struct TArray<struct FPlaneLootHeightEntry> LootHeightEntries; // 0x28(0x10)
};

// ScriptStruct GooseRuntime.PlaneLootHeightEntry
// Size: 0x88 (Inherited: 0x00)
struct FPlaneLootHeightEntry {
	struct FScalableFloat RelativeWeight; // 0x00(0x28)
	struct FScalableFloat MinHeightOffGround; // 0x28(0x28)
	struct FScalableFloat MaxHeightOffGround; // 0x50(0x28)
	struct TArray<struct FPlaneLootEntry> LootEntries; // 0x78(0x10)
};

// ScriptStruct GooseRuntime.PlaneLootEntry
// Size: 0x30 (Inherited: 0x00)
struct FPlaneLootEntry {
	struct FName LootTableName; // 0x00(0x08)
	struct FScalableFloat LootWeight; // 0x08(0x28)
};

// ScriptStruct GooseRuntime.PlaneSpawnData
// Size: 0x18 (Inherited: 0x00)
struct FPlaneSpawnData {
	char pad_0[0x18]; // 0x00(0x18)
};

// ScriptStruct GooseRuntime.PlaneSquadInfoArray
// Size: 0x130 (Inherited: 0x108)
struct FPlaneSquadInfoArray : FFastArraySerializer {
	struct TArray<struct FPlaneSquadInfo> SquadData; // 0x108(0x10)
	struct TArray<struct AFortPlayerControllerAthena*> RemovedControllers; // 0x118(0x10)
	char pad_128[0x8]; // 0x128(0x08)
};

// ScriptStruct GooseRuntime.PlaneSquadInfo
// Size: 0x50 (Inherited: 0x0c)
struct FPlaneSquadInfo : FFastArraySerializerItem {
	char pad_C[0x4]; // 0x0c(0x04)
	struct TArray<struct AFortPlayerControllerAthena*> Controllers; // 0x10(0x10)
	struct AFortPlayerStateAthena* LastDriver; // 0x20(0x08)
	char SquadId; // 0x28(0x01)
	char pad_29[0x3]; // 0x29(0x03)
	int32_t PlanesRemaining; // 0x2c(0x04)
	struct FName LastCollectedChest; // 0x30(0x08)
	int32_t NumOfPlaneEliminations; // 0x38(0x04)
	char pad_3C[0x4]; // 0x3c(0x04)
	struct AFortAthenaVehicle* LastCollectedChestVehicle; // 0x40(0x08)
	float LastCollectedChestServerTime; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

