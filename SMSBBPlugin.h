@interface SMSBBPlugin : NSObject
{
	long long _lastAlertedMessageRowID;
	id _bbPluginLock;
	id _rowIDsToProcess;
	id _postedRowIDs;
	long long _lastFailedAlertRowID;
	long long _lastFailedClearedRowID;
	id _queue;
	id _bulletinCache;
}

+ _abRecordIDForMessage:
+ _serviceNameIsMadrid:
+ _addressForMessage:
+ _countryCodeForMessage:
+ _chatIdentifier:
+ _launchURLForMessage:onServiceNamed:
+ _bbSoundForMessage:
+ _suppressionContextsForIdentifier:
+ _personNameForMessage:
+ _formattedAddressForMessage:
+ _voiceMailStringForMessage:
+ _recipientsForMessage:
+ _messageIsFromFilteredSender:
+ _bulletinFromMessage:
+ bulletinCache
+ _saveLastPostedRowID
+ _bulletinFromFailedMessage:
+ _processDBUpdate
+ _loadLastPostedRowID
+ _handleDatabaseUpdate
+ _getBulletinsForMessagesSinceRowID:count:bulletinsToUpdate:
+ __processDBUpdate
+ _handleMessageReceivedOrUnreadCountChanged
+ _handleFailureBadgeCleared
+ setBulletinCache:
+ dealloc
+ init
+ sectionIdentifier
+ syncsBulletinDismissal
+ sectionParameters
+ dataProviderDidLoad
+ bulletinsFilteredBy:count:lastCleared:
+ clearedInfoForBulletins:lastClearedInfo:
+ attachmentPNGDataForRecordID:sizeConstraints:
+ attachmentAspectRatioForRecordID:
+ defaultSectionInfo
+ receiveMessageWithName:userInfo:
+ addressBookChanged:
+ databaseUpdated
+ sortDescriptors
- _abRecordIDForMessage:
- _serviceNameIsMadrid:
- _addressForMessage:
- _countryCodeForMessage:
- _chatIdentifier:
- _launchURLForMessage:onServiceNamed:
- _bbSoundForMessage:
- _suppressionContextsForIdentifier:
- _personNameForMessage:
- _formattedAddressForMessage:
- _voiceMailStringForMessage:
- _recipientsForMessage:
- _messageIsFromFilteredSender:
- _bulletinFromMessage:
- bulletinCache
- _saveLastPostedRowID
- _bulletinFromFailedMessage:
- _processDBUpdate
- _loadLastPostedRowID
- _handleDatabaseUpdate
- _getBulletinsForMessagesSinceRowID:count:bulletinsToUpdate:
- __processDBUpdate
- _handleMessageReceivedOrUnreadCountChanged
- _handleFailureBadgeCleared
- setBulletinCache:
- dealloc
- init
- sectionIdentifier
- syncsBulletinDismissal
- sectionParameters
- dataProviderDidLoad
- bulletinsFilteredBy:count:lastCleared:
- clearedInfoForBulletins:lastClearedInfo:
- attachmentPNGDataForRecordID:sizeConstraints:
- attachmentAspectRatioForRecordID:
- defaultSectionInfo
- receiveMessageWithName:userInfo:
- addressBookChanged:
- databaseUpdated
- sortDescriptors
@end
