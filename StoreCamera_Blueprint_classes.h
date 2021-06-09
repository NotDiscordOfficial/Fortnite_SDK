// BlueprintGeneratedClass StoreCamera_Blueprint.StoreCamera_Blueprint_C
// Size: 0x860 (Inherited: 0x7e0)
struct AStoreCamera_Blueprint_C : AFortCameraBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x7e0(0x08)
	struct UStaticMeshComponent* Mesh-DarkenBG; // 0x7e8(0x08)
	struct UCameraComponent* CameraPlaceholderGround; // 0x7f0(0x08)
	float ChoicePack_NewTrack_0_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x7f8(0x04)
	enum class ETimelineDirection ChoicePack__Direction_ACA3841D4D5084BE3482FA8EBB7CE9C0; // 0x7fc(0x01)
	char pad_7FD[0x3]; // 0x7fd(0x03)
	struct UTimelineComponent* ChoicePack; // 0x800(0x08)
	float Timeline_0_NewTrack_0_6555812E4B246E6144D3C99FC49F7FE9; // 0x808(0x04)
	enum class ETimelineDirection Timeline_0__Direction_6555812E4B246E6144D3C99FC49F7FE9; // 0x80c(0x01)
	char pad_80D[0x3]; // 0x80d(0x03)
	struct UTimelineComponent* Timeline_1; // 0x810(0x08)
	struct FVector CameraGroundLoc; // 0x818(0x0c)
	struct FRotator CameraGroundRot; // 0x824(0x0c)
	struct FVector CameraOriginalLoc; // 0x830(0x0c)
	struct FRotator CameraOriginalRot; // 0x83c(0x0c)
	bool CameraInStartPos; // 0x848(0x01)
	char pad_849[0x7]; // 0x849(0x07)
	struct AStorePinataMaster_Parent_C* PinataInLevel; // 0x850(0x08)
	struct AStoreCardReveal_Parent_C* CardRevealInLevel; // 0x858(0x08)

	void UserConstructionScript(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__FinishedFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void Timeline_0__UpdateFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.Timeline_0__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void ChoicePack__FinishedFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__FinishedFunc // (BlueprintEvent) // @ game+0xda7c34
	void ChoicePack__UpdateFunc(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePack__UpdateFunc // (BlueprintEvent) // @ game+0xda7c34
	void OnActivated(struct AFortPlayerController* PlayerController); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnActivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnDeactivated(struct AFortPlayerController* PlayerController); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OnDeactivated // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OpeningCameraTransition(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.OpeningCameraTransition // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ResetCamera(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ResetCamera // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DarkenBGVisibility(bool Enable); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.DarkenBGVisibility // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ChoicePackFOV-Out(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-Out // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ChoicePackFOV-In(); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ChoicePackFOV-In // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_StoreCamera_Blueprint(int32_t EntryPoint); // Function StoreCamera_Blueprint.StoreCamera_Blueprint_C.ExecuteUbergraph_StoreCamera_Blueprint // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

