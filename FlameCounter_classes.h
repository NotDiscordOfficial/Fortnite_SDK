// WidgetBlueprintGeneratedClass FlameCounter.FlameCounter_C
// Size: 0x2f8 (Inherited: 0x2c0)
struct UFlameCounter_C : UFortCommunityVotingVoteCounter {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UWidgetAnimation* Fade; // 0x2c8(0x08)
	struct UWidgetAnimation* FadeIn; // 0x2d0(0x08)
	struct UWidgetAnimation* FadeOut; // 0x2d8(0x08)
	struct UWidgetAnimation* Increment; // 0x2e0(0x08)
	struct UWidgetAnimation* Idle; // 0x2e8(0x08)
	struct UImage* Com_LlamaLikeIcon_2; // 0x2f0(0x08)

	void PlayIncreaseVote(); // Function FlameCounter.FlameCounter_C.PlayIncreaseVote // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayIdle(); // Function FlameCounter.FlameCounter_C.PlayIdle // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayFadeOut(); // Function FlameCounter.FlameCounter_C.PlayFadeOut // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void PlayFadeIn(); // Function FlameCounter.FlameCounter_C.PlayFadeIn // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FlameCounter(int32_t EntryPoint); // Function FlameCounter.FlameCounter_C.ExecuteUbergraph_FlameCounter // (Final|UbergraphFunction) // @ game+0xda7c34
};

