@interface ISSoftwareMap : NSObject
{
	id _applications;
}

+ dealloc
+ init
+ _loadFromMobileInstallation
+ copySoftwareUpdatesPropertyListWithUpdatesContext:
+ copySoftwareUpdatesPropertyList
+ applicationForItemIdentifier:
+ applications
+ applicationForBundleIdentifier:
- dealloc
- init
- _loadFromMobileInstallation
- copySoftwareUpdatesPropertyListWithUpdatesContext:
- copySoftwareUpdatesPropertyList
- applicationForItemIdentifier:
- applications
- applicationForBundleIdentifier:
@end
