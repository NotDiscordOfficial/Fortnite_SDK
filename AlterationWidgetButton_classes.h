// WidgetBlueprintGeneratedClass AlterationWidgetButton.AlterationWidgetButton_C
// Size: 0xcf0 (Inherited: 0xc28)
struct UAlterationWidgetButton_C : UFortAlterationButtonWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* PanelLoad; // 0xc30(0x08)
	struct UWidgetAnimation* TriangelUpgrade; // 0xc38(0x08)
	struct UAlterationWidget_C* AlterationWidget; // 0xc40(0x08)
	struct UImage* Flash; // 0xc48(0x08)
	struct UImage* Shine; // 0xc50(0x08)
	struct UImage* TriangleUpgrade; // 0xc58(0x08)
	bool bIncludeName; // 0xc60(0x01)
	bool bIncludeShortDescription; // 0xc61(0x01)
	bool bIncludeDescription; // 0xc62(0x01)
	enum class EFortBrushSize IconSize; // 0xc63(0x01)
	bool bUseLargeFormatName; // 0xc64(0x01)
	bool ShouldShowRarity; // 0xc65(0x01)
	char pad_C66[0x2]; // 0xc66(0x02)
	struct UMaterialInstanceDynamic* Triangles Upgrade; // 0xc68(0x08)
	struct FFortRarityItemData RarityData; // 0xc70(0x80)

	void Setup Triangles(); // Function AlterationWidgetButton.AlterationWidgetButton_C.Setup Triangles // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Colors(); // Function AlterationWidgetButton.AlterationWidgetButton_C.Update Colors // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IntroStart(); // Function AlterationWidgetButton.AlterationWidgetButton_C.IntroStart // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IntroReset(); // Function AlterationWidgetButton.AlterationWidgetButton_C.IntroReset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerModificationAnimation(); // Function AlterationWidgetButton.AlterationWidgetButton_C.TriggerModificationAnimation // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSetup(); // Function AlterationWidgetButton.AlterationWidgetButton_C.OnSetup // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AlterationWidgetButton.AlterationWidgetButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AlterationWidgetButton(int32_t EntryPoint); // Function AlterationWidgetButton.AlterationWidgetButton_C.ExecuteUbergraph_AlterationWidgetButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

