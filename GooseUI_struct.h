// Enum GooseUI.ERadarIconState
enum class ERadarIconState : uint8 {
	Closed,
	Open,
	ERadarIconState_MAX,
};

// ScriptStruct GooseUI.GooseLeaderboardData
// Size: 0x28 (Inherited: 0x00)
struct FGooseLeaderboardData {
	struct FText SquadName; // 0x00(0x18)
	int32_t PlanesRemaining; // 0x18(0x04)
	int32_t NumOfPlaneEliminations; // 0x1c(0x04)
	bool bEnemySquad; // 0x20(0x01)
	char pad_21[0x7]; // 0x21(0x07)
};

// ScriptStruct GooseUI.GoosePickupDisplayData
// Size: 0x20 (Inherited: 0x00)
struct FGoosePickupDisplayData {
	struct FName ChestName; // 0x00(0x08)
	struct FText DisplayText; // 0x08(0x18)
};

// ScriptStruct GooseUI.GooseWeaponDisplayData
// Size: 0x38 (Inherited: 0x00)
struct FGooseWeaponDisplayData {
	struct FGameplayTag WeaponTag; // 0x00(0x08)
	struct FName ChestName; // 0x08(0x08)
	struct UTexture2D* IconTexture; // 0x10(0x08)
	struct UMaterialInterface* IconMaterial; // 0x18(0x08)
	struct FText DisplayText; // 0x20(0x18)
};

