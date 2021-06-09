// WidgetBlueprintGeneratedClass LeavePlatformPartyButton.LeavePlatformPartyButton_C
// Size: 0xc38 (Inherited: 0xc20)
struct ULeavePlatformPartyButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* OnHover; // 0xc28(0x08)
	struct UCommonTextBlock* CommonTextBlock_42; // 0xc30(0x08)

	void SetText(struct FText New Text); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_LeavePlatformPartyButton(int32_t EntryPoint); // Function LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

