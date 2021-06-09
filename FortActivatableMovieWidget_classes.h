// WidgetBlueprintGeneratedClass FortActivatableMovieWidget.FortActivatableMovieWidget_C
// Size: 0x509 (Inherited: 0x4e8)
struct UFortActivatableMovieWidget_C : UFortActivatableMovieWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x4e8(0x08)
	struct UWidgetAnimation* WhiteFade; // 0x4f0(0x08)
	struct USafeZone* MainSafeZone; // 0x4f8(0x08)
	struct USafeZone* SafeZone_1; // 0x500(0x08)
	bool NewVar_1; // 0x508(0x01)

	void Construct(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void StartFadeFromWhite(); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.StartFadeFromWhite // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_FortActivatableMovieWidget(int32_t EntryPoint); // Function FortActivatableMovieWidget.FortActivatableMovieWidget_C.ExecuteUbergraph_FortActivatableMovieWidget // (Final|UbergraphFunction) // @ game+0xda7c34
};

