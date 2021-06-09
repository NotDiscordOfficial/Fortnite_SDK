// Class RebirthRuntime.FortAthenaMutator_Rebirth
// Size: 0x470 (Inherited: 0x3d0)
struct AFortAthenaMutator_Rebirth : AFortAthenaMutator_GameModeBase {
	char pad_3D0[0x18]; // 0x3d0(0x18)
	struct AFortAthenaMutator_ItemPromotion* ItemPromotionMutator; // 0x3e8(0x08)
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> ClientViewedPlayerState; // 0x3f0(0x08)
	struct TArray<struct FRebirthPlayerRarity> PlayerRarities; // 0x3f8(0x10)
	struct TArray<struct FRebirthPlayerRarity> CachedLocalPlayerRarities; // 0x408(0x10)
	enum class EFortRarity MaxItemRarity; // 0x418(0x01)
	enum class EFortRarity StartingItemRarity; // 0x419(0x01)
	char pad_41A[0x6]; // 0x41a(0x06)
	struct TMap<enum class EFortRarity, struct FString> KillFeedRarityStyles; // 0x420(0x50)

	void OnRep_PlayerRarities(); // Function RebirthRuntime.FortAthenaMutator_Rebirth.OnRep_PlayerRarities // (Final|Native|Private) // @ game+0x3dd3374
	void OnClientSpectatorChanged(struct AFortPlayerStateZone* SpectatingTarget); // Function RebirthRuntime.FortAthenaMutator_Rebirth.OnClientSpectatorChanged // (Final|Native|Private) // @ game+0x3dd32d8
};

// Class RebirthRuntime.FortCheatManager_Rebirth
// Size: 0x38 (Inherited: 0x38)
struct UFortCheatManager_Rebirth : UFortCheatManager_Coupled {

	void PromoteItems(); // Function RebirthRuntime.FortCheatManager_Rebirth.PromoteItems // (Final|BlueprintAuthorityOnly|Exec|Native|Public) // @ game+0x203d3e0
};

