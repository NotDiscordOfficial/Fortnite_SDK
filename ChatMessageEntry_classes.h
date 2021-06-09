// WidgetBlueprintGeneratedClass ChatMessageEntry.ChatMessageEntry_C
// Size: 0x3f0 (Inherited: 0x3c0)
struct UChatMessageEntry_C : UFortChatMessageEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3c0(0x08)
	struct UCommonBorder* MessageBackground; // 0x3c8(0x08)
	struct UBorder* MessageWrapper; // 0x3d0(0x08)
	struct UCommonBorderStyle* DefaultStyle_1; // 0x3d8(0x08)
	struct UCommonBorderStyle* SelfStyle; // 0x3e0(0x08)
	struct UCommonBorderStyle* OtherUserStyle; // 0x3e8(0x08)

	void HandleSelectionStatusChanged(bool bIsSelected); // Function ChatMessageEntry.ChatMessageEntry_C.HandleSelectionStatusChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature(); // Function ChatMessageEntry.ChatMessageEntry_C.BndEvt__Button_FocusTarget_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnFocusedChanged(bool bIsFocused); // Function ChatMessageEntry.ChatMessageEntry_C.OnFocusedChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnEntryUpdated_2(); // Function ChatMessageEntry.ChatMessageEntry_C.OnEntryUpdated_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ChatMessageEntry(int32_t EntryPoint); // Function ChatMessageEntry.ChatMessageEntry_C.ExecuteUbergraph_ChatMessageEntry // (Final|UbergraphFunction) // @ game+0xda7c34
};

