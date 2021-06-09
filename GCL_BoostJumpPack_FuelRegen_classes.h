// BlueprintGeneratedClass GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C
// Size: 0x440 (Inherited: 0x428)
struct AGCL_BoostJumpPack_FuelRegen_C : AGameplayCueNotify_Jetpack_FuelRegen {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x428(0x08)
	float FullBlinkTimeline_Blink_108772B949790E60DC9BE1BAC70C2EA1; // 0x430(0x04)
	enum class ETimelineDirection FullBlinkTimeline__Direction_108772B949790E60DC9BE1BAC70C2EA1; // 0x434(0x01)
	char pad_435[0x3]; // 0x435(0x03)
	struct UTimelineComponent* FullBlinkTimeline; // 0x438(0x08)

	void FullBlinkTimeline__FinishedFunc(); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void FullBlinkTimeline__UpdateFunc(); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.FullBlinkTimeline__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ResetBlink(struct AFortPlayerPawn* PlayerPawn); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ResetBlink // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen(int32_t EntryPoint); // Function GCL_BoostJumpPack_FuelRegen.GCL_BoostJumpPack_FuelRegen_C.ExecuteUbergraph_GCL_BoostJumpPack_FuelRegen // (Final|UbergraphFunction) // @ game+0xda7c34
};

