// WidgetBlueprintGeneratedClass HousepartyWelcomeToast.HousepartyWelcomeToast_C
// Size: 0x2c8 (Inherited: 0x298)
struct UHousepartyWelcomeToast_C : UFortToastWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x298(0x08)
	struct UImage* Image; // 0x2a0(0x08)
	struct UImage* Image_2; // 0x2a8(0x08)
	struct UImage* Image_98; // 0x2b0(0x08)
	struct UImage* Image_344; // 0x2b8(0x08)
	struct UCommonTextBlock* Text_StreamGameToFriends; // 0x2c0(0x08)

	void Construct(); // Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnSetToast(struct UFortUINotification* ToastNotification); // Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.OnSetToast // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void OnInitialized(); // Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_HousepartyWelcomeToast(int32_t EntryPoint); // Function HousepartyWelcomeToast.HousepartyWelcomeToast_C.ExecuteUbergraph_HousepartyWelcomeToast // (Final|UbergraphFunction) // @ game+0xda7c34
};

