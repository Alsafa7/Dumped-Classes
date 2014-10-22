@interface MPEnabledMediaTypesMonitor : NSObject
{
	id _queue;
	id _completionHandlers;
	BOOL _ignoreLibraryDidChangeNotifications;
	BOOL _monitoringActive;
	id _enabledMediaTypesPredicate;
	BOOL _hidesSecondPartyMediaTypes;
	usigned long long _enabledMediaTypes;
	usigned long long _enabledIfPresentMediaTypes;
	id _externalTypeManagers;
	usigned long long _defaultEnabledMediaTypes;
	usigned long long _disablableMediaTypes;
	usigned long long _unavailableDisabledTypes;
	usigned long long _externallyManagedMediaTypes;
	id _lookupQueue;
}

+ enabledIfPresentMediaTypes
+ enabledMediaTypes
+ setDefaultEnabledMediaTypes:
+ setHidesSecondPartyMediaTypes:
+ hidesSecondPartyMediaTypes
+ _calculatedEnabledMediaTypes
+ _calculatedEnabledIfPresentMediaTypes
+ _libraryDidChangeNotification:
+ _installedSoftwaredChanged
+ alertUserOneTimeForDisabledMediaTypes
+ _beginMonitoringWithDefaultMediaTypes:
+ _updateWithCompletionHandler:
+ unavailableDisabledTypes
+ externallyManagedMediaTypes
+ disablableMediaTypes
+ defaultEnabledMediaTypes
+ _onQueueUpdateExternallyManagedTypes
+ _onQueueUpdateUnavailableDisabledTypes
+ externalTypeManagers
+ setExternallyManagedMediaTypes:
+ setUnavailableDisabledTypes:
+ _onQueueUpdateEnabledTypesByUpdatingExternallyManagedTypes:updateNonExistentTypes:
+ setEnabledMediaTypes:enabledIfPresentMediaTypes:
+ setEnabledMediaTypes:
+ setExternalTypeManagers:
+ setDisablableMediaTypes:
+ lookupQueue
+ setLookupQueue:
+ dealloc
+ init
+ alertView:didDismissWithButtonIndex:
+ alertView:willDismissWithButtonIndex:
+ .cxx_destruct
- enabledIfPresentMediaTypes
- enabledMediaTypes
- setDefaultEnabledMediaTypes:
- setHidesSecondPartyMediaTypes:
- hidesSecondPartyMediaTypes
- _calculatedEnabledMediaTypes
- _calculatedEnabledIfPresentMediaTypes
- _libraryDidChangeNotification:
- _installedSoftwaredChanged
- alertUserOneTimeForDisabledMediaTypes
- _beginMonitoringWithDefaultMediaTypes:
- _updateWithCompletionHandler:
- unavailableDisabledTypes
- externallyManagedMediaTypes
- disablableMediaTypes
- defaultEnabledMediaTypes
- _onQueueUpdateExternallyManagedTypes
- _onQueueUpdateUnavailableDisabledTypes
- externalTypeManagers
- setExternallyManagedMediaTypes:
- setUnavailableDisabledTypes:
- _onQueueUpdateEnabledTypesByUpdatingExternallyManagedTypes:updateNonExistentTypes:
- setEnabledMediaTypes:enabledIfPresentMediaTypes:
- setEnabledMediaTypes:
- setExternalTypeManagers:
- setDisablableMediaTypes:
- lookupQueue
- setLookupQueue:
- dealloc
- init
- alertView:didDismissWithButtonIndex:
- alertView:willDismissWithButtonIndex:
- .cxx_destruct
@end
