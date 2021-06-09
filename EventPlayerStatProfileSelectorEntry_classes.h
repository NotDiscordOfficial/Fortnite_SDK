// WidgetBlueprintGeneratedClass EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C
// Size: 0xc78 (Inherited: 0xc40)
struct UEventPlayerStatProfileSelectorEntry_C : UFortEventPlayerStatProfileSelectorEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UWidgetAnimation* Selected; // 0xc48(0x08)
	struct UImage* Image_SelectedBG; // 0xc50(0x08)
	struct FMulticastInlineDelegate Hovered; // 0xc58(0x10)
	struct FMulticastInlineDelegate Unhovered; // 0xc68(0x10)

	void BP_OnHovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventPlayerStatProfileSelectorEntry(int32_t EntryPoint); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.ExecuteUbergraph_EventPlayerStatProfileSelectorEntry // (Final|UbergraphFunction) // @ game+0xda7c34
	void Unhovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Unhovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Hovered__DelegateSignature(); // Function EventPlayerStatProfileSelectorEntry.EventPlayerStatProfileSelectorEntry_C.Hovered__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

