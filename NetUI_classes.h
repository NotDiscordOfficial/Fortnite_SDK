// Class NetUI.BadNetworkIndicator
// Size: 0x2f8 (Inherited: 0x2c8)
struct UBadNetworkIndicator : UFortHUDElementWidget {
	bool bEnabled; // 0x2c8(0x01)
	char pad_2C9[0x3]; // 0x2c9(0x03)
	float MinimumDisplayTime; // 0x2cc(0x04)
	float UpdateTime; // 0x2d0(0x04)
	float InitialDelay; // 0x2d4(0x04)
	char pad_2D8[0x20]; // 0x2d8(0x20)

	void UpdateDisplay(); // Function NetUI.BadNetworkIndicator.UpdateDisplay // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	bool ShouldDisplay(); // Function NetUI.BadNetworkIndicator.ShouldDisplay // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff2e8
	bool HasSeverePing(); // Function NetUI.BadNetworkIndicator.HasSeverePing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff2c4
	bool HasSeverePacketLoss(); // Function NetUI.BadNetworkIndicator.HasSeverePacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff2a0
	bool HasBadPing(); // Function NetUI.BadNetworkIndicator.HasBadPing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff27c
	bool HasBadPacketLoss(); // Function NetUI.BadNetworkIndicator.HasBadPacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff258
	float GetPing(); // Function NetUI.BadNetworkIndicator.GetPing // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff230
	float GetPacketLoss(); // Function NetUI.BadNetworkIndicator.GetPacketLoss // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // @ game+0x3fff208
};

// Class NetUI.NetDebugWidget
// Size: 0x348 (Inherited: 0x260)
struct UNetDebugWidget : UUserWidget {
	struct UCommonTextBlock* PingUI; // 0x260(0x08)
	struct UCommonTextBlock* PacketInRateUI; // 0x268(0x08)
	struct UCommonTextBlock* PacketOutRateUI; // 0x270(0x08)
	struct UCommonTextBlock* PacketInLossUI; // 0x278(0x08)
	struct UCommonTextBlock* PacketOutLossUI; // 0x280(0x08)
	struct UCommonTextBlock* UpBandwidthUI; // 0x288(0x08)
	struct UCommonTextBlock* DownBandwidthUI; // 0x290(0x08)
	char pad_298[0xb0]; // 0x298(0xb0)

	void StopTimer(); // Function NetUI.NetDebugWidget.StopTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x1d3fe18
	void StartTimer(); // Function NetUI.NetDebugWidget.StartTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x3fff30c
};

// Class NetUI.NetGraph
// Size: 0x290 (Inherited: 0x260)
struct UNetGraph : UUserWidget {
	struct FColor BackgroundColor; // 0x260(0x04)
	struct FColor PingLineColor; // 0x264(0x04)
	struct FColor QueuedBunchesLineColor; // 0x268(0x04)
	struct FColor PacketLossLineColor; // 0x26c(0x04)
	struct FVector2D DesiredSize; // 0x270(0x08)
	float MaxPingToGraph; // 0x278(0x04)
	char pad_27C[0x14]; // 0x27c(0x14)
};

