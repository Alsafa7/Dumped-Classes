@interface SBFMappedImageCache : NSObject
{
	id _queue;
	id _path;
	id _images;
}

+ dealloc
+ removeAllObjects
+ removeImageForKey:
+ imageForKey:
+ setImage:forKey:
+ initWithDescription:
+ imageForKey:options:
+ imageForKey:options:generateImageWithBlockIfNecessary:
+ imageForKey:generateImageWithBlockIfNecessary:
+ warmupImageForKey:
- dealloc
- removeAllObjects
- removeImageForKey:
- imageForKey:
- setImage:forKey:
- initWithDescription:
- imageForKey:options:
- imageForKey:options:generateImageWithBlockIfNecessary:
- imageForKey:generateImageWithBlockIfNecessary:
- warmupImageForKey:
@end
