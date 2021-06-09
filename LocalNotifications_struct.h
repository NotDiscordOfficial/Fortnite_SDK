// Enum LocalNotifications.ELocalNotificationEventType
enum class ELocalNotificationEventType : uint8 {
	None,
	FirstLogin,
	Max,
};

// Enum LocalNotifications.ELocalNotificationParams
enum class ELocalNotificationParams : uint8 {
	BestHour24ToNotify,
	SpecificFireDateTime,
	HoursSinceLastSession,
	HoursAfterEvent_Max,
	HoursAfterEvent_Min,
	Max,
};

// Enum LocalNotifications.ELocalNotificationType
enum class ELocalNotificationType : uint8 {
	SpecificDateTime,
	RangeDateTime,
	Max,
};

// ScriptStruct LocalNotifications.LocalNotificationData
// Size: 0x90 (Inherited: 0x00)
struct FLocalNotificationData {
	bool Enable; // 0x00(0x01)
	enum class ELocalNotificationType Type; // 0x01(0x01)
	enum class ELocalNotificationEventType EventType; // 0x02(0x01)
	char pad_3[0x5]; // 0x03(0x05)
	struct TMap<enum class ELocalNotificationParams, struct FString> ParamsByName; // 0x08(0x50)
	bool LocalTime; // 0x58(0x01)
	char pad_59[0x7]; // 0x59(0x07)
	struct FString TitleKey; // 0x60(0x10)
	struct FString BodyKey; // 0x70(0x10)
	struct FString ActivationEvent; // 0x80(0x10)
};

