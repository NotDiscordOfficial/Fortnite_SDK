// WidgetBlueprintGeneratedClass SoloButton_ViewQuest.SoloButton_ViewQuest_C
// Size: 0xc78 (Inherited: 0xc28)
struct USoloButton_ViewQuest_C : UFortAthenaViewQuestsButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc28(0x08)
	struct UWidgetAnimation* ViewQuest_Hover; // 0xc30(0x08)
	struct UWidgetAnimation* NewQuestPulse_Pressed; // 0xc38(0x08)
	struct UWidgetAnimation* NewQuestPulse_Hover; // 0xc40(0x08)
	struct UWidgetAnimation* NewQuestPulse; // 0xc48(0x08)
	struct UImage* ButtonBacking; // 0xc50(0x08)
	struct UImage* Image_NewQuestBorder; // 0xc58(0x08)
	struct UScaleBox* InputActionIconScale; // 0xc60(0x08)
	struct UImage* Pulse; // 0xc68(0x08)
	struct UCommonTextBlock* ViewQuestText; // 0xc70(0x08)

	void UpdateInputActionIconScale(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.UpdateInputActionIconScale // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void HandleUnseenQuestsChanged(bool bHasUnseenQuests); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.HandleUnseenQuestsChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnTriggeredInputActionChanged(struct FDataTableRowHandle NewTriggeredAction); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.OnTriggeredInputActionChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SoloButton_ViewQuest(int32_t EntryPoint); // Function SoloButton_ViewQuest.SoloButton_ViewQuest_C.ExecuteUbergraph_SoloButton_ViewQuest // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

