// WidgetBlueprintGeneratedClass SocialInteraction.SocialInteraction_C
// Size: 0xcc8 (Inherited: 0xc80)
struct USocialInteraction_C : USocialInteractionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc80(0x08)
	struct UWidgetAnimation* OnHover; // 0xc88(0x08)
	struct UImage* EncourageEpicFriend; // 0xc90(0x08)
	struct UImage* InteractionIcon; // 0xc98(0x08)
	struct UMenuAnchor* MenuAnchor_Actions; // 0xca0(0x08)
	struct FLinearColor EncourageEpicFriend_IdleColor; // 0xca8(0x10)
	struct FLinearColor EncourageEpicFriend_HoveredColor; // 0xcb8(0x10)

	void BP_OnHovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SocialInteraction.SocialInteraction_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInteractionSet(); // Function SocialInteraction.SocialInteraction_C.OnInteractionSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SocialInteraction(int32_t EntryPoint); // Function SocialInteraction.SocialInteraction_C.ExecuteUbergraph_SocialInteraction // (Final|UbergraphFunction) // @ game+0xda7c34
};

