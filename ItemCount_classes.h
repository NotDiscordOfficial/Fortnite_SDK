// WidgetBlueprintGeneratedClass ItemCount.ItemCount_C
// Size: 0x2f1 (Inherited: 0x288)
struct UItemCount_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UCommonBorder* Border; // 0x290(0x08)
	struct UFortItemCountTextBlock* CountText; // 0x298(0x08)
	struct UCommonTextBlock* DisplayName; // 0x2a0(0x08)
	struct UFortLazyImage* IconLeft; // 0x2a8(0x08)
	struct UFortLazyImage* IconRight; // 0x2b0(0x08)
	struct UFortItemDefinition* ItemDefinition; // 0x2b8(0x08)
	struct UCommonTextStyle* TextStyle; // 0x2c0(0x08)
	enum class EFortItemCountStyle CountStyle; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	int32_t OverrideValue; // 0x2cc(0x04)
	enum class EFortBrushSize BrushSize; // 0x2d0(0x01)
	char pad_2D1[0x7]; // 0x2d1(0x07)
	struct FText Name; // 0x2d8(0x18)
	bool DisplayIconLeftSide; // 0x2f0(0x01)

	void SetBrushAndTextStyle(enum class EFortBrushSize InBrushSize, struct UCommonTextStyle* InStyle); // Function ItemCount.ItemCount_C.SetBrushAndTextStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateOverrideState(); // Function ItemCount.ItemCount_C.UpdateOverrideState // (Private|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetOverrideValue(int32_t OverrrideValue); // Function ItemCount.ItemCount_C.SetOverrideValue // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetIsBeingPreviewed(bool BeingPreviewed); // Function ItemCount.ItemCount_C.SetIsBeingPreviewed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetItemDefinition(struct UFortItemDefinition* ItemDefinition); // Function ItemCount.ItemCount_C.SetItemDefinition // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ItemCount.ItemCount_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function ItemCount.ItemCount_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ItemCount(int32_t EntryPoint); // Function ItemCount.ItemCount_C.ExecuteUbergraph_ItemCount // (Final|UbergraphFunction) // @ game+0xda7c34
};

