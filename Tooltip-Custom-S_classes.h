// WidgetBlueprintGeneratedClass Tooltip-Custom-S.Tooltip-Custom-S_C
// Size: 0x2d0 (Inherited: 0x260)
struct UTooltip-Custom-S_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* <hr>; // 0x268(0x08)
	struct UHorizontalBox* Body HBox; // 0x270(0x08)
	struct UNamedSlot* Content Slot; // 0x278(0x08)
	struct UHorizontalBox* Header HBox; // 0x280(0x08)
	struct UImage* Icon-Header; // 0x288(0x08)
	struct USpacer* Spacer-Header; // 0x290(0x08)
	struct USpacer* Spacer-Icon; // 0x298(0x08)
	struct UTextBlock* Text-Header; // 0x2a0(0x08)
	struct FText HeaderText; // 0x2a8(0x18)
	struct USlateBrushAsset* Icon Brush; // 0x2c0(0x08)
	struct UUserWidget* ContentWidget; // 0x2c8(0x08)

	struct FSlateBrush Get Icon Brush(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Icon Brush // (Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FText Get Header Text(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Header Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	struct FText Get Body Text(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Get Body Text // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void Construct(); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_Tooltip-Custom-S(int32_t EntryPoint); // Function Tooltip-Custom-S.Tooltip-Custom-S_C.ExecuteUbergraph_Tooltip-Custom-S // (Final|UbergraphFunction) // @ game+0xda7c34
};

