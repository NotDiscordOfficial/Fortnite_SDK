// WidgetBlueprintGeneratedClass DivisionIconButton.DivisionIconButton_C
// Size: 0xc40 (Inherited: 0xc28)
struct UDivisionIconButton_C : UFortShowdownDivisionRankButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* Selected; // 0xc30(0x08)
	struct UImage* Image_Hover; // 0xc38(0x08)

	void OnRankButtonSelected(bool bIsSelected); // Function DivisionIconButton.DivisionIconButton_C.OnRankButtonSelected // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function DivisionIconButton.DivisionIconButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DivisionIconButton(int32_t EntryPoint); // Function DivisionIconButton.DivisionIconButton_C.ExecuteUbergraph_DivisionIconButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

