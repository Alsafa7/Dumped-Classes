@interface RadioImageCache : NSObject
{
	id _imageRequestQueue;
}

+ cachedImageDataForStation:withExactSize:
+ loadImageForStation:withSize:completionHandler:
+ dealloc
+ init
+ _init
+ _requestForStation:withSize:isExactSizeMatch:
+ _removeAllCachedImages
+ .cxx_destruct
+ _cachedResponseForRequest:
- cachedImageDataForStation:withExactSize:
- loadImageForStation:withSize:completionHandler:
- dealloc
- init
- _init
- _requestForStation:withSize:isExactSizeMatch:
- _removeAllCachedImages
- .cxx_destruct
- _cachedResponseForRequest:
@end
