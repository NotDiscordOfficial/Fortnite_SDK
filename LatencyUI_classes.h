// Class LatencyUI.LatencyGraph
// Size: 0x2a0 (Inherited: 0x260)
struct ULatencyGraph : UUserWidget {
	struct FColor TotalLatencyLineColor; // 0x260(0x04)
	struct FColor GameLatencyLineColor; // 0x264(0x04)
	struct FColor RenderLatencyLineColor; // 0x268(0x04)
	struct FColor DriverLatencyLineColor; // 0x26c(0x04)
	struct FColor OSWorkQueueLatencyLineColor; // 0x270(0x04)
	struct FColor GPURenderLatencyLineColor; // 0x274(0x04)
	struct FColor BackgroundColor; // 0x278(0x04)
	float MaxLatencyToGraph; // 0x27c(0x04)
	struct FVector2D DesiredSize; // 0x280(0x08)
	char pad_288[0x18]; // 0x288(0x18)
};

// Class LatencyUI.LatencyWidget
// Size: 0x358 (Inherited: 0x260)
struct ULatencyWidget : UUserWidget {
	char pad_260[0x8]; // 0x260(0x08)
	struct UCommonTextBlock* TotalLatencyUI; // 0x268(0x08)
	struct UCommonTextBlock* GameLatencyUI; // 0x270(0x08)
	struct UCommonTextBlock* RenderLatencyUI; // 0x278(0x08)
	struct UCommonTextBlock* OSWorkLatencyUI; // 0x280(0x08)
	struct UCommonTextBlock* DriverLatencyUI; // 0x288(0x08)
	struct UCommonTextBlock* GPURenderLatencyUI; // 0x290(0x08)
	struct UCommonTextBlock* TweakLatencyUI; // 0x298(0x08)
	char pad_2A0[0xb8]; // 0x2a0(0xb8)

	void StopTimer(); // Function LatencyUI.LatencyWidget.StopTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x42e1498
	void StartTimer(); // Function LatencyUI.LatencyWidget.StartTimer // (Final|Native|Protected|BlueprintCallable) // @ game+0x42e1480
};

