@interface BBServer : NSObject
{
	id _bulletinRequestsByID;
	id _sectionInfoByID;
	id _restrictedSectionIDs;
	usigned long long _currentSystemState;
	int _privilegedAddressBookGroupRecordID;
	id _lastContactTimeForSender;
	usigned long long _activeBehaviorOverrides;
	usigned long long _privilegedSenderTypes;
	BOOL _isRunning;
	id _dataProviderManager;
	id _observers;
	id _noticesObservers;
	id _modalAlertObservers;
	id _bannerObservers;
	id _lockscreenObservers;
	id _soundObservers;
	id _todayObservers;
	id _futureObservers;
	id _settingsObservers;
	id _settingsGateways;
	id _suspendedConnections;
	id _activeSectionIDsByCategory;
	id _sortedSectionIDsByCategory;
	long long _sectionOrderRule;
	id _bulletinsByID;
	id _bulletinIDsBySectionID;
	id _transactionsByObserver;
	id _noticeBulletinIDsBySectionID;
	id _todayBulletinIDsBySectionID;
	id _futureBulletinIDsBySectionID;
	id _behaviorOverrides;
	long long _behaviorOverrideStatus;
	id _behaviorOverrideStatusEffectiveTime;
	id _behaviorOverridesTimer;
	id _behaviorOverridesWakeTime;
	id _behaviorOverrideStatusChangeClients;
	id _activeBehaviorOverrideTypesChangeSettingsGateways;
	id _activeBehaviorOverrideTypesChangeClients;
	BOOL _behaviorOverridesEffectiveWhileUnlocked;
	id _privilegedAddressBookGroupName;
	id _privilegedSenderFilteringStateChangeClients;
	BOOL _privilegedSenderFilteringNecessary;
	id _expiringBulletinIDs;
	id _expirationTimer;
	id _eventBasedExpiringBulletinIDs;
	id _nextScheduledExpirationTimerFireDate;
	id _clearedSections;
	id _dataProviderFactoriesBySection;
	int _serverIsRunningToken;
	int _demo_lockscreen_token;
	id _syncService;
	pointer _addressBook;
	id _favoritesListManager;
	BOOL _entryFound;
}

@end
