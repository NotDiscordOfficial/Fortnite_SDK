// WidgetBlueprintGeneratedClass MinimalSquadMember.MinimalSquadMember_C
// Size: 0xc98 (Inherited: 0xc50)
struct UMinimalSquadMember_C : UAthenaMinimalSquadMemberEntry {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc50(0x08)
	struct UWidgetAnimation* StyleNotReady; // 0xc58(0x08)
	struct UWidgetAnimation* StyleSitOut; // 0xc60(0x08)
	struct UWidgetAnimation* StyleEmpty; // 0xc68(0x08)
	struct UWidgetAnimation* OnReady; // 0xc70(0x08)
	struct UImage* Image_Meeple; // 0xc78(0x08)
	struct UImage* LocalUserIndicator; // 0xc80(0x08)
	struct UOverlay* MeepleContainer; // 0xc88(0x08)
	struct UImage* ReadyFlash; // 0xc90(0x08)

	void SetEmptyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetEmptyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetSitOutVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetSitOutVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetNotReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetNotReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetReadyVisuals(); // Function MinimalSquadMember.MinimalSquadMember_C.SetReadyVisuals // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnMemberGameReadinessChanged(enum class EGameReadiness ReadyStatus); // Function MinimalSquadMember.MinimalSquadMember_C.OnMemberGameReadinessChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void BP_OnTeamMemberEstablished(bool bHasValidMember); // Function MinimalSquadMember.MinimalSquadMember_C.BP_OnTeamMemberEstablished // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_MinimalSquadMember(int32_t EntryPoint); // Function MinimalSquadMember.MinimalSquadMember_C.ExecuteUbergraph_MinimalSquadMember // (Final|UbergraphFunction) // @ game+0xda7c34
};

