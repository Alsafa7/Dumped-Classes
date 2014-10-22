@interface MBMobileInstallation : NSObject
{
	id _safeHarborDir;
	id _errorString;
}

+ initWithSafeHarborDir:
+ userAppWithBundleID:error:
+ installPlaceholderAppAtPath:bundleID:error:
+ uninstallAppWithBundleID:error:
+ registerSafeHarborWithIdentifier:path:error:
+ _mobileInstallationCallback:
+ setSafeHarborDir:
+ dealloc
+ userAppsWithError:
+ safeHarborsWithError:
+ removeSafeHarbordWithIdentifier:error:
+ safeHarborDir
+ processRestoredContainerAtPath:error:
- initWithSafeHarborDir:
- userAppWithBundleID:error:
- installPlaceholderAppAtPath:bundleID:error:
- uninstallAppWithBundleID:error:
- registerSafeHarborWithIdentifier:path:error:
- _mobileInstallationCallback:
- setSafeHarborDir:
- dealloc
- userAppsWithError:
- safeHarborsWithError:
- removeSafeHarbordWithIdentifier:error:
- safeHarborDir
- processRestoredContainerAtPath:error:
@end
