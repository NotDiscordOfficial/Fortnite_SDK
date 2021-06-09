// WidgetBlueprintGeneratedClass ComVoteFeedback.ComVoteFeedback_C
// Size: 0x2c0 (Inherited: 0x288)
struct UComVoteFeedback_C : UFortCommunityVotingFeedback {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* voting_activities; // 0x290(0x08)
	struct UWidgetAnimation* Once; // 0x298(0x08)
	struct UImage* RoundedSquare1; // 0x2a0(0x08)
	struct UImage* RoundedSquare2; // 0x2a8(0x08)
	struct UImage* RoundedSquare3; // 0x2b0(0x08)
	struct UImage* Vote01; // 0x2b8(0x08)

	void Construct(); // Function ComVoteFeedback.ComVoteFeedback_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ComVoteFeedback(int32_t EntryPoint); // Function ComVoteFeedback.ComVoteFeedback_C.ExecuteUbergraph_ComVoteFeedback // (Final|UbergraphFunction) // @ game+0xda7c34
};

