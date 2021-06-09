// WidgetBlueprintGeneratedClass BladeMenu_SocialPanel.BladeMenu_SocialPanel_C
// Size: 0x368 (Inherited: 0x348)
struct UBladeMenu_SocialPanel_C : UFortBladeMenu_SocialPanel {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x348(0x08)
	struct UWidgetAnimation* OnClose; // 0x350(0x08)
	struct UWidgetAnimation* OnOpen; // 0x358(0x08)
	struct USafeZone* SafeZone_Content; // 0x360(0x08)

	void OnOpened(); // Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnOpened // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnClosed(); // Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnClosed // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCloseAnimationFinished(); // Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.OnCloseAnimationFinished // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BladeMenu_SocialPanel(int32_t EntryPoint); // Function BladeMenu_SocialPanel.BladeMenu_SocialPanel_C.ExecuteUbergraph_BladeMenu_SocialPanel // (Final|UbergraphFunction) // @ game+0xda7c34
};

