// WidgetBlueprintGeneratedClass AthenaStoreReward.AthenaStoreReward_C
// Size: 0xcd0 (Inherited: 0xc80)
struct UAthenaStoreReward_C : UFortAthenaReward {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc80(0x08)
	struct UWidgetAnimation* Fade; // 0xc88(0x08)
	struct UWidgetAnimation* Intro; // 0xc90(0x08)
	struct UImage* baking; // 0xc98(0x08)
	struct UImage* Check; // 0xca0(0x08)
	struct UCommonTextBlock* OwnedText; // 0xca8(0x08)
	struct UImage* RarityFlare; // 0xcb0(0x08)
	struct UImage* RevealOverlay; // 0xcb8(0x08)
	struct UFortItem* StrongItemToRepresent; // 0xcc0(0x08)
	struct USoundBase* SoundOnReveal; // 0xcc8(0x08)

	void EnableRarityFlare(); // Function AthenaStoreReward.AthenaStoreReward_C.EnableRarityFlare // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayIntro(); // Function AthenaStoreReward.AthenaStoreReward_C.PlayIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRepresentedItemSet(struct UFortItem* RepresentedItem); // Function AthenaStoreReward.AthenaStoreReward_C.OnRepresentedItemSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaStoreReward(int32_t EntryPoint); // Function AthenaStoreReward.AthenaStoreReward_C.ExecuteUbergraph_AthenaStoreReward // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

