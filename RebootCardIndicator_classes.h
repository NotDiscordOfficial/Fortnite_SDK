// WidgetBlueprintGeneratedClass RebootCardIndicator.RebootCardIndicator_C
// Size: 0x578 (Inherited: 0x528)
struct URebootCardIndicator_C : UAthenaRebootCardIndicator {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x528(0x08)
	struct UWidgetAnimation* UpdateTime; // 0x530(0x08)
	struct UBorder* Border_Nameplate; // 0x538(0x08)
	struct UImage* burst; // 0x540(0x08)
	struct UImage* Image_RebootIcon; // 0x548(0x08)
	struct USpacer* IndicatorSpacer; // 0x550(0x08)
	struct UHorizontalBox* RebootCountdownContainer; // 0x558(0x08)
	struct UCommonTextBlock* TimeText; // 0x560(0x08)
	float CurTime; // 0x568(0x04)
	float EndTime; // 0x56c(0x04)
	struct FTimerHandle TimerHandle; // 0x570(0x08)

	void bp_UpdateCountdownText(); // Function RebootCardIndicator.RebootCardIndicator_C.bp_UpdateCountdownText // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupCountdown(float StartTimeLocalWorld, float EndTimeLocalWorld); // Function RebootCardIndicator.RebootCardIndicator_C.SetupCountdown // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void UpdateCountdownText(); // Function RebootCardIndicator.RebootCardIndicator_C.UpdateCountdownText // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void HandleDisplayForSelf(bool bSelf); // Function RebootCardIndicator.RebootCardIndicator_C.HandleDisplayForSelf // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RebootCardIndicator(int32_t EntryPoint); // Function RebootCardIndicator.RebootCardIndicator_C.ExecuteUbergraph_RebootCardIndicator // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

