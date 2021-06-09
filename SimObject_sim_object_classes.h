// SolarisGeneratedClass SimObject_sim_object.sim_object
// Size: 0xc0 (Inherited: 0x28)
struct Usim_object : UObject {
	struct FDelegate __verse_0x7B79032D_AddComponent; // 0x28(0x10)
	char pad_38[0x50]; // 0x38(0x50)
	struct FDelegate __verse_0x6C904067_Destroy; // 0x88(0x10)
	struct FDelegate __verse_0x464F1E38_GetAllComponentsOfType; // 0x68(0x10)
	struct FDelegate __verse_0xCFA403D7_GetComponentOfType; // 0x58(0x10)
	struct FDelegate __verse_0xA94C9B0D_GetFullname; // 0xa8(0x10)
	struct FDelegate __verse_0x411E1DA2_GetName; // 0x98(0x10)
	struct FDelegate __verse_0x608EE504_GetOrCreateComponentOfType; // 0x78(0x10)
	struct FDelegate __verse_0x22CF50C1_RemoveComponent; // 0x38(0x10)
	struct FDelegate __verse_0x3AC44FD1_SetupComponents; // 0x48(0x10)

	OptionalProperty SetupComponents(struct TArray<struct UEntityComponent*> __verse_0x50E90E83_RequiredComponentClasses, struct TArray<struct UEntityComponent*> __verse_0x0104D211_AddComponentClasses); // Function SimObject_sim_object.sim_object.SetupComponents // (Public|HasOutParms|BlueprintCallable) // @ game+0xda7c34
	char RemoveComponent(struct UEntityComponent* __verse_0xB7171E04_Component); // Function SimObject_sim_object.sim_object.RemoveComponent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347430
	struct UEntityComponent* GetOrCreateComponentOfType(struct UObject* __verse_0x3F21770B_ComponentType); // Function SimObject_sim_object.sim_object.GetOrCreateComponentOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347214
	struct FString GetName(); // Function SimObject_sim_object.sim_object.GetName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43471a0
	struct FString GetFullName(); // Function SimObject_sim_object.sim_object.GetFullName // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x4347134
	struct UEntityComponent* GetComponentOfType(struct UObject* __verse_0x3F21770B_ComponentType); // Function SimObject_sim_object.sim_object.GetComponentOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434712c
	struct TArray<struct UEntityComponent*> GetAllComponentsOfType(struct UObject* __verse_0x3F21770B_ComponentType); // Function SimObject_sim_object.sim_object.GetAllComponentsOfType // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43470f0
	char Destroy(); // Function SimObject_sim_object.sim_object.Destroy // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x43470a4
	struct UEntityComponent* AddComponent(struct UObject* __verse_0x3F21770B_ComponentType); // Function SimObject_sim_object.sim_object.AddComponent // (Native|Public|HasOutParms|BlueprintCallable) // @ game+0x434704c
	struct Usim_object* SpawnC(struct UObject* __verse_0x9866B8E7_contextObject, struct Uvector3* __verse_0xA82B0967_Position, struct FString __verse_0x38D9A616_Name); // Function SimObject_sim_object.sim_object.SpawnC // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43474a8
	struct Usim_object* SpawnB(struct UObject* __verse_0xB2D94DB3_ContextObject, struct Uvector3* __verse_0xA82B0967_Position, struct Uvector3* __verse_0x78C70FF3_Rotation, struct Uvector3* __verse_0xA376805D_Scale, struct FString __verse_0x38D9A616_Name); // Function SimObject_sim_object.sim_object.SpawnB // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x43474a0
	struct Usim_object* SpawnA(struct UObject* __verse_0xB2D94DB3_ContextObject, struct UTransform* __verse_0x61C3007D_Transform, struct FString __verse_0x38D9A616_Name); // Function SimObject_sim_object.sim_object.SpawnA // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347490
	struct UEntityComponent* GetComponentOfTypeC(struct UEntityComponent* __verse_0xB7171E04_Component, struct UObject* __verse_0x72E298E9_Type); // Function SimObject_sim_object.sim_object.GetComponentOfTypeC // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x4347124
	char DestroyObject(struct UEntityComponent* __verse_0xB7171E04_Component); // Function SimObject_sim_object.sim_object.DestroyObject // (Native|Static|Public|HasOutParms|BlueprintCallable) // @ game+0x434709c
	void $InitCDO(); // Function SimObject_sim_object.sim_object.$InitCDO // (None) // @ game+0xda7c34
};

