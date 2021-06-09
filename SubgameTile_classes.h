// WidgetBlueprintGeneratedClass SubgameTile.SubgameTile_C
// Size: 0xd80 (Inherited: 0xd48)
struct USubgameTile_C : UFortSubgameTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xd48(0x08)
	struct UWidgetAnimation* RevealCMSKeyArt; // 0xd50(0x08)
	struct UWidgetAnimation* UnFocused; // 0xd58(0x08)
	struct UWidgetAnimation* FocusedSecondary; // 0xd60(0x08)
	struct UWidgetAnimation* Focused; // 0xd68(0x08)
	struct UImage* FocusPulse; // 0xd70(0x08)
	struct UMaterialInstanceDynamic* PulseMID; // 0xd78(0x08)

	void PreConstruct(bool IsDesignTime); // Function SubgameTile.SubgameTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SubgameTile.SubgameTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature(); // Function SubgameTile.SubgameTile_C.BndEvt__Image_KeyArt_K2Node_ComponentBoundEvent_1_onLoadingCompleted__DelegateSignature // (BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SubgameTile.SubgameTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SubgameTile.SubgameTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SubgameTile(int32_t EntryPoint); // Function SubgameTile.SubgameTile_C.ExecuteUbergraph_SubgameTile // (Final|UbergraphFunction) // @ game+0xda7c34
};

