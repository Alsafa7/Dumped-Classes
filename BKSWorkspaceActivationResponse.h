@interface BKSWorkspaceActivationResponse : NSObject
{
	BOOL _willResume;
	BOOL _launchFailed;
	id _bundleIdentifier;
}

+ dealloc
+ description
+ bundleIdentifier
+ copyWithZone:
+ encodeWithXPCDictionary:
+ initWithXPCDictionary:
+ willResume
+ launchFailed
+ setLaunchFailed:
+ setWillResume:
+ setBundleIdentifier:
- dealloc
- description
- bundleIdentifier
- copyWithZone:
- encodeWithXPCDictionary:
- initWithXPCDictionary:
- willResume
- launchFailed
- setLaunchFailed:
- setWillResume:
- setBundleIdentifier:
@end
