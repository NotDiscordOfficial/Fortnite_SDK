// WidgetBlueprintGeneratedClass DeadzoneAdjustment.DeadzoneAdjustment_C
// Size: 0x289 (Inherited: 0x260)
struct UDeadzoneAdjustment_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UImage* Deadzone_Adjustment; // 0x268(0x08)
	struct UOptionsMenuSetting_C* Deadzone_Adjustment_Slider; // 0x270(0x08)
	struct UImage* Deadzone_Max; // 0x278(0x08)
	struct UIconTextButton_C* ResetButton; // 0x280(0x08)
	enum class ESettingType SettingType; // 0x288(0x01)

	struct UWidget* DoCustomNavigation_1(enum class EUINavigation Navigation); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.DoCustomNavigation_1 // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnValueChanged_Bind(float Value); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.OnValueChanged_Bind // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DeadzoneAdjustment(int32_t EntryPoint); // Function DeadzoneAdjustment.DeadzoneAdjustment_C.ExecuteUbergraph_DeadzoneAdjustment // (Final|UbergraphFunction) // @ game+0xda7c34
};

