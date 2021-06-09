// WidgetBlueprintGeneratedClass WebLogin.WebLogin_C
// Size: 0x478 (Inherited: 0x460)
struct UWebLogin_C : UFortWebLoginWidget {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x460(0x08)
	struct UCircularThrobber* Throbber; // 0x468(0x08)
	struct UBorder* WebContent; // 0x470(0x08)

	void DisplayWidget(struct UWidget* WebWidget); // Function WebLogin.WebLogin_C.DisplayWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void DismissWidget(); // Function WebLogin.WebLogin_C.DismissWidget // (Event|Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_WebLogin(int32_t EntryPoint); // Function WebLogin.WebLogin_C.ExecuteUbergraph_WebLogin // (Final|UbergraphFunction) // @ game+0xda7c34
};

