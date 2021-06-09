// BlueprintGeneratedClass B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C
// Size: 0x5b8 (Inherited: 0x448)
struct AB_AthenaMapMarkerBase_C : AFortPlayerMarkerBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x448(0x08)
	struct UStaticMeshComponent* PingMarkerProto; // 0x450(0x08)
	struct UStaticMeshComponent* SM-Target; // 0x458(0x08)
	float OnProtoMarkerPlaced_RampPow_83EEC58A4783B077FB03728C433B4B7E; // 0x460(0x04)
	float OnProtoMarkerPlaced_Pinch_83EEC58A4783B077FB03728C433B4B7E; // 0x464(0x04)
	float OnProtoMarkerPlaced_Glow_83EEC58A4783B077FB03728C433B4B7E; // 0x468(0x04)
	enum class ETimelineDirection OnProtoMarkerPlaced__Direction_83EEC58A4783B077FB03728C433B4B7E; // 0x46c(0x01)
	char pad_46D[0x3]; // 0x46d(0x03)
	struct UTimelineComponent* OnProtoMarkerPlaced; // 0x470(0x08)
	bool bUseProtoMarker; // 0x478(0x01)
	char pad_479[0x7]; // 0x479(0x07)
	struct UMaterialInstanceDynamic* MIDProtoMarker; // 0x480(0x08)
	struct FFortWorldMarkerData MarkerData; // 0x488(0x130)

	void UserConstructionScript(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnProtoMarkerPlaced__FinishedFunc(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnProtoMarkerPlaced__UpdateFunc(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnProtoMarkerPlaced__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnMarkerPlaced(); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerPlaced // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnSetupMarker(struct FFortWorldMarkerData MarkerData); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnSetupMarker // (Event|Protected|HasOutParms|BlueprintEvent) // @ game+0xda7c34
	void OnMarkerColorChanged(struct FLinearColor InColor); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.OnMarkerColorChanged // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_AthenaMapMarkerBase(int32_t EntryPoint); // Function B_AthenaMapMarkerBase.B_AthenaMapMarkerBase_C.ExecuteUbergraph_B_AthenaMapMarkerBase // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

