@interface _MPRadioStaticProfileConnectionObserver : NSObject
{
	BOOL _isProfileExplicitContentRestricted;
}

+ profileConnectionDidReceiveRestrictionChangedNotification:userInfo:
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ isProfileExplicitContentRestricted
+ dealloc
+ init
- profileConnectionDidReceiveRestrictionChangedNotification:userInfo:
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- isProfileExplicitContentRestricted
- dealloc
- init
@end
