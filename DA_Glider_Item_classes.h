// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
// Size: 0xeb0 (Inherited: 0xe88)
struct ADA_Glider_Item_C : AFortCustomizableAbilityDecoTool {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe88(0x08)
	struct FGameplayTagContainer ErrorReason; // 0xe90(0x20)

	void IsOnGround(bool bOnGround); // Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void RaiseUsageError(struct FGameplayTagContainer FailedReason); // Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError // (Public|HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void BPPressTrigger(struct AFortDecoHelper* FortDecoHelper); // Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_DA_Glider_Item(int32_t EntryPoint); // Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item // (Final|UbergraphFunction) // @ game+0xda7c34
};

