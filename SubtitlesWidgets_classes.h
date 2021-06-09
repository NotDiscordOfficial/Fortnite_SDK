// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
// Size: 0x48 (Inherited: 0x28)
struct UFortMediaSubtitlesPlayer : UObject {
	char pad_28[0x8]; // 0x28(0x08)
	struct UOverlays* SourceSubtitles; // 0x30(0x08)
	char pad_38[0x10]; // 0x38(0x10)

	void Stop(); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Stop // (Final|Native|Public|BlueprintCallable) // @ game+0x40ff578
	void SetSubtitles(struct UOverlays* Subtitles); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.SetSubtitles // (Final|Native|Public|BlueprintCallable) // @ game+0x40ff4e4
	void Play(); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.Play // (Final|Native|Public|BlueprintCallable) // @ game+0x40ff4d0
	void BindToMediaPlayer(struct UMediaPlayer* InMediaPlayer); // Function SubtitlesWidgets.FortMediaSubtitlesPlayer.BindToMediaPlayer // (Final|Native|Public|BlueprintCallable) // @ game+0x40ff358
};

// Class SubtitlesWidgets.SubtitleDisplay
// Size: 0x440 (Inherited: 0x108)
struct USubtitleDisplay : UWidget {
	struct FSubtitleFormat Format; // 0x108(0x04)
	char pad_10C[0x4]; // 0x10c(0x04)
	struct USubtitleDisplayOptions* Options; // 0x110(0x08)
	float WrapTextAt; // 0x118(0x04)
	bool bPreviewMode; // 0x11c(0x01)
	char pad_11D[0x3]; // 0x11d(0x03)
	struct FText PreviewText; // 0x120(0x18)
	struct FTextBlockStyle GeneratedStyle; // 0x138(0x270)
	struct FSlateBrush GeneratedBackgroundBorder; // 0x3a8(0x88)
	char pad_430[0x10]; // 0x430(0x10)

	bool HasSubtitles(); // Function SubtitlesWidgets.SubtitleDisplay.HasSubtitles // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // @ game+0x40ff468
};

// Class SubtitlesWidgets.SubtitleDisplayOptions
// Size: 0x168 (Inherited: 0x30)
struct USubtitleDisplayOptions : UDataAsset {
	struct FSlateFontInfo Font; // 0x30(0x58)
	int32_t DisplayTextSizes[0x5]; // 0x88(0x14)
	struct FLinearColor DisplayTextColors[0x2]; // 0x9c(0x20)
	float DisplayBorderSize[0x3]; // 0xbc(0x0c)
	float DisplayBackgroundOpacity[0x5]; // 0xc8(0x14)
	char pad_DC[0x4]; // 0xdc(0x04)
	struct FSlateBrush BackgroundBrush; // 0xe0(0x88)
};

// Class SubtitlesWidgets.SubtitleDisplaySubsystem
// Size: 0x50 (Inherited: 0x30)
struct USubtitleDisplaySubsystem : UGameInstanceSubsystem {
	char pad_30[0x18]; // 0x30(0x18)
	struct FSubtitleFormat SubtitleFormat; // 0x48(0x04)
	char pad_4C[0x4]; // 0x4c(0x04)
};

