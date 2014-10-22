@interface GKBulletinController : NSObject
{
	id _bulletins;
}

+ setBulletins:
+ bulletinNotification:
+ gameInviteCancelledNotification:
+ localPlayerResetNotification:
+ clearNotification:
+ respondWithBulletin:
+ updateSavedBulletins
+ bulletinDefaults
+ legacyBulletins
+ withdrawBulletin:
+ isValidBulletin:
+ presentBulletin:
+ clearPreviousIfTurnBasedBulletin:
+ expireBulletin:
+ loadBulletins
+ buttonPressed:forBulletin:
+ userClearedBulletins:
+ bulletins
+ dealloc
+ init
- setBulletins:
- bulletinNotification:
- gameInviteCancelledNotification:
- localPlayerResetNotification:
- clearNotification:
- respondWithBulletin:
- updateSavedBulletins
- bulletinDefaults
- legacyBulletins
- withdrawBulletin:
- isValidBulletin:
- presentBulletin:
- clearPreviousIfTurnBasedBulletin:
- expireBulletin:
- loadBulletins
- buttonPressed:forBulletin:
- userClearedBulletins:
- bulletins
- dealloc
- init
@end
