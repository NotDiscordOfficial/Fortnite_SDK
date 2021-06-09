// WidgetBlueprintGeneratedClass ItemCardWidget.ItemCardWidget_C
// Size: 0xd18 (Inherited: 0xc20)
struct UItemCardWidget_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Show; // 0xc28(0x08)
	struct UFortMultiSizeItemCard* FortMultiSizeItemCard_1; // 0xc30(0x08)
	struct FMulticastInlineDelegate OnHoveredEvent; // 0xc38(0x10)
	struct FFortReceivedItemLootInfo ItemReceivedInfo_BP; // 0xc48(0xc8)
	struct USoundBase* SoundOnItemCardShow; // 0xd10(0x08)

	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function ItemCardWidget.ItemCardWidget_C.OnFocusReceived // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCentered(); // Function ItemCardWidget.ItemCardWidget_C.OnCentered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayShow(int32_t idx); // Function ItemCardWidget.ItemCardWidget_C.PlayShow // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function ItemCardWidget.ItemCardWidget_C.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function ItemCardWidget.ItemCardWidget_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemCardWidget.ItemCardWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemCardWidget(int32_t EntryPoint); // Function ItemCardWidget.ItemCardWidget_C.ExecuteUbergraph_ItemCardWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnHoveredEvent__DelegateSignature(struct FFortReceivedItemLootInfo NewParam); // Function ItemCardWidget.ItemCardWidget_C.OnHoveredEvent__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

