@interface SLService : NSObject
{

}

+ isAvailable
+ addExtraParameters:forRequest:
+ isFirstClassService
+ isSheetAccessPermitted
+ isServiceTypeSupportedByConfiguration
+ maximumVideoDataSize
+ maximumVideoTimeLimit
+ connectionName
+ shareSheetHostingBundleIdentifier
+ shareSheetClassName
+ supportsImageURL:
+ supportsVideoURL:
+ composeViewController
+ activityTitle
+ activityImage
+ maximumImageDataSize
+ maximumURLCount
+ maximumImageCount
+ maximumVideoCount
+ serviceType
+ accountType
+ hasAccounts
- isAvailable
- addExtraParameters:forRequest:
- isFirstClassService
- isSheetAccessPermitted
- isServiceTypeSupportedByConfiguration
- maximumVideoDataSize
- maximumVideoTimeLimit
- connectionName
- shareSheetHostingBundleIdentifier
- shareSheetClassName
- supportsImageURL:
- supportsVideoURL:
- composeViewController
- activityTitle
- activityImage
- maximumImageDataSize
- maximumURLCount
- maximumImageCount
- maximumVideoCount
- serviceType
- accountType
- hasAccounts
@end
