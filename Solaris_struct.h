// Enum Solaris.ESolarisDebugMessageCommand
enum class ESolarisDebugMessageCommand : uint8 {
	Connect,
	Disconnect,
	Message,
	ESolarisDebugMessageCommand_MAX,
};

// Enum Solaris.ESolarisDebugMessageClientId
enum class ESolarisDebugMessageClientId : uint8 {
	None,
	Max,
};

// ScriptStruct Solaris.SolarisDebugMessage
// Size: 0x18 (Inherited: 0x00)
struct FSolarisDebugMessage {
	enum class ESolarisDebugMessageClientId ClientId; // 0x00(0x04)
	enum class ESolarisDebugMessageCommand Command; // 0x04(0x04)
	struct TArray<char> MessageBodyUTF8; // 0x08(0x10)
};

