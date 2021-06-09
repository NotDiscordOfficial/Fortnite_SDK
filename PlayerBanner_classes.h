// WidgetBlueprintGeneratedClass PlayerBanner.PlayerBanner_C
// Size: 0x329 (Inherited: 0x2c0)
struct UPlayerBanner_C : UFortAccountWidgetBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2c0(0x08)
	struct UImage* BannerImage; // 0x2c8(0x08)
	struct UCommonLoadGuard* LoadGuard; // 0x2d0(0x08)
	struct UImage* SurroundImage; // 0x2d8(0x08)
	struct UCommonLoadGuard* SurroundLoadGuard; // 0x2e0(0x08)
	bool bUseLargeTexture; // 0x2e8(0x01)
	char pad_2E9[0x7]; // 0x2e9(0x07)
	struct FUniqueNetIdRepl OwnerNetId; // 0x2f0(0x28)
	struct FName CurrentBannerColorId; // 0x318(0x08)
	struct FName CurrentBannerIconId; // 0x320(0x08)
	bool SurroundEnabled; // 0x328(0x01)

	void UnbindDelegates(); // Function PlayerBanner.PlayerBanner_C.UnbindDelegates // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetupSurround(); // Function PlayerBanner.PlayerBanner_C.SetupSurround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerIconAndColorFromProfile(); // Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColorFromProfile // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerIconAndColor(struct FName IconId, struct FName ColorId); // Function PlayerBanner.PlayerBanner_C.SetBannerIconAndColor // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ToggleBannerMask(bool Enable); // Function PlayerBanner.PlayerBanner_C.ToggleBannerMask // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RefreshSurround(int32_t Level); // Function PlayerBanner.PlayerBanner_C.RefreshSurround // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnSurroundIconLoaded(struct UObject* LoadedObject); // Function PlayerBanner.PlayerBanner_C.OnSurroundIconLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void EnableSurround(); // Function PlayerBanner.PlayerBanner_C.EnableSurround // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ClearBannerState(); // Function PlayerBanner.PlayerBanner_C.ClearBannerState // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnBannerIconLoaded(struct UObject* LoadedObject); // Function PlayerBanner.PlayerBanner_C.OnBannerIconLoaded // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void GetBannerMID(struct UMaterialInstanceDynamic* BannerMID); // Function PlayerBanner.PlayerBanner_C.GetBannerMID // (Private|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void SetBannerOwner(struct FUniqueNetIdRepl OwnerId); // Function PlayerBanner.PlayerBanner_C.SetBannerOwner // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerColorId(struct FName InBannerColorId); // Function PlayerBanner.PlayerBanner_C.SetBannerColorId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerIconId(struct FName InBannerIconId); // Function PlayerBanner.PlayerBanner_C.SetBannerIconId // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void SetBannerImage(struct FFortHomeBaseInfo Image info, bool Success); // Function PlayerBanner.PlayerBanner_C.SetBannerImage // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Account Info Changed(struct FFortPublicAccountInfo NewInfo); // Function PlayerBanner.PlayerBanner_C.Account Info Changed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function PlayerBanner.PlayerBanner_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_PlayerBanner(int32_t EntryPoint); // Function PlayerBanner.PlayerBanner_C.ExecuteUbergraph_PlayerBanner // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

