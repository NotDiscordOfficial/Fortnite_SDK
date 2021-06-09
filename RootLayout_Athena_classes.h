// WidgetBlueprintGeneratedClass RootLayout_Athena.RootLayout_Athena_C
// Size: 0x408 (Inherited: 0x3b8)
struct URootLayout_Athena_C : UFortRootViewportLayout_Athena {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x3b8(0x08)
	struct UConfirmationWindow_C* ConfirmationWindow; // 0x3c0(0x08)
	struct UProgressModalWidget_C* ControllerDisconnectedModal; // 0x3c8(0x08)
	bool bClosingErrorDialog; // 0x3d0(0x01)
	char pad_3D1[0x7]; // 0x3d1(0x07)
	struct FText QuitTitle; // 0x3d8(0x18)
	struct FText QuitMessage; // 0x3f0(0x18)

	bool IsConsole(); // Function RootLayout_Athena.RootLayout_Athena_C.IsConsole // (Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure) // @ game+0xda7c34
	void DialogResult_0099D78247C40A9775C753A2024EA419(enum class EFortDialogResult Result, struct FName ResultName); // Function RootLayout_Athena.RootLayout_Athena_C.DialogResult_0099D78247C40A9775C753A2024EA419 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function RootLayout_Athena.RootLayout_Athena_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnGameWindowCloseButtonClicked(); // Function RootLayout_Athena.RootLayout_Athena_C.OnGameWindowCloseButtonClicked // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void OnModalQueueEmptied_2(); // Function RootLayout_Athena.RootLayout_Athena_C.OnModalQueueEmptied_2 // (BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_RootLayout_Athena(int32_t EntryPoint); // Function RootLayout_Athena.RootLayout_Athena_C.ExecuteUbergraph_RootLayout_Athena // (Final|UbergraphFunction) // @ game+0xda7c34
};

