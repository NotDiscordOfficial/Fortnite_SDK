// WidgetBlueprintGeneratedClass W_AvailableSparks.W_AvailableSparks_C
// Size: 0x320 (Inherited: 0x2c8)
struct UW_AvailableSparks_C : UFortCommunityVotingAvailableVotesWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c8(0x08)
	struct UWidgetAnimation* Idle; // 0x2d0(0x08)
	struct UWidgetAnimation* idle_to_LastDayMessage; // 0x2d8(0x08)
	struct UWidgetAnimation* idle_to_countdown; // 0x2e0(0x08)
	struct UWidgetAnimation* decrement; // 0x2e8(0x08)
	struct UWidgetAnimation* Increment; // 0x2f0(0x08)
	struct UImage* Com_LikeCounter_BG; // 0x2f8(0x08)
	struct UImage* Com_LikeCounter_BG_6; // 0x300(0x08)
	struct UImage* Com_LikeCounter_BG_7; // 0x308(0x08)
	struct UImage* flameInCounter; // 0x310(0x08)
	struct UImage* flameInCounter_3; // 0x318(0x08)

	void PlayIncreaseVote(); // Function W_AvailableSparks.W_AvailableSparks_C.PlayIncreaseVote // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayDecreaseVote(); // Function W_AvailableSparks.W_AvailableSparks_C.PlayDecreaseVote // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayCountdown(float StartValue); // Function W_AvailableSparks.W_AvailableSparks_C.PlayCountdown // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayEventOver(float StartValue); // Function W_AvailableSparks.W_AvailableSparks_C.PlayEventOver // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayAvailableVotes(); // Function W_AvailableSparks.W_AvailableSparks_C.PlayAvailableVotes // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayIdle(); // Function W_AvailableSparks.W_AvailableSparks_C.PlayIdle // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_W_AvailableSparks(int32_t EntryPoint); // Function W_AvailableSparks.W_AvailableSparks_C.ExecuteUbergraph_W_AvailableSparks // (Final|UbergraphFunction) // @ game+0xda7c34
};

