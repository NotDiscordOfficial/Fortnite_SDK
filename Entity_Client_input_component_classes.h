// SolarisGeneratedClass Entity_Client_input_component.input_component
// Size: 0xa8 (Inherited: 0x68)
struct Uinput_component : UEntityActorLocalInputComponent {
	char pad_68[0x20]; // 0x68(0x20)
	struct FDelegate __verse_0x44D2A595_bindToInputAxis; // 0x88(0x10)
	struct FDelegate __verse_0x19C9839A_getCurrentInputAxisValue; // 0x98(0x10)
	struct FDelegate __verse_0x577DCB4D_setAutoReceiveInput; // 0x68(0x10)
	struct FDelegate __verse_0x09FDF4E1_setEnabled; // 0x78(0x10)

	void SetEnabled(char __verse_0x5CDFC2A5_Enabled); // Function Entity_Client_input_component.input_component.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x434804c
	void setAutoReceiveInput(enum class local_controller_slot __verse_0x4A284B23_ControllerSlot); // Function Entity_Client_input_component.input_component.setAutoReceiveInput // (Native|Public|BlueprintCallable) // @ game+0x434800c
	float getCurrentInputAxisValue(struct FString __verse_0xB2EFD1C1_AxisName); // Function Entity_Client_input_component.input_component.getCurrentInputAxisValue // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347b2c
	void bindToInputAxis(struct FString __verse_0xB2EFD1C1_AxisName); // Function Entity_Client_input_component.input_component.bindToInputAxis // (Native|Public|BlueprintCallable) // @ game+0x4347618
	void $InitCDO(); // Function Entity_Client_input_component.input_component.$InitCDO // (None) // @ game+0xda7c34
};

