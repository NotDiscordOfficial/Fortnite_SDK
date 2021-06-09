// WidgetBlueprintGeneratedClass ChatContainer.ChatContainer_C
// Size: 0x37b (Inherited: 0x300)
struct UChatContainer_C : UFortChatContainer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UWidgetAnimation* SizeAnimation; // 0x308(0x08)
	struct UWidgetAnimation* FadeAnimation; // 0x310(0x08)
	struct UCommonBorder* ChatBorder; // 0x318(0x08)
	struct UCommonBorder* CommonBorderBackground; // 0x320(0x08)
	struct UIconTextButton_C* ConsoleChatShortcut; // 0x328(0x08)
	struct UWidgetSwitcher* CursorModeSwitcher; // 0x330(0x08)
	struct UHorizontalBox* HBox_Messages; // 0x338(0x08)
	struct USizeBox* HBox_Tabs; // 0x340(0x08)
	struct UHorizontalBox* HudContentHBox; // 0x348(0x08)
	struct UKeybindWidget_C* KeybindWidget; // 0x350(0x08)
	struct USizeBox* SizeBox_ChatSize; // 0x358(0x08)
	struct USizeBox* SizeBox_ConsoleButtonSpaceProvider; // 0x360(0x08)
	struct UWidgetSwitcher* Switcher_SendButton; // 0x368(0x08)
	struct UCommonTextBlock* Text_Disabled; // 0x370(0x08)
	enum class EUMGSequencePlayMode NewVar_1; // 0x378(0x01)
	bool CurrentlyUsingGamepad; // 0x379(0x01)
	bool AnimationClosing; // 0x37a(0x01)

	void FocusChat(); // Function ChatContainer.ChatContainer_C.FocusChat // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetChatBoxStyle(); // Function ChatContainer.ChatContainer_C.SetChatBoxStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function ChatContainer.ChatContainer_C.OnKeyDown // (BlueprintCosmetic|Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleChatOpenChanged(bool bChatShouldBeOpen); // Function ChatContainer.ChatContainer_C.HandleChatOpenChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSizeAnimationComplete(); // Function ChatContainer.ChatContainer_C.OnSizeAnimationComplete // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleCursorModeChanged(bool bEnabled, struct FName ActionName, struct UUserWidget* Widget); // Function ChatContainer.ChatContainer_C.HandleCursorModeChanged // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnChatOpenChanged(bool bShouldBeOpen); // Function ChatContainer.ChatContainer_C.OnChatOpenChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSendButtonDisplayChanged(bool bShowSendButton); // Function ChatContainer.ChatContainer_C.OnSendButtonDisplayChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ChatContainer.ChatContainer_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function ChatContainer.ChatContainer_C.BndEvt__ConsoleChatShortcut_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function ChatContainer.ChatContainer_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function ChatContainer.ChatContainer_C.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ChatContainer(int32_t EntryPoint); // Function ChatContainer.ChatContainer_C.ExecuteUbergraph_ChatContainer // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

