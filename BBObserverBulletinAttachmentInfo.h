@interface BBObserverBulletinAttachmentInfo : NSObject
{
	id _imageSizePairs;
	BOOL imagesFetched;
	BOOL sizesFetched;
}

+ dealloc
+ init
+ sizeForKey:
+ setSize:forKey:
+ setImagesFetched:
+ setSizesFetched:
+ imagesFetched
+ sizesFetched
+ _pairForKey:create:
+ imageForKey:
+ setImage:forKey:
- dealloc
- init
- sizeForKey:
- setSize:forKey:
- setImagesFetched:
- setSizesFetched:
- imagesFetched
- sizesFetched
- _pairForKey:create:
- imageForKey:
- setImage:forKey:
@end
