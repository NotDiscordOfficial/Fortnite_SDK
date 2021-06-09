// WidgetBlueprintGeneratedClass AthenaChatWidget.AthenaChatWidget_C
// Size: 0x390 (Inherited: 0x340)
struct UAthenaChatWidget_C : UAthenaActivatableChatWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x340(0x08)
	struct FDataTableRowHandle CloseUserListAction; // 0x348(0x10)
	struct FDataTableRowHandle OpenUserListAction; // 0x358(0x10)
	struct FDataTableRowHandle CurrentUserListAction; // 0x368(0x10)
	bool bEnteringChat; // 0x378(0x01)
	char pad_379[0x7]; // 0x379(0x07)
	struct FMulticastInlineDelegate OnEnteredChat; // 0x380(0x10)

	void FocusChat(bool bFocus); // Function AthenaChatWidget.AthenaChatWidget_C.FocusChat // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaChatWidget(int32_t EntryPoint); // Function AthenaChatWidget.AthenaChatWidget_C.ExecuteUbergraph_AthenaChatWidget // (Final|UbergraphFunction) // @ game+0xda7c34
	void OnEnteredChat__DelegateSignature(bool EnteredChat); // Function AthenaChatWidget.AthenaChatWidget_C.OnEnteredChat__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

