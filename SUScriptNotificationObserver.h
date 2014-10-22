@interface SUScriptNotificationObserver : NSObject
{
	id _lock;
	pointer _receivers;
}

+ _networkTypeChangedNotification:
+ dealloc
+ init
+ addEventReceiver:
+ removeEventReceiver:
+ _memoryWarningNotification:
+ _endObservingNotifications
+ _beginObservingNotifications
+ _dispatchEvent:forName:
+ _dispatchEventWithDictionary:forName:
+ _restrictionsChangedNotification:
+ _audioSessionsChangedNotification:
+ _purchaseRequestDidSucceedNotification:
+ _softwareMapChangedNotification:
+ _enumerateReceiversUsingBlock:
+ _accessibilityPerformScrollUp
+ _accessibilityPerformScrollDown
+ _accessibilityPerformScrollLeft
+ _accessibilityPerformScrollRight
+ _accessibilityPerformEscape
- _networkTypeChangedNotification:
- dealloc
- init
- addEventReceiver:
- removeEventReceiver:
- _memoryWarningNotification:
- _endObservingNotifications
- _beginObservingNotifications
- _dispatchEvent:forName:
- _dispatchEventWithDictionary:forName:
- _restrictionsChangedNotification:
- _audioSessionsChangedNotification:
- _purchaseRequestDidSucceedNotification:
- _softwareMapChangedNotification:
- _enumerateReceiversUsingBlock:
- _accessibilityPerformScrollUp
- _accessibilityPerformScrollDown
- _accessibilityPerformScrollLeft
- _accessibilityPerformScrollRight
- _accessibilityPerformEscape
@end
