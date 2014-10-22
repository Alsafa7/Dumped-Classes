@interface PLPrivacy : NSObject
{
	id _isolationQueue;
	id _callbackQueue;
	int _authStatus;
}

+ dealloc
+ init
+ isPhotosAccessAllowedWithScope:promptIfNeededWithHandler:
+ isPhotosTCCAccessAllowed
+ isPhotosAccessAllowedWithScope:handler:
+ isPhotoLibrarySharingOrModificationAllowed
+ _isPhotosAccessAllowedWithScope:forceHandler:accessAllowedHandler:
+ photosTCCAccessStatus
+ isPhotosAccessAllowedPromptIfNeededWithHandler:
+ isPhotoLibraryReadAccessAllowed
+ isPhotosTCCAccessNotAllowed
+ photoAccessPowersActive
+ isPhotosTCCAccessRestricted
- dealloc
- init
- isPhotosAccessAllowedWithScope:promptIfNeededWithHandler:
- isPhotosTCCAccessAllowed
- isPhotosAccessAllowedWithScope:handler:
- isPhotoLibrarySharingOrModificationAllowed
- _isPhotosAccessAllowedWithScope:forceHandler:accessAllowedHandler:
- photosTCCAccessStatus
- isPhotosAccessAllowedPromptIfNeededWithHandler:
- isPhotoLibraryReadAccessAllowed
- isPhotosTCCAccessNotAllowed
- photoAccessPowersActive
- isPhotosTCCAccessRestricted
@end
