@interface GKImageKey : NSObject
{
	id _filePath;
	id _cacheKey;
	id _imageID;
	id _basename;
	struct _size;
}

+ setBasename:
+ setImageID:
+ imageID
+ basename
+ dealloc
+ size
+ setSize:
+ cacheKey
+ filePath
- setBasename:
- setImageID:
- imageID
- basename
- dealloc
- size
- setSize:
- cacheKey
- filePath
@end
