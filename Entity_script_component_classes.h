// SolarisGeneratedClass Entity_script_component.script_component
// Size: 0x1f0 (Inherited: 0xb8)
struct Uscript_component : UEntityScriptComponent {
	char pad_B8[0x100]; // 0xb8(0x100)
	char __verse_0xFAA77A2E_AllowMultiple : 1; // 0x1b8(0x01)
	struct FDelegate __verse_0x09FAA202_IsEnabled; // 0x158(0x10)
	struct FDelegate __verse_0x87C8FE88_addToCreateComponentList; // 0xc8(0x10)
	struct FDelegate __verse_0x80C1086E_addToRequiredComponentList; // 0xd8(0x10)
	struct FDelegate __verse_0xE86B19C0_getAllComponentsOfType; // 0x188(0x10)
	struct FDelegate __verse_0x129F44CC_getComponentOfType; // 0x178(0x10)
	struct FDelegate __verse_0x2E53CB48_getFullname; // 0x1a8(0x10)
	struct FDelegate __verse_0xE1BDA294_getName; // 0x198(0x10)
	struct FDelegate __verse_0xD8814CF1_onCreate; // 0x108(0x10)
	struct FDelegate __verse_0xCC1EC08C_onEnabledChanged; // 0x168(0x10)
	struct FDelegate __verse_0xA072689C_onEnd; // 0x138(0x10)
	struct FDelegate __verse_0x5122AF9F_onPostCreate; // 0x118(0x10)
	struct FDelegate __verse_0xB5DA33A0_onStart; // 0x128(0x10)
	struct FDelegate __verse_0x7C7BF2B5_onTick; // 0xf8(0x10)
	struct FDelegate __verse_0x09FDF4E1_setEnabled; // 0x148(0x10)
	struct FDelegate __verse_0x99853B5E_setTickEnabled; // 0xe8(0x10)

	void SetTickEnabled(char __verse_0xD50E43B9_InIsEnabled); // Function Entity_script_component.script_component.SetTickEnabled // (Native|Public|BlueprintCallable) // @ game+0x43480d4
	void SetEnabled(char __verse_0x09FAA202_IsEnabled); // Function Entity_script_component.script_component.SetEnabled // (Native|Public|BlueprintCallable) // @ game+0x4348054
	void OnTick(float __verse_0xEDA0BF94_DeltaTime); // Function Entity_script_component.script_component.OnTick // (Public|BlueprintCallable) // @ game+0xda7c34
	void OnStart(); // Function Entity_script_component.script_component.OnStart // (Public|BlueprintCallable) // @ game+0xda7c34
	void onPostCreate(); // Function Entity_script_component.script_component.onPostCreate // (Public|BlueprintCallable) // @ game+0xda7c34
	void OnEnd(); // Function Entity_script_component.script_component.OnEnd // (Public|BlueprintCallable) // @ game+0xda7c34
	void OnEnabledChanged(char __verse_0x09FAA202_IsEnabled); // Function Entity_script_component.script_component.OnEnabledChanged // (Public|BlueprintCallable) // @ game+0xda7c34
	void onCreate(); // Function Entity_script_component.script_component.onCreate // (Public|BlueprintCallable) // @ game+0xda7c34
	struct FString GetName(); // Function Entity_script_component.script_component.GetName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43471a0
	struct FString GetFullName(); // Function Entity_script_component.script_component.GetFullName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347134
	struct UEntityComponent* GetComponentOfType(struct UObject* __verse_0x159E825F_componentType); // Function Entity_script_component.script_component.GetComponentOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347b24
	struct TArray<struct UEntityComponent*> GetAllComponentsOfType(struct UObject* __verse_0x159E825F_componentType); // Function Entity_script_component.script_component.GetAllComponentsOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43479c8
	void addToRequiredComponentList(struct TArray<struct UEntityComponent*> __verse_0xC3E99120_components); // Function Entity_script_component.script_component.addToRequiredComponentList // (Native|Public|BlueprintCallable) // @ game+0x4347608
	void addToCreateComponentList(struct TArray<struct UEntityComponent*> __verse_0xC3E99120_components); // Function Entity_script_component.script_component.addToCreateComponentList // (Native|Public|BlueprintCallable) // @ game+0x4347600
	char IsEnabled(); // Function Entity_script_component.script_component.IsEnabled // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43473c8
	void $InitCDO(); // Function Entity_script_component.script_component.$InitCDO // (None) // @ game+0xda7c34
};

