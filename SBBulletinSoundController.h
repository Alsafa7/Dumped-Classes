@interface SBBulletinSoundController : NSObject
{
	id _observer;
	id _blockQueue;
	id _playingSounds;
	BOOL _deviceIsLocked;
	BOOL _quietModeEnabled;
	usigned long long _quietModeState;
}

+ bulletinWindowStoppedBeingBusy
+ _hardwareButtonPressed:
+ quietModeEnabled
+ _shouldHonorPlaySoundRequestForBulletin:
+ _enqueueBlock:forBulletin:
+ quietModeState
+ dealloc
+ init
+ observer:addBulletin:forFeed:
+ observer:removeBulletin:
+ observer:noteAlertBehaviorOverridesChanged:
+ observer:noteAlertBehaviorOverrideStateChanged:
+ observer:noteInvalidatedBulletinIDs:
+ observer:noteServerConnectionStateChanged:
+ killSounds
+ playSoundForBulletin:
+ killSoundForBulletin:
- bulletinWindowStoppedBeingBusy
- _hardwareButtonPressed:
- quietModeEnabled
- _shouldHonorPlaySoundRequestForBulletin:
- _enqueueBlock:forBulletin:
- quietModeState
- dealloc
- init
- observer:addBulletin:forFeed:
- observer:removeBulletin:
- observer:noteAlertBehaviorOverridesChanged:
- observer:noteAlertBehaviorOverrideStateChanged:
- observer:noteInvalidatedBulletinIDs:
- observer:noteServerConnectionStateChanged:
- killSounds
- playSoundForBulletin:
- killSoundForBulletin:
@end
