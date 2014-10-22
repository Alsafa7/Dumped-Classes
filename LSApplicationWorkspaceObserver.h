@interface LSApplicationWorkspaceObserver : NSObject
{
	id _uuid;
}

+ applicationInstallsDidCancel:
+ applicationInstallsDidPause:
+ applicationInstallsDidPrioritize:
+ applicationInstallsDidResume:
+ networkUsageChanged:
+ applicationInstallsDidStart:
+ applicationInstallsDidUpdateIcon:
+ applicationInstallsDidChange:
+ applicationsDidInstall:
+ applicationsDidUninstall:
+ applicationInstallsArePrioritized:arePaused:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ uuid
+ setUuid:
- applicationInstallsDidCancel:
- applicationInstallsDidPause:
- applicationInstallsDidPrioritize:
- applicationInstallsDidResume:
- networkUsageChanged:
- applicationInstallsDidStart:
- applicationInstallsDidUpdateIcon:
- applicationInstallsDidChange:
- applicationsDidInstall:
- applicationsDidUninstall:
- applicationInstallsArePrioritized:arePaused:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- uuid
- setUuid:
@end
