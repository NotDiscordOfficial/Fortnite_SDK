// WidgetBlueprintGeneratedClass BuiltInEmotePopUP.BuiltInEmotePopUP_C
// Size: 0x350 (Inherited: 0x330)
struct UBuiltInEmotePopUP_C : UFortStoreSkinDetailsPopup {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x330(0x08)
	struct UWidgetAnimation* FadeAnim; // 0x338(0x08)
	struct UWidgetAnimation* IntroAnim; // 0x340(0x08)
	struct UBorder* Border_ItemRarity; // 0x348(0x08)

	void RequestFadeIn(); // Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequestFadeIn // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void RequuestFadeOut(); // Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.RequuestFadeOut // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BuiltInEmotePopUP(int32_t EntryPoint); // Function BuiltInEmotePopUP.BuiltInEmotePopUP_C.ExecuteUbergraph_BuiltInEmotePopUP // (Final|UbergraphFunction) // @ game+0xda7c34
};

