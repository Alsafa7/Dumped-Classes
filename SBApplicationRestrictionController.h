@interface SBApplicationRestrictionController : NSObject
{
	id _dataSource;
	id _observers;
	id _tagValidityMap;
	id _validTagsByDisplayIdentifier;
	pointer _tagsNotificationToken;
	id _enabledTags;
	id _ratingRanksByDisplayIdentifier;
	BOOL _hasSMSCapability;
	id _restrictedDisplayIdentifiers;
	BOOL _showInternalApps;
	BOOL _hasHideNonDefaultSystemAppsCapability;
	BOOL _showAllSystemApps;
	BOOL _canPostRestrictionState;
}

+ beginPostingChanges
+ updateVisibilityPreferences
+ isDisplayIdentifierRestricted:
+ noteApplicationIdentifiersDidChangeWithAdded:modified:removed:
+ noteVisibilityStateDidChange
+ _postRestrictionStateToObservers:
+ _postRestrictionState
+ profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
+ dealloc
+ init
+ removeObserver:
+ addObserver:
+ initWithDataSource:
+ updateRestrictions
- beginPostingChanges
- updateVisibilityPreferences
- isDisplayIdentifierRestricted:
- noteApplicationIdentifiersDidChangeWithAdded:modified:removed:
- noteVisibilityStateDidChange
- _postRestrictionStateToObservers:
- _postRestrictionState
- profileConnectionDidReceiveEffectiveSettingsChangedNotification:userInfo:
- dealloc
- init
- removeObserver:
- addObserver:
- initWithDataSource:
- updateRestrictions
@end
