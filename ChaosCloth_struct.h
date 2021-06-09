// Enum ChaosCloth.EChaosClothTetherMode
enum class EChaosClothTetherMode : uint8 {
	FastTetherFastLength,
	AccurateTetherFastLength,
	AccurateTetherAccurateLength,
	MaxChaosClothTetherMode,
	EChaosClothTetherMode_MAX,
};

// Enum ChaosCloth.EChaosWeightMapTarget
enum class EChaosWeightMapTarget : uint8 {
	None,
	MaxDistance,
	BackstopDistance,
	BackstopRadius,
	AnimDriveStiffness,
	AnimDriveDamping,
	TetherStiffness,
	TetherScale,
	Drag,
	Lift,
	EdgeStiffness,
	BendingStiffness,
	AreaStiffness,
	EChaosWeightMapTarget_MAX,
};

// ScriptStruct ChaosCloth.ChaosClothWeightedValue
// Size: 0x08 (Inherited: 0x00)
struct FChaosClothWeightedValue {
	float Low; // 0x00(0x04)
	float High; // 0x04(0x04)
};

