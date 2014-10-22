@interface BKSApplicationSuspensionSettings : NSObject
{
	id _statusBarStyle;
	id _statusBarHidden;
	id _classicAppZoomedIn;
	id _taskSuspendingUnsupported;
	id _defaultPNGExpirationTime;
	id _defaultPNG;
}

+ dealloc
+ description
+ statusBarStyle
+ setStatusBarStyle:
+ setStatusBarHidden:
+ copyWithZone:
+ encodeWithXPCDictionary:
+ initWithXPCDictionary:
+ initWithSettings:zone:
+ classicAppZoomedIn
+ taskSuspendingUnsupported
+ defaultPNG
+ setClassicAppZoomedIn:
+ setTaskSuspendingUnsupported:
+ setDefaultPNGExpirationTime:
+ setDefaultPNG:
+ defaultPNGExpirationTime
+ statusBarHidden
- dealloc
- description
- statusBarStyle
- setStatusBarStyle:
- setStatusBarHidden:
- copyWithZone:
- encodeWithXPCDictionary:
- initWithXPCDictionary:
- initWithSettings:zone:
- classicAppZoomedIn
- taskSuspendingUnsupported
- defaultPNG
- setClassicAppZoomedIn:
- setTaskSuspendingUnsupported:
- setDefaultPNGExpirationTime:
- setDefaultPNG:
- defaultPNGExpirationTime
- statusBarHidden
@end
