// SolarisGeneratedClass Assets_asset.Asset
// Size: 0xa0 (Inherited: 0x68)
struct UAsset : UVerseAssetPtr {
	char pad_68[0x10]; // 0x68(0x10)
	struct FDelegate __verse_0xCD09DACD_Async_Load; // 0x78(0x10)
	struct FDelegate __verse_0x3C0E20C8_GetAsyncLoadEvent; // 0x88(0x10)
	struct FDelegate __verse_0x5669A4B5_SyncLoad; // 0x68(0x10)

	char SyncLoad(); // Function Assets_asset.Asset.SyncLoad // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430ba74
	struct Usticky_event* GetAsyncLoadEvent(); // Function Assets_asset.Asset.GetAsyncLoadEvent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430b7a0
	struct Usticky_event* Async_Load(); // Function Assets_asset.Asset.Async_Load // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x430b5e8
	struct UAsset* Create_Internal(struct UObject* __verse_0x69F1185B_assetClass, struct FString __verse_0x5D4EDCE6_pathToAsset); // Function Assets_asset.Asset.Create_Internal // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x430b798
	void $InitCDO(); // Function Assets_asset.Asset.$InitCDO // (None) // @ game+0xda7c34
};

