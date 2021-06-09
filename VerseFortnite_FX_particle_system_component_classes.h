// SolarisGeneratedClass VerseFortnite_FX_particle_system_component.particle_system_component
// Size: 0xd0 (Inherited: 0xa0)
struct Uparticle_system_component : UParticleSystemComponentBase {
	char pad_A0[0x10]; // 0xa0(0x10)
	struct FDelegate __verse_0x334F24FC_activate; // 0xb0(0x10)
	struct FDelegate __verse_0x3EADB60C_deactivate; // 0xc0(0x10)
	struct FDelegate __verse_0xB7ADFFF5_setParticleSystem; // 0xa0(0x10)

	void setParticleSystem(struct Uparticle_system* __verse_0x7EC3C5BB_particleSystem); // Function VerseFortnite_FX_particle_system_component.particle_system_component.setParticleSystem // (Native|Public|BlueprintCallable) // @ game+0x430c590
	void Deactivate(); // Function VerseFortnite_FX_particle_system_component.particle_system_component.Deactivate // (Native|Public|BlueprintCallable) // @ game+0x430bf68
	void Activate(); // Function VerseFortnite_FX_particle_system_component.particle_system_component.Activate // (Native|Public|BlueprintCallable) // @ game+0x430bc80
	void $InitCDO(); // Function VerseFortnite_FX_particle_system_component.particle_system_component.$InitCDO // (None) // @ game+0xda7c34
};

