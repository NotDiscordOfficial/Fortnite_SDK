// WidgetBlueprintGeneratedClass NPCStatusWidgetBar.NPCStatusWidgetBar_C
// Size: 0x2d0 (Inherited: 0x260)
struct UNPCStatusWidgetBar_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct USizeBox* BarSizeBox; // 0x268(0x08)
	struct UImage* Image_BarBG; // 0x270(0x08)
	struct UImage* Image_CastShadow; // 0x278(0x08)
	struct USimpleMaterialProgressBar_C* ProgressBarDelta; // 0x280(0x08)
	struct USimpleMaterialProgressBar_C* ProgressBarFill; // 0x288(0x08)
	struct FLinearColor FillColor1; // 0x290(0x10)
	struct FLinearColor FillColor2; // 0x2a0(0x10)
	struct FLinearColor Delta1; // 0x2b0(0x10)
	struct FLinearColor Delta2; // 0x2c0(0x10)

	void PreConstruct(bool IsDesignTime); // Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetPercent(float Value); // Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.SetPercent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_NPCStatusWidgetBar(int32_t EntryPoint); // Function NPCStatusWidgetBar.NPCStatusWidgetBar_C.ExecuteUbergraph_NPCStatusWidgetBar // (Final|UbergraphFunction) // @ game+0xda7c34
};

