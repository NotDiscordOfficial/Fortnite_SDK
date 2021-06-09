// WidgetBlueprintGeneratedClass SettingEntryBackground.SettingEntryBackground_C
// Size: 0x288 (Inherited: 0x260)
struct USettingEntryBackground_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UWidgetAnimation* OnHover; // 0x268(0x08)
	struct UNamedSlot* Content; // 0x270(0x08)
	struct FMulticastInlineDelegate OnMouseEnterChanged; // 0x278(0x10)

	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function SettingEntryBackground.SettingEntryBackground_C.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function SettingEntryBackground.SettingEntryBackground_C.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SettingEntryBackground(int32_t EntryPoint); // Function SettingEntryBackground.SettingEntryBackground_C.ExecuteUbergraph_SettingEntryBackground // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnMouseEnterChanged__DelegateSignature(bool IsEnterEvent); // Function SettingEntryBackground.SettingEntryBackground_C.OnMouseEnterChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

