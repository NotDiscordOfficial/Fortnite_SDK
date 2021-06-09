// WidgetBlueprintGeneratedClass AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C
// Size: 0xcb8 (Inherited: 0xc60)
struct UAthenaCustomizationPickerTileButton_C : UAthenaCustomizationPickerTileButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc60(0x08)
	struct UWidgetAnimation* OnHover; // 0xc68(0x08)
	struct UImage* ExclusiveFill; // 0xc70(0x08)
	struct UOverlay* ExclusiveWarningOvr; // 0xc78(0x08)
	struct UFortLazyImage* Image_Equipped; // 0xc80(0x08)
	struct UOverlay* NullItemOverlay; // 0xc88(0x08)
	struct UWidgetSwitcher* RootWidgetSwitcher; // 0xc90(0x08)
	struct UImage* UnownedDampen; // 0xc98(0x08)
	bool IsSlottedSomewhere; // 0xca0(0x01)
	char pad_CA1[0x7]; // 0xca1(0x07)
	struct FMulticastInlineDelegate PickedButtonHovered; // 0xca8(0x10)

	void HandleEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.HandleEquippedStateChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnListItemObjectSet(struct UObject* ListItemObject); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnChangeOwnedState(bool bOwned); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnChangeOwnedState // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEquippedStateChanged(bool bEquipped, bool bOnDifferentSlot); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnEquippedStateChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateExclusiveWarning(bool bShouldWarn); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.OnUpdateExclusiveWarning // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaCustomizationPickerTileButton(int32_t EntryPoint); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.ExecuteUbergraph_AthenaCustomizationPickerTileButton // (Final|UbergraphFunction) // @ game+0xda7c34
	void PickedButtonHovered__DelegateSignature(struct UWidgetSwitcher* WidgetSwitcher); // Function AthenaCustomizationPickerTileButton.AthenaCustomizationPickerTileButton_C.PickedButtonHovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

