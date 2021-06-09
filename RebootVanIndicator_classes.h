// WidgetBlueprintGeneratedClass RebootVanIndicator.RebootVanIndicator_C
// Size: 0x568 (Inherited: 0x528)
struct URebootVanIndicator_C : UAthenaRebootVanIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* Intro; // 0x530(0x08)
	struct UBorder* Border_Nameplate; // 0x538(0x08)
	struct UImage* Icon; // 0x540(0x08)
	struct UImage* Image_RebootIcon; // 0x548(0x08)
	struct UImage* Image_SmallIndicator; // 0x550(0x08)
	struct UImage* Image_Van; // 0x558(0x08)
	struct USpacer* IndicatorSpacer; // 0x560(0x08)

	void Construct(); // Function RebootVanIndicator.RebootVanIndicator_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RebootVanIndicator(int32_t EntryPoint); // Function RebootVanIndicator.RebootVanIndicator_C.ExecuteUbergraph_RebootVanIndicator // (Final|UbergraphFunction) // @ game+0xda7c34
};

