// WidgetBlueprintGeneratedClass AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C
// Size: 0xd14 (Inherited: 0xc20)
struct UAthenaLeaderboardTabButton_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UCommonTextBlock* CenterButtonTextWidget; // 0xc28(0x08)
	struct UHorizontalBox* ContentHB; // 0xc30(0x08)
	struct UImage* LeftSideImage; // 0xc38(0x08)
	struct FText ButtonText; // 0xc40(0x18)
	struct FSlateBrush IconBrush; // 0xc58(0x88)
	bool UseText; // 0xce0(0x01)
	char pad_CE1[0x3]; // 0xce1(0x03)
	struct FLinearColor SelectedIconTint; // 0xce4(0x10)
	struct FLinearColor DeselectedIconTint; // 0xcf4(0x10)
	struct FLinearColor HoveredIconTint; // 0xd04(0x10)

	void ShowText(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ShowText // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Icon(struct FSlateBrush IconBrush); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Icon // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Set Text(struct FText ButtonText); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Set Text // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnCurrentTextStyleChanged(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.OnCurrentTextStyleChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void SetTabLabelInfo(struct FFortTabButtonLabelInfo TabLabelInfo); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.SetTabLabelInfo // (Event|Public|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaLeaderboardTabButton(int32_t EntryPoint); // Function AthenaLeaderboardTabButton.AthenaLeaderboardTabButton_C.ExecuteUbergraph_AthenaLeaderboardTabButton // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

