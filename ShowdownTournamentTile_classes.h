// WidgetBlueprintGeneratedClass ShowdownTournamentTile.ShowdownTournamentTile_C
// Size: 0xc69 (Inherited: 0xc40)
struct UShowdownTournamentTile_C : UFortShowdownTournamentTile {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc40(0x08)
	struct UWidgetAnimation* sizeUp; // 0xc48(0x08)
	struct UWidgetAnimation* changeFocus; // 0xc50(0x08)
	struct UImage* Image_TileFade; // 0xc58(0x08)
	struct USizeBox* PosterSizeBox; // 0xc60(0x08)
	bool isFaded; // 0xc68(0x01)

	void BP_OnSelected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventFade(bool FadeOut); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.EventFade // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownTournamentTile(int32_t EntryPoint); // Function ShowdownTournamentTile.ShowdownTournamentTile_C.ExecuteUbergraph_ShowdownTournamentTile // (Final|UbergraphFunction) // @ game+0xda7c34
};

