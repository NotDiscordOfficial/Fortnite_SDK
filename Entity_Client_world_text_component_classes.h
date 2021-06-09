// SolarisGeneratedClass Entity_Client_world_text_component.world_text_component
// Size: 0x168 (Inherited: 0x88)
struct Uworld_text_component : UEntityActorTextDisplayComponent {
	char pad_88[0xb0]; // 0x88(0xb0)
	struct FDelegate __verse_0x39C42DE4_getHorizontalAlignment; // 0x138(0x10)
	struct FDelegate __verse_0xBF9B58D2_getRelativeLocation; // 0xf8(0x10)
	struct FDelegate __verse_0xEA8FBD0B_getSize; // 0xb8(0x10)
	struct FDelegate __verse_0xBE2CFB0A_getTextRenderColor; // 0xd8(0x10)
	struct FDelegate __verse_0xBD7E4700_getVerticalAlignment; // 0x158(0x10)
	struct FDelegate __verse_0xCCDB1427_getWorldText; // 0x98(0x10)
	struct FDelegate __verse_0x4B704A1C_setHorizontalAlignment; // 0x128(0x10)
	struct FDelegate __verse_0x296BD70F_setRelativeLocation; // 0xe8(0x10)
	struct FDelegate __verse_0xE16EA6F6_setRelativeRotation; // 0x108(0x10)
	struct FDelegate __verse_0xBC75EE97_setRelativeScale; // 0x118(0x10)
	struct FDelegate __verse_0x4EAA3516_setSize; // 0xa8(0x10)
	struct FDelegate __verse_0xE3765E3F_setTextRenderColor; // 0xc8(0x10)
	struct FDelegate __verse_0xF899D169_setVerticalAlignment; // 0x148(0x10)
	struct FDelegate __verse_0xFEA92FBC_setWorldText; // 0x88(0x10)

	void setWorldText(struct FString __verse_0x4069CADB_Text); // Function Entity_Client_world_text_component.world_text_component.setWorldText // (Native|Public|BlueprintCallable) // @ game+0x43480f4
	void SetVerticalAlignment(enum class world_text_vertical_alignment __verse_0x3AF80D16_value); // Function Entity_Client_world_text_component.world_text_component.SetVerticalAlignment // (Native|Public|BlueprintCallable) // @ game+0x43480e4
	void SetTextRenderColor(struct UColor* __verse_0x3AF80D16_value); // Function Entity_Client_world_text_component.world_text_component.SetTextRenderColor // (Native|Public|BlueprintCallable) // @ game+0x43480cc
	void SetSize(float __verse_0x31A8F10C_Value); // Function Entity_Client_world_text_component.world_text_component.SetSize // (Native|Public|BlueprintCallable) // @ game+0x43480b4
	void SetRelativeScale(struct Uvector3* __verse_0x5FA07D28_relativeScale); // Function Entity_Client_world_text_component.world_text_component.SetRelativeScale // (Native|Public|BlueprintCallable) // @ game+0x434809c
	void SetRelativeRotation(struct Uvector3* __verse_0xA6C7E40A_relativeRotation); // Function Entity_Client_world_text_component.world_text_component.SetRelativeRotation // (Native|Public|BlueprintCallable) // @ game+0x4348094
	void SetRelativeLocation(struct Uvector3* __verse_0x6EC295F3_relativeLocation); // Function Entity_Client_world_text_component.world_text_component.SetRelativeLocation // (Native|Public|BlueprintCallable) // @ game+0x434808c
	void SetHorizontalAlignment(enum class world_text_horizontal_alignment __verse_0x3AF80D16_value); // Function Entity_Client_world_text_component.world_text_component.SetHorizontalAlignment // (Native|Public|BlueprintCallable) // @ game+0x4348064
	struct FString getWorldText(); // Function Entity_Client_world_text_component.world_text_component.getWorldText // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347df4
	enum class world_text_vertical_alignment GetVerticalAlignment(); // Function Entity_Client_world_text_component.world_text_component.GetVerticalAlignment // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347dd0
	struct UColor* GetTextRenderColor(); // Function Entity_Client_world_text_component.world_text_component.GetTextRenderColor // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347d3c
	float GetSize(); // Function Entity_Client_world_text_component.world_text_component.GetSize // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4298da8
	struct Uvector3* GetRelativeLocation(); // Function Entity_Client_world_text_component.world_text_component.GetRelativeLocation // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347c20
	enum class world_text_horizontal_alignment GetHorizontalAlignment(); // Function Entity_Client_world_text_component.world_text_component.GetHorizontalAlignment // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347bb4
	void $InitCDO(); // Function Entity_Client_world_text_component.world_text_component.$InitCDO // (None) // @ game+0xda7c34
};

