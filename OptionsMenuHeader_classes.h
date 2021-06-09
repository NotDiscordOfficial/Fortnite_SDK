// WidgetBlueprintGeneratedClass OptionsMenuHeader.OptionsMenuHeader_C
// Size: 0x2b5 (Inherited: 0x288)
struct UOptionsMenuHeader_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* Image_1; // 0x290(0x08)
	struct USizeBox* SizeBoxContainer; // 0x298(0x08)
	struct USpacer* SpacerBottom; // 0x2a0(0x08)
	struct UCommonTextBlock* TextHeader; // 0x2a8(0x08)
	int32_t FontSizeMobile; // 0x2b0(0x04)
	enum class ESettingType LocalSettingType; // 0x2b4(0x01)

	void SetFontSize(struct UCommonTextBlock* Text, int32_t DefaultSize, int32_t MobileSize); // Function OptionsMenuHeader.OptionsMenuHeader_C.SetFontSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandlePawnSet(); // Function OptionsMenuHeader.OptionsMenuHeader_C.HandlePawnSet // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateSize(); // Function OptionsMenuHeader.OptionsMenuHeader_C.UpdateSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Center On Widget(); // Function OptionsMenuHeader.OptionsMenuHeader_C.Center On Widget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnItemSelectionChanged(bool bIsSelected); // Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function OptionsMenuHeader.OptionsMenuHeader_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function OptionsMenuHeader.OptionsMenuHeader_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function OptionsMenuHeader.OptionsMenuHeader_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnEntryReleased(); // Function OptionsMenuHeader.OptionsMenuHeader_C.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void CenterOnWidget_2(); // Function OptionsMenuHeader.OptionsMenuHeader_C.CenterOnWidget_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_OptionsMenuHeader(int32_t EntryPoint); // Function OptionsMenuHeader.OptionsMenuHeader_C.ExecuteUbergraph_OptionsMenuHeader // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

