// Class TitaniumRuntime.FortAthenaMutator_Titanium
// Size: 0x408 (Inherited: 0x3d0)
struct AFortAthenaMutator_Titanium : AFortAthenaMutator_GameModeBase {
	struct UDataTable* UpgradeTable; // 0x3d0(0x08)
	struct FGameplayTagContainer ValidWeaponTags; // 0x3d8(0x20)
	enum class EFortRarity HighestUpgradeTier; // 0x3f8(0x01)
	char pad_3F9[0x7]; // 0x3f9(0x07)
	struct UGameplayEffect* UpgradedGameplayEffect; // 0x400(0x08)
};

// Class TitaniumRuntime.TitaniumPlayerComponent
// Size: 0xc0 (Inherited: 0xb0)
struct UTitaniumPlayerComponent : UFortControllerComponent {
	struct FMulticastInlineDelegate OnPlayerEarnedElimination; // 0xb0(0x10)

	void Client_PlayerEarnedElimination(struct UFortWorldItemDefinition* UpgradedWeapon); // Function TitaniumRuntime.TitaniumPlayerComponent.Client_PlayerEarnedElimination // (Net|Native|Event|Public|NetClient) // @ game+0x3dd3f70
};

