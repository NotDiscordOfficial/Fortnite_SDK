// WidgetBlueprintGeneratedClass windowchromebuttons.windowchromebuttons_C
// Size: 0x2a8 (Inherited: 0x288)
struct Uwindowchromebuttons_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* FadeOut; // 0x290(0x08)
	struct UWidgetAnimation* FadeIn; // 0x298(0x08)
	struct UWindowTitleBarArea* WindowTitleBarArea_108; // 0x2a0(0x08)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function windowchromebuttons.windowchromebuttons_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function windowchromebuttons.windowchromebuttons_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_windowchromebuttons(int32_t EntryPoint); // Function windowchromebuttons.windowchromebuttons_C.ExecuteUbergraph_windowchromebuttons // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

