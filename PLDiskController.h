@interface PLDiskController : NSObject
{
	double _lastFSCheck;
	long long _bytesRequiredForPhoto;
	struct _flags;
}

+ dealloc
+ init
+ updateAvailableDiskSpace
+ _actuallyUpdateCookie
+ _updateCookie
+ _diskSpaceDidBecomeLow
+ hasEnoughDiskToTakePicture
+ bytesToAutomaticallyClear
- dealloc
- init
- updateAvailableDiskSpace
- _actuallyUpdateCookie
- _updateCookie
- _diskSpaceDidBecomeLow
- hasEnoughDiskToTakePicture
- bytesToAutomaticallyClear
@end
