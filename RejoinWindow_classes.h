// WidgetBlueprintGeneratedClass RejoinWindow.RejoinWindow_C
// Size: 0x508 (Inherited: 0x4d0)
struct URejoinWindow_C : UFortRejoinWindowBase {
	struct UCommonTextBlock* AutorejoinText; // 0x4d0(0x08)
	struct UHorizontalBox* ButtonBox; // 0x4d8(0x08)
	struct UCommonTextBlock* Title; // 0x4e0(0x08)
	struct FMulticastInlineDelegate OnRequestAbandon; // 0x4e8(0x10)
	struct FMulticastInlineDelegate OnRequestRejoinRetry; // 0x4f8(0x10)

	void OnRequestRejoinRetry__DelegateSignature(); // Function RejoinWindow.RejoinWindow_C.OnRequestRejoinRetry__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnRequestAbandon__DelegateSignature(); // Function RejoinWindow.RejoinWindow_C.OnRequestAbandon__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

