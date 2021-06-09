// SolarisGeneratedClass Components_dynamic_activation_component.Context_dynamic_activation_component$WaitForTransitionComplete
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_dynamic_activation_component$WaitForTransitionComplete : Utask {
	struct Udynamic_activation_component* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Components_dynamic_activation_component.Context_dynamic_activation_component$WaitForTransitionComplete.Update // (Native|Public|HasOutParms) // @ game+0x43474ec
};

// SolarisGeneratedClass Components_dynamic_activation_component.Context_dynamic_activation_component$WaitForTransitionStart
// Size: 0xb0 (Inherited: 0xa8)
struct UContext_dynamic_activation_component$WaitForTransitionStart : Utask {
	struct Udynamic_activation_component* _Self; // 0xa8(0x08)

	int32_t Update(); // Function Components_dynamic_activation_component.Context_dynamic_activation_component$WaitForTransitionStart.Update // (Native|Public|HasOutParms) // @ game+0x430bb9c
};

// SolarisGeneratedClass Components_dynamic_activation_component.dynamic_activation_component
// Size: 0x130 (Inherited: 0xb8)
struct Udynamic_activation_component : UEntityDynamicActivationComponent {
	char pad_B8[0x20]; // 0xb8(0x20)
	struct FDelegate __verse_0x8D84A58D_LinkComponent; // 0xd8(0x10)
	struct FDelegate __verse_0xB37CBF7C_Reset; // 0xc8(0x10)
	struct FDelegate __verse_0x8C7723C0_StartTransition; // 0xb8(0x10)
	struct FDelegate __verse_0x15F9AC9C_UnlinkComponent; // 0xe8(0x10)
	struct FDelegate __verse_0x25AD5386_WaitForTransitionComplete; // 0x108(0x10)
	struct FDelegate __verse_0xAD0935BF_WaitForTransitionStart; // 0xf8(0x10)

	struct Utask* WaitForTransitionStart(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Components_dynamic_activation_component.dynamic_activation_component.WaitForTransitionStart // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	struct Utask* WaitForTransitionComplete(struct Utask* __verse_0xC1E81372_CallingTask, int32_t __verse_0xA3A00DDB_CallerResumeState); // Function Components_dynamic_activation_component.dynamic_activation_component.WaitForTransitionComplete // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	void UnlinkComponent(struct UEntityComponent* __verse_0xEE9D0EE3_componentToUnlink); // Function Components_dynamic_activation_component.dynamic_activation_component.UnlinkComponent // (Native|Public|BlueprintCallable) // @ game+0x43474d0
	void StartTransition(float __verse_0xFD6BB246_secondsToChange, enum class activation_state __verse_0xDE4C766A_targetState); // Function Components_dynamic_activation_component.dynamic_activation_component.StartTransition // (Native|Public|BlueprintCallable) // @ game+0x43474c8
	void Reset(); // Function Components_dynamic_activation_component.dynamic_activation_component.Reset // (Native|Public|BlueprintCallable) // @ game+0x4347440
	void LinkComponent(struct UEntityComponent* __verse_0x5F2F2619_componentToLink); // Function Components_dynamic_activation_component.dynamic_activation_component.LinkComponent // (Native|Public|BlueprintCallable) // @ game+0x43473f0
	void $InitCDO(); // Function Components_dynamic_activation_component.dynamic_activation_component.$InitCDO // (None) // @ game+0xda7c34
};

