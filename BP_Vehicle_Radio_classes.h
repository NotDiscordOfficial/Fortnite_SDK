// BlueprintGeneratedClass BP_Vehicle_Radio.BP_Vehicle_Radio_C
// Size: 0x278 (Inherited: 0x220)
struct ABP_Vehicle_Radio_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x08)
	struct UMediaSoundComponent* RadioSpeaker; // 0x228(0x08)
	struct USceneComponent* DefaultSceneRoot; // 0x230(0x08)
	struct UMediaPlayer* RadioMediaPlayer; // 0x238(0x08)
	struct UFortStreamMediaSource* RadioMediaSource; // 0x240(0x08)
	struct TArray<struct FString> RadioStations; // 0x248(0x10)
	int32_t RadioRetryCounter; // 0x258(0x04)
	int32_t RadioRetries; // 0x25c(0x04)
	struct FString RadioURL; // 0x260(0x10)
	bool RadioURLFailure; // 0x270(0x01)
	char pad_271[0x3]; // 0x271(0x03)
	int32_t RadioStationIndex; // 0x274(0x04)

	void RadioSendAnalytics(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioSendAnalytics // (Public|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioClosed(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioClosed // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioRetry(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioRetry // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioUnbindEvents(bool JustURL); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioUnbindEvents // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioPlay(struct FString URL); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioPlay // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ReceiveBeginPlay(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.ReceiveBeginPlay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void StartRadio(int32_t StationIndex); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.StartRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void PlayRadio(struct FString RetrievedUrl); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.PlayRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioURLFailed(struct FString RetrievedUrl); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioURLFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void RadioOpenFailed(struct FString FailedUrl); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.RadioOpenFailed // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void StopRadio(); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.StopRadio // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_BP_Vehicle_Radio(int32_t EntryPoint); // Function BP_Vehicle_Radio.BP_Vehicle_Radio_C.ExecuteUbergraph_BP_Vehicle_Radio // (Final|UbergraphFunction|HasDefaults) // @ game+0xda7c34
};

