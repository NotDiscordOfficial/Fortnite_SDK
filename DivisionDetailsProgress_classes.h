// WidgetBlueprintGeneratedClass DivisionDetailsProgress.DivisionDetailsProgress_C
// Size: 0x2b0 (Inherited: 0x298)
struct UDivisionDetailsProgress_C : UFortShowdownDivisionRankProgressView {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UCommonBorder* CommonBorder_CalloutOffset; // 0x2a0(0x08)
	struct USizeBox* ProgressBarContainer; // 0x2a8(0x08)

	void OnSetInProgress(float NewPercent, bool bIsInProgress); // Function DivisionDetailsProgress.DivisionDetailsProgress_C.OnSetInProgress // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DivisionDetailsProgress(int32_t EntryPoint); // Function DivisionDetailsProgress.DivisionDetailsProgress_C.ExecuteUbergraph_DivisionDetailsProgress // (Final|UbergraphFunction) // @ game+0xda7c34
};

