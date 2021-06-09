// Class ModularGameplay.GameFrameworkComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UGameFrameworkComponent : UActorComponent {
};

// Class ModularGameplay.GameStateComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UGameStateComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.ControllerComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UControllerComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.GameFrameworkComponentManager
// Size: 0x120 (Inherited: 0x30)
struct UGameFrameworkComponentManager : UGameInstanceSubsystem {
	char pad_30[0xf0]; // 0x30(0xf0)

	void RemoveReceiver(struct AActor* Receiver); // Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x37ece34
	void AddReceiver(struct AActor* Receiver, bool bAddOnlyInGameWorlds); // Function ModularGameplay.GameFrameworkComponentManager.AddReceiver // (Final|RequiredAPI|Native|Public|BlueprintCallable) // @ game+0x37ecd0c
};

// Class ModularGameplay.PawnComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPawnComponent : UGameFrameworkComponent {
};

// Class ModularGameplay.PlayerStateComponent
// Size: 0xb0 (Inherited: 0xb0)
struct UPlayerStateComponent : UGameFrameworkComponent {
};

