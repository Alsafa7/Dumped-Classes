@interface MBServiceConfiguration : NSObject
{
	id _plist;
}

+ bundleIDsNotToBackUp
+ _positiveIntegerForKey:defaultValue:
+ domainNamesNotToBackUp
+ addFilesCount
+ addFilesSize
+ getFilesCount
+ getFilesSize
+ removeFilesCount
+ listFilesCount
+ maxInflightContainers
+ maxFileAttributesSize
+ propertyList
+ dealloc
+ initWithPropertyList:
- bundleIDsNotToBackUp
- _positiveIntegerForKey:defaultValue:
- domainNamesNotToBackUp
- addFilesCount
- addFilesSize
- getFilesCount
- getFilesSize
- removeFilesCount
- listFilesCount
- maxInflightContainers
- maxFileAttributesSize
- propertyList
- dealloc
- initWithPropertyList:
@end
