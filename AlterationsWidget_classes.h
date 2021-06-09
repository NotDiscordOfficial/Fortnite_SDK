// WidgetBlueprintGeneratedClass AlterationsWidget.AlterationsWidget_C
// Size: 0x384 (Inherited: 0x300)
struct UAlterationsWidget_C : UFortAlterationsWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x300(0x08)
	struct UCommonBorder* Border_PerksMessage; // 0x308(0x08)
	struct UCommonBorder* BorderLocked; // 0x310(0x08)
	struct UCommonBorder* BorderUnlocked; // 0x318(0x08)
	struct UPerkDivider_C* LockedUnlockedDivider; // 0x320(0x08)
	struct UVerticalBox* VerticalBoxAlterationsLocked; // 0x328(0x08)
	struct UVerticalBox* VerticalBoxAlterationsUnlocked; // 0x330(0x08)
	bool bIncludeName; // 0x338(0x01)
	bool bIncludeDescription; // 0x339(0x01)
	bool bIncludeShortDescription; // 0x33a(0x01)
	bool FirstAlterationComplete; // 0x33b(0x01)
	bool FirstLockedComplete; // 0x33c(0x01)
	enum class EFortBrushSize IconSize; // 0x33d(0x01)
	char pad_33E[0x2]; // 0x33e(0x02)
	struct FMargin RowPadding; // 0x340(0x10)
	bool bUseLargeFormatNameOnly; // 0x350(0x01)
	char pad_351[0x3]; // 0x351(0x03)
	struct FMargin Description Padding; // 0x354(0x10)
	char pad_364[0x4]; // 0x364(0x04)
	struct FTimerHandle PerkAnimIntroTimer; // 0x368(0x08)
	int32_t NextAnimToPlay; // 0x370(0x04)
	struct FMargin RowPadding2; // 0x374(0x10)

	void Clear(); // Function AlterationsWidget.AlterationsWidget_C.Clear // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearAndInitialize(bool IntroAlterations); // Function AlterationsWidget.AlterationsWidget_C.ClearAndInitialize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Reset(); // Function AlterationsWidget.AlterationsWidget_C.Reset // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CreateAnimations(bool IntroAnims); // Function AlterationsWidget.AlterationsWidget_C.CreateAnimations // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void IntroAnim(); // Function AlterationsWidget.AlterationsWidget_C.IntroAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void CenterWidget(); // Function AlterationsWidget.AlterationsWidget_C.CenterWidget // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupBorders(); // Function AlterationsWidget.AlterationsWidget_C.SetupBorders // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void TriggerModificationAnim(int32_t ModifiedSlotIndex); // Function AlterationsWidget.AlterationsWidget_C.TriggerModificationAnim // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupAlteration(struct UCommonUserWidget* Alteration, struct UFortAlterationInfo* AlterationInfo); // Function AlterationsWidget.AlterationsWidget_C.SetupAlteration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct UCommonUserWidget* CreateAlterationWidget(); // Function AlterationsWidget.AlterationsWidget_C.CreateAlterationWidget // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GenerateAlteration(struct UFortAlterationInfo* AlterationInfo); // Function AlterationsWidget.AlterationsWidget_C.GenerateAlteration // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void AddAlterationToVerticalbox(struct UCommonUserWidget* Alteration, bool IsUnlocked); // Function AlterationsWidget.AlterationsWidget_C.AddAlterationToVerticalbox // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void UpdatePerksMessage(); // Function AlterationsWidget.AlterationsWidget_C.UpdatePerksMessage // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AlterationsWidget.AlterationsWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnItemChanged(bool bIntroAlterations, bool bWasFavoritedChanged); // Function AlterationsWidget.AlterationsWidget_C.OnItemChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnItemToCompareWithChanged(); // Function AlterationsWidget.AlterationsWidget_C.OnItemToCompareWithChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnStateChanged(); // Function AlterationsWidget.AlterationsWidget_C.OnStateChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnGenerateAlteration(struct UFortAlterationInfo* AlterationInfo); // Function AlterationsWidget.AlterationsWidget_C.OnGenerateAlteration // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnFocusFirstItem(); // Function AlterationsWidget.AlterationsWidget_C.OnFocusFirstItem // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAlterationSlotIndexModifiedBP(int32_t ModifiedIndex); // Function AlterationsWidget.AlterationsWidget_C.OnAlterationSlotIndexModifiedBP // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function AlterationsWidget.AlterationsWidget_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function AlterationsWidget.AlterationsWidget_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUpgradeLevelDeltaChanged(); // Function AlterationsWidget.AlterationsWidget_C.OnUpgradeLevelDeltaChanged // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AlterationsWidget(int32_t EntryPoint); // Function AlterationsWidget.AlterationsWidget_C.ExecuteUbergraph_AlterationsWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

