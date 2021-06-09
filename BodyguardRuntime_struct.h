// Enum BodyguardRuntime.EBodyguardPlayerRole
enum class EBodyguardPlayerRole : uint8 {
	None,
	Bodyguard,
	VIP,
	MAX,
};

// ScriptStruct BodyguardRuntime.BodyguardVIPPlayerData
// Size: 0x18 (Inherited: 0x00)
struct FBodyguardVIPPlayerData {
	struct AFortPlayerStateAthena* PlayerState; // 0x00(0x08)
	float CurrentHealth; // 0x08(0x04)
	float MaxHealth; // 0x0c(0x04)
	bool bIsDBNO; // 0x10(0x01)
	bool bIsBeingRevived; // 0x11(0x01)
	bool bAllowItemPickup; // 0x12(0x01)
	bool bIsDead; // 0x13(0x01)
	char pad_14[0x4]; // 0x14(0x04)
};

// ScriptStruct BodyguardRuntime.BodyguardVIPDeathState
// Size: 0x02 (Inherited: 0x00)
struct FBodyguardVIPDeathState {
	char TeamNum; // 0x00(0x01)
	bool bIsDead; // 0x01(0x01)
};

// ScriptStruct BodyguardRuntime.BodyGuardPartOverrideData
// Size: 0x38 (Inherited: 0x00)
struct FBodyGuardPartOverrideData {
	enum class EFortCustomGender Gender; // 0x00(0x01)
	enum class EFortCustomBodyType BodyType; // 0x01(0x01)
	char pad_2[0x6]; // 0x02(0x06)
	struct TArray<struct UCustomCharacterPart*> PartsToSwapIn; // 0x08(0x10)
	bool bShouldRemoveExtras; // 0x18(0x01)
	char pad_19[0x7]; // 0x19(0x07)
	struct TArray<struct UCustomCharacterPart*> PartsToAddIfSpecialTags; // 0x20(0x10)
	struct FGameplayTag CosmeticSwapTag; // 0x30(0x08)
};

