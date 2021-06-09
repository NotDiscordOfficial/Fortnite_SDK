// Class MeltUI.MeltWidgetBase
// Size: 0x330 (Inherited: 0x320)
struct UMeltWidgetBase : ULTMWidgetBase {
	struct AFortAthenaMutator_Fill* CachedFillMutator; // 0x320(0x08)
	char pad_328[0x8]; // 0x328(0x08)

	void MutatorReady(struct AFortAthenaMutator_Fill* MutatorActor); // Function MeltUI.MeltWidgetBase.MutatorReady // (Event|Protected|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	struct AFortAthenaMutator_Fill* GetFillMutator(); // Function MeltUI.MeltWidgetBase.GetFillMutator // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x3db8d68
	float CacheAndGetSeaLevel(); // Function MeltUI.MeltWidgetBase.CacheAndGetSeaLevel // (Final|Native|Public|BlueprintCallable) // @ game+0x3dcad34
};

