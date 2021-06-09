// Class RebirthUI.RebirthLimitedLivesWidgetBase
// Size: 0x338 (Inherited: 0x320)
struct URebirthLimitedLivesWidgetBase : ULTMWidgetBase {
	struct TWeakObjectPtr<struct AFortAthenaMutator_Rebirth> RebirthMutator; // 0x320(0x08)
	struct TWeakObjectPtr<struct AFortPlayerStateAthena> ViewedPlayerState; // 0x328(0x08)
	enum class EFortRarity CurrentRarity; // 0x330(0x01)
	char pad_331[0x3]; // 0x331(0x03)
	int32_t CurrentLivesRemaining; // 0x334(0x04)

	void UpdateWidgetRarity(bool bPlayAnimations); // Function RebirthUI.RebirthLimitedLivesWidgetBase.UpdateWidgetRarity // (Native|Event|Protected|BlueprintEvent) // @ game+0x3dd3e14
	void HandlePlayerRaritiesUpdated(); // Function RebirthUI.RebirthLimitedLivesWidgetBase.HandlePlayerRaritiesUpdated // (Final|Native|Protected) // @ game+0x3dd3e00
	void HandlePawnChanged(); // Function RebirthUI.RebirthLimitedLivesWidgetBase.HandlePawnChanged // (Final|Native|Protected) // @ game+0x3dd3dec
	void HandleLastLife(); // Function RebirthUI.RebirthLimitedLivesWidgetBase.HandleLastLife // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

