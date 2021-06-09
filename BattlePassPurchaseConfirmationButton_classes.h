// WidgetBlueprintGeneratedClass BattlePassPurchaseConfirmationButton.BattlePassPurchaseConfirmationButton_C
// Size: 0xc98 (Inherited: 0xc30)
struct UBattlePassPurchaseConfirmationButton_C : UBattlePassPurchaseConfirmationButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc30(0x08)
	struct UWidgetAnimation* TextBounce; // 0xc38(0x08)
	struct UWidgetAnimation* ResetTrianglesANim; // 0xc40(0x08)
	struct UWidgetAnimation* HoverTrianglesAnim; // 0xc48(0x08)
	struct UWidgetAnimation* GlowBurst; // 0xc50(0x08)
	struct UWidgetAnimation* LoopingButtonGlow; // 0xc58(0x08)
	struct UWidgetAnimation* Selected; // 0xc60(0x08)
	struct UImage* Backing; // 0xc68(0x08)
	struct UImage* BackingHoverLift; // 0xc70(0x08)
	struct UImage* ButtonBacking; // 0xc78(0x08)
	struct UImage* HoverTriangles; // 0xc80(0x08)
	struct UImage* VBuck; // 0xc88(0x08)
	bool IsBundle; // 0xc90(0x01)
	char pad_C91[0x3]; // 0xc91(0x03)
	float DelayCycle; // 0xc94(0x04)

	void BP_OnHovered(); // Function BattlePassPurchaseConfirmationButton.BattlePassPurchaseConfirmationButton_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function BattlePassPurchaseConfirmationButton.BattlePassPurchaseConfirmationButton_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function BattlePassPurchaseConfirmationButton.BattlePassPurchaseConfirmationButton_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BattlePassPurchaseConfirmationButton(int32_t EntryPoint); // Function BattlePassPurchaseConfirmationButton.BattlePassPurchaseConfirmationButton_C.ExecuteUbergraph_BattlePassPurchaseConfirmationButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

