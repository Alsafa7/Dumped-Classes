@interface MBServiceRestoreMode : NSObject
{
	int _type;
	id _value;
	int _errorCode;
}

+ isBackgroundApp
+ isBackgroundFile
+ didFail
+ initWithType:value:errorCode:
+ bundleID
+ didSucceed
+ dealloc
+ isEqual:
+ description
+ type
+ path
+ value
+ typeString
+ wasCancelled
+ isForeground
+ errorString
+ errorCode
- isBackgroundApp
- isBackgroundFile
- didFail
- initWithType:value:errorCode:
- bundleID
- didSucceed
- dealloc
- isEqual:
- description
- type
- path
- value
- typeString
- wasCancelled
- isForeground
- errorString
- errorCode
@end
