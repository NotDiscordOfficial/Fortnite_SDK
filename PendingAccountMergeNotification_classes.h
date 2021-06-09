// WidgetBlueprintGeneratedClass PendingAccountMergeNotification.PendingAccountMergeNotification_C
// Size: 0xc50 (Inherited: 0xc20)
struct UPendingAccountMergeNotification_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Hover; // 0xc28(0x08)
	struct UBorder* Border_2; // 0xc30(0x08)
	struct UCommonActionWidget* CommonActionWidget_49; // 0xc38(0x08)
	struct UTextBlock* TextBlock_43; // 0xc40(0x08)
	struct UTextBlock* TextBlock_46; // 0xc48(0x08)

	void Construct(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Hovered(bool IsHovered); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Hovered // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnInputChanged(enum class ECommonInputType bNewInputType); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.OnInputChanged // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PendingAccountMergeNotification(int32_t EntryPoint); // Function PendingAccountMergeNotification.PendingAccountMergeNotification_C.ExecuteUbergraph_PendingAccountMergeNotification // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

