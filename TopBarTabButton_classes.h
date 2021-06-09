// WidgetBlueprintGeneratedClass TopBarTabButton.TopBarTabButton_C
// Size: 0xd10 (Inherited: 0xc70)
struct UTopBarTabButton_C : UFortTopBarTabButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc70(0x08)
	struct UWidgetAnimation* Hovered; // 0xc78(0x08)
	struct UWidgetAnimation* Selected; // 0xc80(0x08)
	struct USizeBox* SizeBox_1; // 0xc88(0x08)
	struct USizeBox* SizeBox_2; // 0xc90(0x08)
	struct USizeBox* SizeBox_3; // 0xc98(0x08)
	struct UVerticalBox* VerticalBox_1; // 0xca0(0x08)
	struct UMaterialInstanceDynamic* MID_ButtonBorder; // 0xca8(0x08)
	bool PreviewMobileStyle; // 0xcb0(0x01)
	char pad_CB1[0x3]; // 0xcb1(0x03)
	struct FFloatSpringState SpringState_ShapeChange; // 0xcb4(0x08)
	struct FFloatSpringState SpringState_Scale; // 0xcbc(0x08)
	float Spring_Scale_Target; // 0xcc4(0x04)
	float MassMultiply; // 0xcc8(0x04)
	float DampenMultiply; // 0xccc(0x04)
	float StiffnessMultiply; // 0xcd0(0x04)
	bool VisualSelectionState; // 0xcd4(0x01)
	char pad_CD5[0x3]; // 0xcd5(0x03)
	float RandomFloat_Top; // 0xcd8(0x04)
	float RandomFloat_Left; // 0xcdc(0x04)
	float RandomFloat_Right; // 0xce0(0x04)
	float RandomFloat_Bottom; // 0xce4(0x04)
	float ShapeChange_New; // 0xce8(0x04)
	float ShapeChange_Target; // 0xcec(0x04)
	bool UpdateSpring; // 0xcf0(0x01)
	char pad_CF1[0x7]; // 0xcf1(0x07)
	struct FText ButtonText; // 0xcf8(0x18)

	void OverrideIcon(bool Show, struct FSlateBrush inSlateBrush); // Function TopBarTabButton.TopBarTabButton_C.OverrideIcon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetText(struct FText ButtonText); // Function TopBarTabButton.TopBarTabButton_C.SetText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdateMIDWithRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.UpdateMIDWithRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SeedRandomValues(); // Function TopBarTabButton.TopBarTabButton_C.SeedRandomValues // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void InitializeButtonBorderMID(); // Function TopBarTabButton.TopBarTabButton_C.InitializeButtonBorderMID // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleSelectionChangedVisuals(bool bIsSelected); // Function TopBarTabButton.TopBarTabButton_C.HandleSelectionChangedVisuals // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentTextStyleChanged(); // Function TopBarTabButton.TopBarTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function TopBarTabButton.TopBarTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSelectedChangedEvent(struct UCommonButtonLegacy* Button, bool Selected); // Function TopBarTabButton.TopBarTabButton_C.OnSelectedChangedEvent // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function TopBarTabButton.TopBarTabButton_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function TopBarTabButton.TopBarTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function TopBarTabButton.TopBarTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TopBarTabButton(int32_t EntryPoint); // Function TopBarTabButton.TopBarTabButton_C.ExecuteUbergraph_TopBarTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

