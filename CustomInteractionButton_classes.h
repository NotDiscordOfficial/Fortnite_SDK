// WidgetBlueprintGeneratedClass CustomInteractionButton.CustomInteractionButton_C
// Size: 0xc90 (Inherited: 0xc48)
struct UCustomInteractionButton_C : UFortTextButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc48(0x08)
	struct UWidgetAnimation* OnHover; // 0xc50(0x08)
	struct UBorder* Border_InteractionIndicator; // 0xc58(0x08)
	struct UImage* InteractionIcon; // 0xc60(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0xc68(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xc70(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xc80(0x10)

	void BP_OnHovered(); // Function CustomInteractionButton.CustomInteractionButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function CustomInteractionButton.CustomInteractionButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_CustomInteractionButton(int32_t EntryPoint); // Function CustomInteractionButton.CustomInteractionButton_C.ExecuteUbergraph_CustomInteractionButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

