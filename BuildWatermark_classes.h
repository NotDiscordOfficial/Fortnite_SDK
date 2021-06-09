// WidgetBlueprintGeneratedClass BuildWatermark.BuildWatermark_C
// Size: 0x2e8 (Inherited: 0x2e0)
struct UBuildWatermark_C : UFortBuildWatermark {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x2e0(0x08)

	void Construct(); // Function BuildWatermark.BuildWatermark_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandlePartyJoined(); // Function BuildWatermark.BuildWatermark_C.HandlePartyJoined // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Destruct(); // Function BuildWatermark.BuildWatermark_C.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void HandlePlayerStateChanged(struct FFortTeamMemberInfo PlayerInfo); // Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged // (HasOutParms|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BuildWatermark(int32_t EntryPoint); // Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

