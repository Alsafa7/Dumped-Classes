@interface SBBulletinModalController : NSObject
{
	id _observer;
	BOOL _deviceIsLocked;
	id _incomingBulletinEventQueue;
	id _handlersBySectionID;
	id _handlersByBulletinID;
	id _alertsByBulletinID;
	BOOL _quietModeEnabled;
}

+ destroyingAlert:withBulletin:
+ _dequeuePendedEventsIfPossible
+ bindBulletin:forRegistry:
+ _syncDismissalForBulletin:
+ handleEvent:withBulletin:forRegistry:
+ _executeOrPendEventBlock:forBulletin:
+ bulletinWindowStoppedBeingBusy
+ attachmentImageForBulletin:
+ init
+ observer:addBulletin:forFeed:
+ observer:modifyBulletin:
+ observer:removeBulletin:
+ observerShouldFetchAttachmentImageBeforeBulletinDelivery:
+ observer:thumbnailSizeConstraintsForAttachmentType:
+ observer:composedAttachmentImageForType:thumbnailData:key:
+ observer:purgeReferencesToBulletinID:
+ observer:noteAlertBehaviorOverridesChanged:
+ observer:noteInvalidatedBulletinIDs:
+ observer:noteServerConnectionStateChanged:
+ observer:noteServerReceivedResponseForBulletin:
- destroyingAlert:withBulletin:
- _dequeuePendedEventsIfPossible
- bindBulletin:forRegistry:
- _syncDismissalForBulletin:
- handleEvent:withBulletin:forRegistry:
- _executeOrPendEventBlock:forBulletin:
- bulletinWindowStoppedBeingBusy
- attachmentImageForBulletin:
- init
- observer:addBulletin:forFeed:
- observer:modifyBulletin:
- observer:removeBulletin:
- observerShouldFetchAttachmentImageBeforeBulletinDelivery:
- observer:thumbnailSizeConstraintsForAttachmentType:
- observer:composedAttachmentImageForType:thumbnailData:key:
- observer:purgeReferencesToBulletinID:
- observer:noteAlertBehaviorOverridesChanged:
- observer:noteInvalidatedBulletinIDs:
- observer:noteServerConnectionStateChanged:
- observer:noteServerReceivedResponseForBulletin:
@end
