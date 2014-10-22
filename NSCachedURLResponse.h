@interface NSCachedURLResponse : NSObject
{
	id _internal;
}

+ storagePolicy
+ initWithResponse:data:userInfo:storagePolicy:
+ initWithResponse:data:
+ initWithResponse:dataArray:userInfo:storagePolicy:
+ dataArray
+ _deallocInternalCFCachedURLResponse
+ _reestablishInternalCFCachedURLResponse:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ copyWithZone:
+ data
+ userInfo
+ response
+ _initWithCFCachedURLResponse:
+ _CFCachedURLResponse
- storagePolicy
- initWithResponse:data:userInfo:storagePolicy:
- initWithResponse:data:
- initWithResponse:dataArray:userInfo:storagePolicy:
- dataArray
- _deallocInternalCFCachedURLResponse
- _reestablishInternalCFCachedURLResponse:
- dealloc
- initWithCoder:
- encodeWithCoder:
- copyWithZone:
- data
- userInfo
- response
- _initWithCFCachedURLResponse:
- _CFCachedURLResponse
@end
