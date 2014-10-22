@interface SLSocialBulletinDataProvider : NSObject
{
	id _bulletins;
	usigned long long _bulletinCounter;
	id _uploadServices;
	id _socialBundle;
}

+ _uploadServices
+ _socialBundle
+ _notificationMessageMap
+ _removeNotifications
+ handleNotification:
+ _createBulletinsForUploadInfoDicts:uploadService:
+ _supportedNotifications
+ _configureSectionSubtypeParameters:forUploadService:
+ _uploadServiceForNotificationName:
+ _addBulletinWithTitle:message:forUploadService:
+ _registerForNotifications
+ dealloc
+ init
+ sectionIdentifier
+ sectionParameters
+ sectionDisplayName
+ dataProviderDidLoad
+ defaultSectionInfo
+ sectionIconData
+ sortDescriptors
+ .cxx_destruct
- _uploadServices
- _socialBundle
- _notificationMessageMap
- _removeNotifications
- handleNotification:
- _createBulletinsForUploadInfoDicts:uploadService:
- _supportedNotifications
- _configureSectionSubtypeParameters:forUploadService:
- _uploadServiceForNotificationName:
- _addBulletinWithTitle:message:forUploadService:
- _registerForNotifications
- dealloc
- init
- sectionIdentifier
- sectionParameters
- sectionDisplayName
- dataProviderDidLoad
- defaultSectionInfo
- sectionIconData
- sortDescriptors
- .cxx_destruct
@end
