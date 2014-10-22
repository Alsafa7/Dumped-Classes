@interface EKCalendarPlugin : NSObject
{
	id _activeItem;
}

+ activateModalBulletinAlert:
+ bindBulletin:forRegistry:
+ handleEvent:withBulletin:forRegistry:
+ _handleInvitationBulletin:
+ _handleAlertBulletin:forEntityType:
+ _handleAlertBulletinRemoval:forEntityType:
+ init
+ .cxx_destruct
- activateModalBulletinAlert:
- bindBulletin:forRegistry:
- handleEvent:withBulletin:forRegistry:
- _handleInvitationBulletin:
- _handleAlertBulletin:forEntityType:
- _handleAlertBulletinRemoval:forEntityType:
- init
- .cxx_destruct
@end
