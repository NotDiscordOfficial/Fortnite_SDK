// WidgetBlueprintGeneratedClass PlayerRankEmblem.PlayerRankEmblem_C
// Size: 0x2a1 (Inherited: 0x288)
struct UPlayerRankEmblem_C : UCommonUserWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x288(0x08)
	struct UWidgetAnimation* Flash; // 0x290(0x08)
	struct UPlayerBanner_C* PlayerBanner; // 0x298(0x08)
	bool BindToLocalPlayerByDefault; // 0x2a0(0x01)

	void SetBannerInfo(struct FPlayerBannerInfo Banner); // Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerInfo // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerSurroundLevel(int32_t Level, bool Animate); // Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerSurroundLevel // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerOwner(struct AFortPlayerController* Target); // Function PlayerRankEmblem.PlayerRankEmblem_C.SetBannerOwner // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function PlayerRankEmblem.PlayerRankEmblem_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void PreConstruct(bool IsDesignTime); // Function PlayerRankEmblem.PlayerRankEmblem_C.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerRankEmblem(int32_t EntryPoint); // Function PlayerRankEmblem.PlayerRankEmblem_C.ExecuteUbergraph_PlayerRankEmblem // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

