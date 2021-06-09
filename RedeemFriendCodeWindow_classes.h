// WidgetBlueprintGeneratedClass RedeemFriendCodeWindow.RedeemFriendCodeWindow_C
// Size: 0x500 (Inherited: 0x498)
struct URedeemFriendCodeWindow_C : UFortRedeemCodeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UCloseButton_C* Button_Cancel; // 0x4a0(0x08)
	struct UIconTextButton_C* CancelButton; // 0x4a8(0x08)
	struct UWidgetSwitcher* EntryProgressSwitcher; // 0x4b0(0x08)
	struct UVerticalBox* EntryVBox; // 0x4b8(0x08)
	struct UCommonTextBlock* ErrorText; // 0x4c0(0x08)
	struct UImage* Image_1; // 0x4c8(0x08)
	struct ULightbox_C* Lightbox; // 0x4d0(0x08)
	struct USizeBox* ProgressSizeBox; // 0x4d8(0x08)
	struct UCommonTextBlock* ProgressText; // 0x4e0(0x08)
	struct UVerticalBox* ProgressVBox; // 0x4e8(0x08)
	struct UIconTextButton_C* RedeemButton; // 0x4f0(0x08)
	struct UCommonTextBlock* Title; // 0x4f8(0x08)

	void HandleRedeemCodeComplete(bool Success, enum class ERedeemCodeFailureReason FailureReason); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.HandleRedeemCodeComplete // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Close(); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Close // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__CancelButton_K2Node_ComponentBoundEvent_57_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__SendButton_K2Node_ComponentBoundEvent_75_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void OnRedeemFriendCodeComplete(bool bSuccess, enum class ERedeemCodeFailureReason FailureReason); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.OnRedeemFriendCodeComplete // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__FriendCodeEntry_K2Node_ComponentBoundEvent_0_OnEditableTextChangedEvent__DelegateSignature // (HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(struct UCommonButtonLegacy* Button); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RedeemFriendCodeWindow(int32_t EntryPoint); // Function RedeemFriendCodeWindow.RedeemFriendCodeWindow_C.ExecuteUbergraph_RedeemFriendCodeWindow // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

