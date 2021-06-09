// WidgetBlueprintGeneratedClass AthenaBoundActionButton.AthenaBoundActionButton_C
// Size: 0xc28 (Inherited: 0xc10)
struct UAthenaBoundActionButton_C : UFortBoundActionButton {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xc10(0x08)
	struct UBorder* ContentBorder; // 0xc18(0x08)
	struct UScaleBox* InputActionIconScale; // 0xc20(0x08)

	void UpdateInputActionIconSize(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.UpdateInputActionIconSize // (Public|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnUpdateInputAction(); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.OnUpdateInputAction // (Event|Protected|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_AthenaBoundActionButton(int32_t EntryPoint); // Function AthenaBoundActionButton.AthenaBoundActionButton_C.ExecuteUbergraph_AthenaBoundActionButton // (Final|UbergraphFunction) // @ game+0xda7c34
};

