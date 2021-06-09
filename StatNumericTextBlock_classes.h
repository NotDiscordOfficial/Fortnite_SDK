// WidgetBlueprintGeneratedClass StatNumericTextBlock.StatNumericTextBlock_C
// Size: 0x2b0 (Inherited: 0x288)
struct UStatNumericTextBlock_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UImage* ComparisonArrowImage; // 0x290(0x08)
	struct UCommonNumericTextBlock* NumericText; // 0x298(0x08)
	enum class EFortBuffState Buff State; // 0x2a0(0x01)
	char pad_2A1[0x7]; // 0x2a1(0x07)
	struct UCommonTextStyle* Numeric Text Style; // 0x2a8(0x08)

	void SetComparisonState(enum class EFortBuffState Buff State); // Function StatNumericTextBlock.StatNumericTextBlock_C.SetComparisonState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateComparison(); // Function StatNumericTextBlock.StatNumericTextBlock_C.UpdateComparison // (Private|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function StatNumericTextBlock.StatNumericTextBlock_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function StatNumericTextBlock.StatNumericTextBlock_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StatNumericTextBlock(int32_t EntryPoint); // Function StatNumericTextBlock.StatNumericTextBlock_C.ExecuteUbergraph_StatNumericTextBlock // (Final|UbergraphFunction) // @ game+0xda7c34
};

