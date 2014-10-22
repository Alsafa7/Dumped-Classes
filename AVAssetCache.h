@interface AVAssetCache : NSObject
{
	id _priv;
}

+ maxEntrySize
+ currentSize
+ sizeOfEntryForKey:
+ removeEntryForKey:
+ dealloc
+ allKeys
+ maxSize
+ setMaxSize:
+ URL
+ initWithURL:
+ setMaxEntrySize:
+ finalize
- maxEntrySize
- currentSize
- sizeOfEntryForKey:
- removeEntryForKey:
- dealloc
- allKeys
- maxSize
- setMaxSize:
- URL
- initWithURL:
- setMaxEntrySize:
- finalize
@end
