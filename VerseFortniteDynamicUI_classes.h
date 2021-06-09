// Class VerseFortniteDynamicUI.VerseDHUDPanelBase
// Size: 0x500 (Inherited: 0x490)
struct UVerseDHUDPanelBase : UFortActivatablePanel {
	char pad_490[0x70]; // 0x490(0x70)

	struct FString GetDataStoreValue(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDPanelBase.GetDataStoreValue // (Final|Native|Public|BlueprintCallable) // @ game+0x431d514
	bool DoesDataStoreValueExist(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDPanelBase.DoesDataStoreValueExist // (Final|Native|Public|BlueprintCallable) // @ game+0x431d3bc
	void CallServerWithMessage(struct FString MessageID, struct FString MessageData); // Function VerseFortniteDynamicUI.VerseDHUDPanelBase.CallServerWithMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x431d174
};

// Class VerseFortniteDynamicUI.VerseDHUDWidgetBase
// Size: 0x338 (Inherited: 0x2c8)
struct UVerseDHUDWidgetBase : UFortHUDElementWidget {
	char pad_2C8[0x70]; // 0x2c8(0x70)

	struct FString GetDataStoreValue(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDWidgetBase.GetDataStoreValue // (Final|Native|Public|BlueprintCallable) // @ game+0x431d5d8
	bool DoesDataStoreValueExist(struct FName VarName); // Function VerseFortniteDynamicUI.VerseDHUDWidgetBase.DoesDataStoreValueExist // (Final|Native|Public|BlueprintCallable) // @ game+0x431d468
	void CallServerWithMessage(struct FString MessageID, struct FString MessageData); // Function VerseFortniteDynamicUI.VerseDHUDWidgetBase.CallServerWithMessage // (Final|Native|Public|BlueprintCallable) // @ game+0x431d298
};

// Class VerseFortniteDynamicUI.VerseDHUDWidgetDatastoreInterface
// Size: 0x28 (Inherited: 0x28)
struct UVerseDHUDWidgetDatastoreInterface : UInterface {

	void SyncDataValues(); // Function VerseFortniteDynamicUI.VerseDHUDWidgetDatastoreInterface.SyncDataValues // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ReceiveDataStoreValue(struct FName VarName, struct FString Value); // Function VerseFortniteDynamicUI.VerseDHUDWidgetDatastoreInterface.ReceiveDataStoreValue // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicHUDScene
// Size: 0x60 (Inherited: 0x50)
struct UVerseFortniteDynamicHUDScene : UDynamicHUDScene {
	struct FString VerseSceneName; // 0x50(0x10)
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector
// Size: 0x2c8 (Inherited: 0x230)
struct AVerseFortniteDynamicUIDirector : ADynamicHUDDirectorBase {
	struct UVerseFortniteDynamicUISceneCatalog* SceneCatalog; // 0x230(0x08)
	struct TMap<struct FName, struct FString> LocalVarValueMap; // 0x238(0x50)
	char pad_288[0x40]; // 0x288(0x40)

	void LoadSceneCatalog(struct FString InSceneCatalogName); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUIDirector.LoadSceneCatalog // (Event|Public|BlueprintEvent) // @ game+0xda7c34
};

// Class VerseFortniteDynamicUI.VerseFortniteDynamicUISceneCatalog
// Size: 0xd0 (Inherited: 0x30)
struct UVerseFortniteDynamicUISceneCatalog : UDataAsset {
	struct TMap<struct FString, struct FSceneCatalogEntryClass> OriginalMapOfEntries; // 0x30(0x50)
	char pad_80[0x50]; // 0x80(0x50)

	void AppendToBaseCatalog(struct UVerseFortniteDynamicUISceneCatalog* NewCatalog); // Function VerseFortniteDynamicUI.VerseFortniteDynamicUISceneCatalog.AppendToBaseCatalog // (Final|Native|Public|BlueprintCallable) // @ game+0x431d0d8
};

