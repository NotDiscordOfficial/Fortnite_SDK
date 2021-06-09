// WidgetBlueprintGeneratedClass PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C
// Size: 0x4c8 (Inherited: 0x490)
struct UPlayerClearPersistenceIslandDataPromptWidget_C : UFortActivatablePanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UIconTextButton_C* ApplyButton; // 0x498(0x08)
	struct UIconTextButton_C* CancelButton; // 0x4a0(0x08)
	struct UCloseButton_C* CloseButton; // 0x4a8(0x08)
	struct ULightbox_C* Lightbox; // 0x4b0(0x08)
	struct UCommonTextBlock* Text_CurrentDescription; // 0x4b8(0x08)
	struct UCommonTextBlock* Title; // 0x4c0(0x08)

	void SetDescription(struct FText InDescription); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.SetDescription // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.BndEvt__ApplyButton_K2Node_ComponentBoundEvent_59_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_76_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget(int32_t EntryPoint); // Function PlayerClearPersistenceIslandDataPromptWidget.PlayerClearPersistenceIslandDataPromptWidget_C.ExecuteUbergraph_PlayerClearPersistenceIslandDataPromptWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

