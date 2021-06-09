// WidgetBlueprintGeneratedClass EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C
// Size: 0x2c0 (Inherited: 0x290)
struct UEmergencyNoticeWidgetBR_C : UEmergencyNoticeBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x290(0x08)
	struct UWidgetAnimation* Entrance; // 0x298(0x08)
	struct UCommonTextBlock* BodyText; // 0x2a0(0x08)
	struct UHorizontalBox* HB_Content; // 0x2a8(0x08)
	struct UCommonTextBlock* TitleText; // 0x2b0(0x08)
	struct USizeBox* VisibilitySB; // 0x2b8(0x08)

	void Show Notice(); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.Show Notice // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowNotice(struct FText Title, struct FText Body); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ShowNotice // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void HideNotice(); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.HideNotice // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_EmergencyNoticeWidgetBR(int32_t EntryPoint); // Function EmergencyNoticeWidgetBR.EmergencyNoticeWidgetBR_C.ExecuteUbergraph_EmergencyNoticeWidgetBR // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

