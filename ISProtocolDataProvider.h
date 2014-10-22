@interface ISProtocolDataProvider : ISDataProvider
{
	BOOL _shouldPostFooterSectionChanged;
	BOOL _shouldProcessAccount;
	BOOL _shouldProcessAuthenticationDialogs;
	BOOL _shouldProcessDialogs;
	BOOL _shouldProcessProtocol;
	BOOL _shouldTriggerDownloads;
}

+ setShouldProcessProtocol:
+ init
+ copyWithZone:
+ shouldProcessProtocol
+ processDialogFromDictionary:error:
+ processDictionary:error:
+ setShouldProcessAccount:
+ _shouldFailWithTokenErrorForDialog:dictionary:error:
+ _performActionsForResponse:
+ _processFailureTypeFromDictionary:error:
+ shouldTriggerDownloads
+ _checkDownloadQueues
+ _selectFooterSection:
+ shouldProcessAccount
+ _checkInAppPurchaseQueueForAction:
+ shouldPostFooterSectionChanged
+ setShouldTriggerDownloads:
+ setShouldPostFooterSectionChanged:
+ shouldProcessAuthenticationDialogs
+ shouldProcessDialogs
+ setShouldProcessAuthenticationDialogs:
+ setShouldProcessDialogs:
+ parseData:returningError:
- setShouldProcessProtocol:
- init
- copyWithZone:
- shouldProcessProtocol
- processDialogFromDictionary:error:
- processDictionary:error:
- setShouldProcessAccount:
- _shouldFailWithTokenErrorForDialog:dictionary:error:
- _performActionsForResponse:
- _processFailureTypeFromDictionary:error:
- shouldTriggerDownloads
- _checkDownloadQueues
- _selectFooterSection:
- shouldProcessAccount
- _checkInAppPurchaseQueueForAction:
- shouldPostFooterSectionChanged
- setShouldTriggerDownloads:
- setShouldPostFooterSectionChanged:
- shouldProcessAuthenticationDialogs
- shouldProcessDialogs
- setShouldProcessAuthenticationDialogs:
- setShouldProcessDialogs:
- parseData:returningError:
@end
