// WidgetBlueprintGeneratedClass AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C
// Size: 0x350 (Inherited: 0x338)
struct UAthenaFloatSliderVariantPicker_C : UFortFloatSliderVariantPicker {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x338(0x08)
	struct UOverlay* Panel_Value; // 0x340(0x08)
	struct USimpleMaterialProgressBar_C* Progress; // 0x348(0x08)

	void OnUpdateValue(float NormalizedValue); // Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.OnUpdateValue // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaFloatSliderVariantPicker(int32_t EntryPoint); // Function AthenaFloatSliderVariantPicker.AthenaFloatSliderVariantPicker_C.ExecuteUbergraph_AthenaFloatSliderVariantPicker // (Final|UbergraphFunction) // @ game+0xda7c34
};

