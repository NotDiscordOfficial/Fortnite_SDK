// WidgetBlueprintGeneratedClass AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C
// Size: 0x3ac (Inherited: 0x358)
struct UAthenaMOTDSimpleNewsWidget_C : UFortAthenaMOTDSimpleNewsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x358(0x08)
	struct UWidgetAnimation* Intro; // 0x360(0x08)
	struct UImage* Backplate; // 0x368(0x08)
	struct UImage* GlowBackground; // 0x370(0x08)
	struct UImage* Image_Background; // 0x378(0x08)
	struct UImage* Image_Border; // 0x380(0x08)
	struct UImage* Image_ColorFade; // 0x388(0x08)
	struct USizeBox* SizeBoxButtonSize; // 0x390(0x08)
	struct FColor DarkDefaultColor; // 0x398(0x04)
	struct FColor LightDefaultColor; // 0x39c(0x04)
	struct FColor PreviewDarkColor; // 0x3a0(0x04)
	bool TestPreviewColors; // 0x3a4(0x01)
	char pad_3A5[0x3]; // 0x3a5(0x03)
	struct FColor PreviewLightColor; // 0x3a8(0x04)

	void SetDynamicColors(struct FColor Dark, struct FColor Light); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.SetDynamicColors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnPopulateNews(struct FAthenaMOTDBase NewsEntry); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.OnPopulateNews // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnActivated(); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaMOTDSimpleNewsWidget(int32_t EntryPoint); // Function AthenaMOTDSimpleNewsWidget.AthenaMOTDSimpleNewsWidget_C.ExecuteUbergraph_AthenaMOTDSimpleNewsWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

