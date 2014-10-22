@interface MGNotificationObserver : NSObject
{
	id _blocks;
	int _type;
	id _argument;
	union _registration;
}

+ profileConnectionDidReceiveRestrictionChangedNotification:userInfo:
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ dealloc
+ copyWithZone:
+ observeValueForKeyPath:ofObject:change:context:
+ invokeBlocks
+ _cancelRegistration
+ initWithType:argument:
+ _addBlock:
+ _removeBlock:
- profileConnectionDidReceiveRestrictionChangedNotification:userInfo:
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- dealloc
- copyWithZone:
- observeValueForKeyPath:ofObject:change:context:
- invokeBlocks
- _cancelRegistration
- initWithType:argument:
- _addBlock:
- _removeBlock:
@end
