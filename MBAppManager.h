@interface MBAppManager : NSObject
{
	id _settingsContext;
	id _appsByBundleID;
}

+ dealloc
+ appWithBundleID:
+ initWithSettingsContext:
+ allDisabledDomainNames
+ _userAppsWithError:
+ _safeHarborsWithError:
+ _appsWithPlists:error:
+ removeAllDisabledDomainNames
+ isDomainNameEnabled:
+ setEnabled:forDomainName:
+ allRestrictedDomainNames
+ loadAppsWithSafeHarbors:error:
+ allApps
+ removeOldSafeHarbors
+ createSafeHarborForApp:error:
+ processRestoredAppsWithBundleIDs:error:
- dealloc
- appWithBundleID:
- initWithSettingsContext:
- allDisabledDomainNames
- _userAppsWithError:
- _safeHarborsWithError:
- _appsWithPlists:error:
- removeAllDisabledDomainNames
- isDomainNameEnabled:
- setEnabled:forDomainName:
- allRestrictedDomainNames
- loadAppsWithSafeHarbors:error:
- allApps
- removeOldSafeHarbors
- createSafeHarborForApp:error:
- processRestoredAppsWithBundleIDs:error:
@end
