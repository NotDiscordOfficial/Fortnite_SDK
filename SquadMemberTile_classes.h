// WidgetBlueprintGeneratedClass SquadMemberTile.SquadMemberTile_C
// Size: 0xd00 (Inherited: 0xc88)
struct USquadMemberTile_C : UAthenaSquadMemberDetailedEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc88(0x08)
	struct UWidgetAnimation* OnIntro; // 0xc90(0x08)
	struct UWidgetAnimation* OnLocalUserDefined; // 0xc98(0x08)
	struct UWidgetAnimation* OnSelected; // 0xca0(0x08)
	struct UWidgetAnimation* SetRibbonRotation; // 0xca8(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0xcb0(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0xcb8(0x08)
	struct UWidgetAnimation* StyleReady; // 0xcc0(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0xcc8(0x08)
	struct UWidgetAnimation* OnHovered; // 0xcd0(0x08)
	struct UBorder* EntryBorder; // 0xcd8(0x08)
	struct UImage* LoadingThrobberBacking; // 0xce0(0x08)
	struct UImage* LocalUserIcon; // 0xce8(0x08)
	struct UImage* SquadOverlay; // 0xcf0(0x08)
	struct UImage* SquadRibbon; // 0xcf8(0x08)

	void SetVisuals(enum class EGameReadiness Member Readiness, bool Is In Frontend); // Function SquadMemberTile.SquadMemberTile_C.SetVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetEmptyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetEmptyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSitOutVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetSitOutVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetNotReadyVisuals(); // Function SquadMemberTile.SquadMemberTile_C.SetNotReadyVisuals // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7(struct UObject* Loaded); // Function SquadMemberTile.SquadMemberTile_C.OnLoaded_A3B69DDA4214DBAA66546FAB9F43D5E7 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BP_OnUnhovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnUnhovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnHovered(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnHovered // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSquadAssigned(); // Function SquadMemberTile.SquadMemberTile_C.OnSquadAssigned // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function SquadMemberTile.SquadMemberTile_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function SquadMemberTile.SquadMemberTile_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function SquadMemberTile.SquadMemberTile_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnSelected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnSelected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnDeselected(); // Function SquadMemberTile.SquadMemberTile_C.BP_OnDeselected // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function SquadMemberTile.SquadMemberTile_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnMemberIsInFrontendChanged(bool bIsInFrontEnd); // Function SquadMemberTile.SquadMemberTile_C.OnMemberIsInFrontendChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_SquadMemberTile(int32_t EntryPoint); // Function SquadMemberTile.SquadMemberTile_C.ExecuteUbergraph_SquadMemberTile // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

