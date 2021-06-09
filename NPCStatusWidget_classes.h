// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
// Size: 0x29c (Inherited: 0x260)
struct UNPCStatusWidget_C : UUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x260(0x08)
	struct UNPCStatusWidgetBar_C* Bar_Health; // 0x268(0x08)
	struct UNPCStatusWidgetBar_C* Bar_Shield; // 0x270(0x08)
	struct FTimerHandle VisibiltyTimer; // 0x278(0x08)
	struct FMulticastInlineDelegate VisibilityChanged; // 0x280(0x10)
	float StatusWidgetVisibleDuration; // 0x290(0x04)
	float CurrentHealthPercent; // 0x294(0x04)
	float CurrentShieldPercent; // 0x298(0x04)

	void Construct(); // Function NPCStatusWidget.NPCStatusWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventUpdateStatus(float Health, float Shield, bool ShowShield); // Function NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventHideStatus(); // Function NPCStatusWidget.NPCStatusWidget_C.EventHideStatus // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ChangeWidgetVisibleDuration(float StatusWidgetVisibleDuration); // Function NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_NPCStatusWidget(int32_t EntryPoint); // Function NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void VisibilityChanged__DelegateSignature(bool bVisible); // Function NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

