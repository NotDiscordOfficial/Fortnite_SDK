// WidgetBlueprintGeneratedClass IconTabButton.IconTabButton_C
// Size: 0xd78 (Inherited: 0xc20)
struct UIconTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UNormalBangWrapper_C* BangWrapper; // 0xc28(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc30(0x08)
	struct UHorizontalBox* ContentHB; // 0xc38(0x08)
	struct UImage* LeftSideImage; // 0xc40(0x08)
	struct USizeBox* SizeBoxShell; // 0xc48(0x08)
	struct FText ButtonText; // 0xc50(0x18)
	struct FSlateBrush IconBrush; // 0xc68(0x88)
	bool UseText; // 0xcf0(0x01)
	char pad_CF1[0x3]; // 0xcf1(0x03)
	struct FLinearColor SelectedIconTint; // 0xcf4(0x10)
	struct FLinearColor DeselectedIconTint; // 0xd04(0x10)
	struct FLinearColor HoveredIconTint; // 0xd14(0x10)
	bool bBangEnabled; // 0xd24(0x01)
	bool ChangeIconColorWhenSelected; // 0xd25(0x01)
	char pad_D26[0x2]; // 0xd26(0x02)
	struct FSlateColor SelectedIconColor; // 0xd28(0x28)
	struct FSlateColor UnSelectedIconColor; // 0xd50(0x28)

	void Play Hover Sound(); // Function IconTabButton.IconTabButton_C.Play Hover Sound // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetChangeIconColorWhenSelected(bool ChangeColorWhenSelected, struct FSlateColor SelectedColor, struct FSlateColor UnselectedColor); // Function IconTabButton.IconTabButton_C.SetChangeIconColorWhenSelected // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Update Bang State(bool bBangEnabled, int32_t Count); // Function IconTabButton.IconTabButton_C.Update Bang State // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetTutorialBorderStyle(struct UCommonBorderStyle* BorderStyle); // Function IconTabButton.IconTabButton_C.SetTutorialBorderStyle // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ShowText(); // Function IconTabButton.IconTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Icon(struct FSlateBrush IconBrush); // Function IconTabButton.IconTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Text(struct FText ButtonText); // Function IconTabButton.IconTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function IconTabButton.IconTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo); // Function IconTabButton.IconTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function IconTabButton.IconTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function IconTabButton.IconTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function IconTabButton.IconTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function IconTabButton.IconTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function IconTabButton.IconTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnEnabled(); // Function IconTabButton.IconTabButton_C.BP_OnEnabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDisabled(); // Function IconTabButton.IconTabButton_C.BP_OnDisabled // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentTextStyleChanged(); // Function IconTabButton.IconTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_IconTabButton(int32_t EntryPoint); // Function IconTabButton.IconTabButton_C.ExecuteUbergraph_IconTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

