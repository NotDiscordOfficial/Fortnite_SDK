// WidgetBlueprintGeneratedClass SocialConfirmationButton.SocialConfirmationButton_C
// Size: 0xc70 (Inherited: 0xc20)
struct USocialConfirmationButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* OnHover; // 0xc28(0x08)
	struct UBorder* Border_InteractionIndicator; // 0xc30(0x08)
	struct UImage* InteractionIcon; // 0xc38(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0xc40(0x08)
	struct UCommonTextBlock* Text_InteractionName; // 0xc48(0x08)
	bool bIsAccept; // 0xc50(0x01)
	char pad_C51[0x7]; // 0xc51(0x07)
	struct FText DisplayText; // 0xc58(0x18)

	void BP_OnHovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialConfirmationButton(int32_t EntryPoint); // Function SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

