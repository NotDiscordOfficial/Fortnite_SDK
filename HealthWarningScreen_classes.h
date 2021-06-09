// WidgetBlueprintGeneratedClass HealthWarningScreen.HealthWarningScreen_C
// Size: 0x4d0 (Inherited: 0x490)
struct UHealthWarningScreen_C : UHealthWarningScreen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x490(0x08)
	struct UWidgetAnimation* FinishingAnim; // 0x498(0x08)
	struct USafeZone* SafeZone_1; // 0x4a0(0x08)
	struct FMulticastInlineDelegate HealthWarningCompleted; // 0x4a8(0x10)
	struct FTimerHandle ShowTimer; // 0x4b8(0x08)
	struct FMargin IconPadding; // 0x4c0(0x10)

	void HandleShowTimerComplete(); // Function HealthWarningScreen.HealthWarningScreen_C.HandleShowTimerComplete // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HealthWarningScreen(int32_t EntryPoint); // Function HealthWarningScreen.HealthWarningScreen_C.ExecuteUbergraph_HealthWarningScreen // (Final|UbergraphFunction) // @ game+0xda7c34
	void HealthWarningCompleted__DelegateSignature(); // Function HealthWarningScreen.HealthWarningScreen_C.HealthWarningCompleted__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

