// WidgetBlueprintGeneratedClass ControllerDisconnectedModal.ControllerDisconnectedModal_C
// Size: 0x578 (Inherited: 0x560)
struct UControllerDisconnectedModal_C : UFortControllerDisconnectedModal {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x560(0x08)
	struct UCommonActionWidget* CommonActionWidget_165; // 0x568(0x08)
	struct ULightbox_C* Lightbox; // 0x570(0x08)

	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.OnAnalogValueChanged // (Event|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent) // @ game+0xda7c34
	void Construct(); // Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_ControllerDisconnectedModal(int32_t EntryPoint); // Function ControllerDisconnectedModal.ControllerDisconnectedModal_C.ExecuteUbergraph_ControllerDisconnectedModal // (Final|UbergraphFunction) // @ game+0xda7c34
};

