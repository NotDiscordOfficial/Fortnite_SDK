// WidgetBlueprintGeneratedClass TournamentModal.TournamentModal_C
// Size: 0x4b0 (Inherited: 0x498)
struct UTournamentModal_C : UFortTournamentModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x498(0x08)
	struct UWidgetAnimation* Intro; // 0x4a0(0x08)
	struct UImage* Image_Bg; // 0x4a8(0x08)

	void BP_OnActivated(); // Function TournamentModal.TournamentModal_C.BP_OnActivated // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnTournamentSet(struct FLinearColor LeftColor, struct FLinearColor RightColor); // Function TournamentModal.TournamentModal_C.OnTournamentSet // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_TournamentModal(int32_t EntryPoint); // Function TournamentModal.TournamentModal_C.ExecuteUbergraph_TournamentModal // (Final|UbergraphFunction) // @ game+0xda7c34
};

