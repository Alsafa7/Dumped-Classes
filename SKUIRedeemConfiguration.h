@interface SKUIRedeemConfiguration : NSObject
{
	long long _category;
	id _clientContext;
	id _inputImage;
	id _landingImage;
	id _operationQueue;
	id _successImage;
}

+ inputImage
+ setInputImage:
+ operationQueue
+ initWithOperationQueue:category:clientContext:
+ loadImages
+ landingImage
+ setLandingImage:
+ setSuccessImage:
+ _loadURLsWithDictionary:
+ successImage
+ .cxx_destruct
- inputImage
- setInputImage:
- operationQueue
- initWithOperationQueue:category:clientContext:
- loadImages
- landingImage
- setLandingImage:
- setSuccessImage:
- _loadURLsWithDictionary:
- successImage
- .cxx_destruct
@end
