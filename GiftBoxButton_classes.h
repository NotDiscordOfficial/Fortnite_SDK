// WidgetBlueprintGeneratedClass GiftBoxButton.GiftBoxButton_C
// Size: 0xc60 (Inherited: 0xc38)
struct UGiftBoxButton_C : UFortGiftBoxButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc38(0x08)
	struct UWidgetAnimation* Hover; // 0xc40(0x08)
	struct UWidgetAnimation* Deselected; // 0xc48(0x08)
	struct UWidgetAnimation* Selected; // 0xc50(0x08)
	struct UImage* ButtonSelected; // 0xc58(0x08)

	void Construct(); // Function GiftBoxButton.GiftBoxButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PlayGiftSelectedAnimation(bool bIsSelected); // Function GiftBoxButton.GiftBoxButton_C.PlayGiftSelectedAnimation // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GiftBoxButton(int32_t EntryPoint); // Function GiftBoxButton.GiftBoxButton_C.ExecuteUbergraph_GiftBoxButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

