// WidgetBlueprintGeneratedClass SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C
// Size: 0xc91 (Inherited: 0xc20)
struct USoloButton_BattlePassPurchaseMobile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Pressed; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UBorder* Border_Container; // 0xc38(0x08)
	struct UImage* ButtonBacking; // 0xc40(0x08)
	struct UScaleBox* ScaleBox_1; // 0xc48(0x08)
	struct USizeBox* SizeBox_Control; // 0xc50(0x08)
	struct UCommonTextBlock* Text_ButtonAction; // 0xc58(0x08)
	struct FText Button Description; // 0xc60(0x18)
	bool FontSizeOveride; // 0xc78(0x01)
	char pad_C79[0x3]; // 0xc79(0x03)
	int32_t FontSize; // 0xc7c(0x04)
	struct FMargin Padding Overide; // 0xc80(0x10)
	bool PaddingOveride; // 0xc90(0x01)

	void SetText(struct FText Text); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSize(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.HandleSize // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SoloButton_BattlePassPurchaseMobile(int32_t EntryPoint); // Function SoloButton_BattlePassPurchaseMobile.SoloButton_BattlePassPurchaseMobile_C.ExecuteUbergraph_SoloButton_BattlePassPurchaseMobile // (Final|UbergraphFunction) // @ game+0xda7c34
};

