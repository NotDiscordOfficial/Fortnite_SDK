// BlueprintGeneratedClass B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C
// Size: 0xe0c (Inherited: 0xe00)
struct AB_HeldObject_Generic_Component_C : AFortWeapon {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0xe00(0x08)
	int32_t BattleLabHudKeyDataIndex; // 0xe08(0x04)

	void K2_OnUnEquip(); // Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.K2_OnUnEquip // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void OnWeaponAttached(); // Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.OnWeaponAttached // (Event|Public|BlueprintEvent) // @ game+0xda7c34
	void ExecuteUbergraph_B_HeldObject_Generic_Component(int32_t EntryPoint); // Function B_HeldObject_Generic_Component.B_HeldObject_Generic_Component_C.ExecuteUbergraph_B_HeldObject_Generic_Component // (Final|UbergraphFunction) // @ game+0xda7c34
};

