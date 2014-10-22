@interface SKUIMissingItemLoader : NSObject
{
	long long _batchSize;
	id _delegate;
	id _imageProfile;
	id _keyProfile;
	id _loader;
	id _requests;
}

+ setKeyProfile:
+ setDelegate:
+ init
+ delegate
+ setBatchSize:
+ batchSize
+ loadItemsForPageComponent:startIndex:reason:
+ initWithResourceLoader:
+ imageProfile
+ setImageProfile:
+ itemRequest:didFinishWithItems:
+ loadItemsWithIdentifiers:reason:
+ _existingRequestIDForItemID:
+ _requestItems:withReason:
+ .cxx_destruct
+ keyProfile
- setKeyProfile:
- setDelegate:
- init
- delegate
- setBatchSize:
- batchSize
- loadItemsForPageComponent:startIndex:reason:
- initWithResourceLoader:
- imageProfile
- setImageProfile:
- itemRequest:didFinishWithItems:
- loadItemsWithIdentifiers:reason:
- _existingRequestIDForItemID:
- _requestItems:withReason:
- .cxx_destruct
- keyProfile
@end
