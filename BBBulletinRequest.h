@interface BBBulletinRequest : BBBulletin
{
	usigned long long _expirationEvents;
}

+ hasContentModificationsRelativeTo:
+ publisherMatchID
+ generateNewBulletinID
+ tentative
+ setTentative:
+ publish
+ expirationEvents
+ setExpirationEvents:
+ addAttachmentOfType:
+ publish:
+ setContextValue:forKey:
+ setPrimaryAttachmentType:
+ addButton:
+ withdraw
+ setUnlockActionLabel:
+ realertCount
+ setRealertCount:
+ addAlertSuppressionAppID:
+ generateBulletinID
+ setShowsUnreadIndicator:
+ showsUnreadIndicator
- hasContentModificationsRelativeTo:
- publisherMatchID
- generateNewBulletinID
- tentative
- setTentative:
- publish
- expirationEvents
- setExpirationEvents:
- addAttachmentOfType:
- publish:
- setContextValue:forKey:
- setPrimaryAttachmentType:
- addButton:
- withdraw
- setUnlockActionLabel:
- realertCount
- setRealertCount:
- addAlertSuppressionAppID:
- generateBulletinID
- setShowsUnreadIndicator:
- showsUnreadIndicator
@end
