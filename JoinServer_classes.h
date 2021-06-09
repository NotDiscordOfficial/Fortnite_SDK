// WidgetBlueprintGeneratedClass JoinServer.JoinServer_C
// Size: 0x4f0 (Inherited: 0x4e0)
struct UJoinServer_C : UFortUIStateWidget_JoinServer {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e0(0x08)
	struct UBuildWatermark_C* BuildWatermark; // 0x4e8(0x08)

	void OnEnterState(enum class EFortUIState PreviousUIState); // Function JoinServer.JoinServer_C.OnEnterState // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnShowTutorialDialog(); // Function JoinServer.JoinServer_C.OnShowTutorialDialog // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_JoinServer(int32_t EntryPoint); // Function JoinServer.JoinServer_C.ExecuteUbergraph_JoinServer // (Final|UbergraphFunction) // @ game+0xda7c34
};

