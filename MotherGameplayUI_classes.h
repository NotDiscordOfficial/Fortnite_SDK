// Class MotherGameplayUI.AvocadoEaterHealthBarWidget
// Size: 0x2e8 (Inherited: 0x2c8)
struct UAvocadoEaterHealthBarWidget : UFortHUDElementWidget {
	struct FEventMessageTag AttachedMessageTag; // 0x2c8(0x08)
	struct FEventMessageTag DetachedMessageTag; // 0x2d0(0x08)
	struct FEventMessageTag SetMarkerPositionMessageTag; // 0x2d8(0x08)
	struct FEventMessageTag TargetDamagedMessageTag; // 0x2e0(0x08)

	void SetMarkerPosition(float MarkerPosition); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.SetMarkerPosition // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ParasiteDetached(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.ParasiteDetached // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ParasiteAttached(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.ParasiteAttached // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnTargetDamaged(); // Function MotherGameplayUI.AvocadoEaterHealthBarWidget.OnTargetDamaged // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

// Class MotherGameplayUI.FortGravyGoblinReticleExtensionWidget
// Size: 0x2b8 (Inherited: 0x298)
struct UFortGravyGoblinReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	struct FEventMessageTag ItemActivatableTag; // 0x298(0x08)
	struct FEventMessageTag ItemInactivatableTag; // 0x2a0(0x08)
	char pad_2A8[0x10]; // 0x2a8(0x10)

	void OnItemInactivatable(); // Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemInactivatable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnItemActivatable(); // Function MotherGameplayUI.FortGravyGoblinReticleExtensionWidget.OnItemActivatable // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class MotherGameplayUI.FortLlamaRoasterReticleExtensionWidget
// Size: 0x298 (Inherited: 0x298)
struct UFortLlamaRoasterReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
};

// Class MotherGameplayUI.FortPaddleGingerReticleExtensionWidget
// Size: 0x338 (Inherited: 0x298)
struct UFortPaddleGingerReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {
	struct FEventMessageTag PropIndexChangedTag; // 0x298(0x08)
	struct FEventMessageTag PropActivatedTag; // 0x2a0(0x08)
	struct FEventMessageTag PropDeactivatedTag; // 0x2a8(0x08)
	struct UFortKeybindWidget* Keybind_ActivateAction; // 0x2b0(0x08)
	struct UFortKeybindWidget* Keybind_CycleCategoryAction; // 0x2b8(0x08)
	struct UFortKeybindWidget* Keybind_CyclePropAction; // 0x2c0(0x08)
	char pad_2C8[0x70]; // 0x2c8(0x70)

	void OnPropIndexChanged(struct FText CategoryText, int32_t PropIndex, int32_t MaxPropCount, int32_t CategoryIndex, int32_t MaxCategoryCount); // Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropIndexChanged // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnPropActivationChanged(bool Activated); // Function MotherGameplayUI.FortPaddleGingerReticleExtensionWidget.OnPropActivationChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

// Class MotherGameplayUI.FortReactorGradeReticleExtensionWidget
// Size: 0x298 (Inherited: 0x298)
struct UFortReactorGradeReticleExtensionWidget : UFortWeaponReticleExtensionWidgetBase {

	void OnUpdateChargeToMin(float ChargePercent); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToMin // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateChargeToAutoDischarge(float ChargePercent); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnUpdateChargeToAutoDischarge // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMinimumChargeReached(); // Function MotherGameplayUI.FortReactorGradeReticleExtensionWidget.OnMinimumChargeReached // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
};

