// WidgetBlueprintGeneratedClass ItemRatingIndicator.ItemRatingIndicator_C
// Size: 0x610 (Inherited: 0x5f0)
struct UItemRatingIndicator_C : UFortItemRatingIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x5f0(0x08)
	struct UImage* Moonbeam_Power_Back_2; // 0x5f8(0x08)
	struct UImage* PowerRatingIconImage; // 0x600(0x08)
	struct UStatNumericTextBlock_C* PowerRatingText; // 0x608(0x08)

	void HandleViewModelChanged(); // Function ItemRatingIndicator.ItemRatingIndicator_C.HandleViewModelChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemRatingIndicator.ItemRatingIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemRatingIndicator(int32_t EntryPoint); // Function ItemRatingIndicator.ItemRatingIndicator_C.ExecuteUbergraph_ItemRatingIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

