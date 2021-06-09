// WidgetBlueprintGeneratedClass EventScoreRow.EventScoreRow_C
// Size: 0x281 (Inherited: 0x260)
struct UEventScoreRow_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* ImageDivider; // 0x268(0x08)
	struct UCommonTextBlock* StatLabelText; // 0x270(0x08)
	struct UCommonTextBlock* StatValueText; // 0x278(0x08)
	bool FinalEntry; // 0x280(0x01)

	void SetData(struct FText Label, int32_t Value); // Function EventScoreRow.EventScoreRow_C.SetData // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function EventScoreRow.EventScoreRow_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EventScoreRow(int32_t EntryPoint); // Function EventScoreRow.EventScoreRow_C.ExecuteUbergraph_EventScoreRow // (Final|UbergraphFunction) // @ game+0xda7c34
};

