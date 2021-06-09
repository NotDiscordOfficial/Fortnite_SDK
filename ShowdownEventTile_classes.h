// WidgetBlueprintGeneratedClass ShowdownEventTile.ShowdownEventTile_C
// Size: 0xcd0 (Inherited: 0xc20)
struct UShowdownEventTile_C : UCommonButtonLegacy {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc20(0x08)
	struct UWidgetAnimation* Focus_Violator; // 0xc28(0x08)
	struct UWidgetAnimation* Hover; // 0xc30(0x08)
	struct UWidgetAnimation* Focus; // 0xc38(0x08)
	struct UWidgetAnimation* TransitionSize; // 0xc40(0x08)
	struct UWidgetAnimation* Intro; // 0xc48(0x08)
	struct UCommonBorder* CommonBorder_InputContainer; // 0xc50(0x08)
	struct UImage* Image_Bg; // 0xc58(0x08)
	struct UImage* Image_Ended; // 0xc60(0x08)
	struct UImage* Image_Focus; // 0xc68(0x08)
	struct UImage* Image_Hover; // 0xc70(0x08)
	struct UImage* Image_Tail; // 0xc78(0x08)
	struct UShowdownEventTile_RoundBreak_C* ShowdownEventTile_RoundBreak; // 0xc80(0x08)
	struct UShowdownEventTileInfo_C* ShowdownEventTileInfo; // 0xc88(0x08)
	struct UShowdownEventTileViolator_C* Violator; // 0xc90(0x08)
	struct FString EventId; // 0xc98(0x10)
	bool isEnded; // 0xca8(0x01)
	bool isLive; // 0xca9(0x01)
	char pad_CAA[0x6]; // 0xcaa(0x06)
	struct FMulticastInlineDelegate OnWindowSelected; // 0xcb0(0x10)
	struct FString TournamentId; // 0xcc0(0x10)

	void SetData(struct FString TournamentInfo, struct FString EventInfo); // Function ShowdownEventTile.ShowdownEventTile_C.SetData // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ShowdownEventTile.ShowdownEventTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void BP_OnClicked(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnClicked // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void EventIntro(int32_t Index); // Function ShowdownEventTile.ShowdownEventTile_C.EventIntro // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventResize(bool Out); // Function ShowdownEventTile.ShowdownEventTile_C.EventResize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function ShowdownEventTile.ShowdownEventTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function ShowdownEventTile.ShowdownEventTile_C.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void EventSetState(enum class EFortShowdownEventState EventState); // Function ShowdownEventTile.ShowdownEventTile_C.EventSetState // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventColorize(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorize // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventColorizeDispatch(struct FFortTournamentDisplayInfo DisplayInfo); // Function ShowdownEventTile.ShowdownEventTile_C.EventColorizeDispatch // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EventMultiRoundStyle(); // Function ShowdownEventTile.ShowdownEventTile_C.EventMultiRoundStyle // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ShowdownEventTile(int32_t EntryPoint); // Function ShowdownEventTile.ShowdownEventTile_C.ExecuteUbergraph_ShowdownEventTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
	void OnWindowSelected__DelegateSignature(); // Function ShowdownEventTile.ShowdownEventTile_C.OnWindowSelected__DelegateSignature // (Public|Delegate|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
};

