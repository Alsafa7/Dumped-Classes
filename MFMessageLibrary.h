@interface MFMessageLibrary : NSObject
{
	id _path;
}

+ dealloc
+ commit
+ initWithPath:
+ setFlagsFromDictionary:forMessages:
+ setNumberOfAttachments:isSigned:isEncrypted:forMessage:
+ shouldCancel
+ loadMeetingExternalIDForMessage:
+ loadMeetingDataForMessage:
+ loadMeetingMetadataForMessage:
+ deleteMailboxes:
+ deleteAccount:
+ renameMailboxes:to:
+ libraryIDForAccount:
+ createLibraryIDForAccount:
+ serverUnreadOnlyOnServerCountForMailbox:
+ unreadCountForMailbox:
+ unreadCountForMailbox:matchingCriterion:
+ nonDeletedCountForMailbox:
+ mailboxIDForURLString:
+ urlForMailboxID:
+ mailboxUidForMessage:
+ setMessage:isPartial:
+ isMessageContentsLocallyAvailable:
+ setFlags:forMessage:
+ setSummary:forMessage:
+ dataPathForMessage:
+ dataPathForMessage:part:
+ accountForMessage:
+ setData:forMessage:isPartial:
+ dataConsumerForMessage:part:
+ updateMessage:withMetadata:
+ metadataForMessage:key:
+ totalCountForMailbox:
+ nonDeletedCountForMailbox:includeServerSearchResults:includeThreadSearchResults:
+ messageWithLibraryID:options:inMailbox:
+ messagesWithSummariesForMailbox:range:
+ messagesMatchingCriterion:options:range:
+ messagesWithoutSummariesForMailbox:fromRowID:limit:
+ messagesMatchingCriterion:options:
+ copyMessagesWithRemoteIDs:options:inRemoteMailbox:
+ serverSearchResultMessagesForMailbox:
+ dateOfOldestNonSearchResultMessageInMailbox:
+ filterContiguousMessages:forCriterion:options:
+ messageWithMessageID:options:inMailbox:
+ headerDataForMessage:
+ bodyDataForMessage:andHeaderDataIfReadilyAvailable:
+ dataForMimePart:isComplete:
+ dataConsumerForMessage:part:incomplete:
+ fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:
+ bodyDataForMessage:andHeaderDataIfReadilyAvailable:isComplete:
+ messagesForMailbox:olderThanNumberOfDays:
+ compactMessages:
+ setFlagsFromDictionary:forMessagesInMailboxURLString:
+ addMessages:withMailbox:fetchBodies:newMessagesByOldMessage:remoteIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:addPOPUIDs:dataSectionsByMessage:
+ compactMailbox:
+ hasCompleteDataForMimePart:
+ compactMessages:permanently:
+ setFlagsForMessages:mask:
+ postFlagsChangedForMessages:flags:oldFlagsByMessage:
+ flagsChangedForMessages:flags:oldFlagsByMessage:
+ duplicateMessages:newRemoteIDs:forMailbox:setFlags:clearFlags:messageFlagsForMessages:createNewCacheFiles:
+ updateRecipientsForMessage:fromHeaders:
+ updateThreadingInfoForMessage:fromHeaders:
+ messagesNeedingSyncConfirmationForMailbox:
+ messagesWithoutSummariesForMailbox:
+ messagesWithSummariesForMailbox:fromRowID:limit:
+ orderedBatchOfMessagesEndingAtRowId:limit:success:
+ deletedCountForMailbox:
+ setServerUnreadOnlyOnServerCount:forMailbox:
+ oldestMessageInMailbox:
+ messageWithRemoteID:inRemoteMailbox:
+ maximumRemoteIDForMailbox:
+ minimumRemoteIDForMailbox:
+ sequenceIdentifierForMailbox:
+ setSequenceIdentifier:forMailbox:
+ sequenceIdentifierForMessagesWithRemoteIDs:inMailbox:
+ setSequenceIdentifier:forMessageWithLibraryID:
+ setSequenceIdentifier:forMessagesWithRemoteIDs:inMailbox:
+ getDetailsForMessagesWithRemoteIDInRange:fromMailbox:
+ getDetailsForAllMessagesFromMailbox:
+ getDetailsForMessages:absoluteBottom:topOfDesiredRange:range:fromMailbox:
+ messagesWithMessageIDHeader:
+ removeAllMessagesFromMailbox:removeMailbox:andNotify:
+ messageWithMessageID:inMailbox:
+ dataConsumerForMessage:isPartial:
+ dataConsumerForMessage:
+ metadataForMessage:
+ bodyDataForMessage:
+ sendMessagesMatchingCriterion:to:options:range:
+ sendMessagesMatchingCriterion:to:options:
+ messagesMatchingCriterion:options:success:
+ messagesMatchingCriterion:options:range:success:
+ libraryExists
+ closeDatabaseConnections
+ deletePOPUID:inMailbox:
+ UIDsToDeleteInMailbox:
+ deletedUIDsInMailbox:
+ allUIDsInMailbox:
+ hiddenPOPUIDsInMailbox:
+ lockDBForWriting
+ appendOfflineCacheOperation:forAccount:lastTemporaryID:
+ markOfflineCacheOperationAsComplete:
+ offlineCacheOperationsForAccount:lastTemporaryID:
+ appendOfflineCacheReplayData:forAccountID:
+ consumeOfflineCacheReplayDataForAccount:usingBlock:
+ deleteOfflineCacheDataForAccount:
+ updateFlagsForMessagesInPlace:success:
+ remoteStoreForMessage:
+ addMessages:withMailbox:fetchBodies:newMessagesByOldMessage:
+ setFlagsForMessages:
+ postOldFlags:newFlags:forMessage:
+ storedIntegerPropertyWithName:
+ setStoredIntegerPropertyWithName:value:
+ isBusy
- dealloc
- commit
- initWithPath:
- setFlagsFromDictionary:forMessages:
- setNumberOfAttachments:isSigned:isEncrypted:forMessage:
- shouldCancel
- loadMeetingExternalIDForMessage:
- loadMeetingDataForMessage:
- loadMeetingMetadataForMessage:
- deleteMailboxes:
- deleteAccount:
- renameMailboxes:to:
- libraryIDForAccount:
- createLibraryIDForAccount:
- serverUnreadOnlyOnServerCountForMailbox:
- unreadCountForMailbox:
- unreadCountForMailbox:matchingCriterion:
- nonDeletedCountForMailbox:
- mailboxIDForURLString:
- urlForMailboxID:
- mailboxUidForMessage:
- setMessage:isPartial:
- isMessageContentsLocallyAvailable:
- setFlags:forMessage:
- setSummary:forMessage:
- dataPathForMessage:
- dataPathForMessage:part:
- accountForMessage:
- setData:forMessage:isPartial:
- dataConsumerForMessage:part:
- updateMessage:withMetadata:
- metadataForMessage:key:
- totalCountForMailbox:
- nonDeletedCountForMailbox:includeServerSearchResults:includeThreadSearchResults:
- messageWithLibraryID:options:inMailbox:
- messagesWithSummariesForMailbox:range:
- messagesMatchingCriterion:options:range:
- messagesWithoutSummariesForMailbox:fromRowID:limit:
- messagesMatchingCriterion:options:
- copyMessagesWithRemoteIDs:options:inRemoteMailbox:
- serverSearchResultMessagesForMailbox:
- dateOfOldestNonSearchResultMessageInMailbox:
- filterContiguousMessages:forCriterion:options:
- messageWithMessageID:options:inMailbox:
- headerDataForMessage:
- bodyDataForMessage:andHeaderDataIfReadilyAvailable:
- dataForMimePart:isComplete:
- dataConsumerForMessage:part:incomplete:
- fullBodyDataForMessage:andHeaderDataIfReadilyAvailable:
- bodyDataForMessage:andHeaderDataIfReadilyAvailable:isComplete:
- messagesForMailbox:olderThanNumberOfDays:
- compactMessages:
- setFlagsFromDictionary:forMessagesInMailboxURLString:
- addMessages:withMailbox:fetchBodies:newMessagesByOldMessage:remoteIDs:setFlags:clearFlags:messageFlagsForMessages:copyFiles:addPOPUIDs:dataSectionsByMessage:
- compactMailbox:
- hasCompleteDataForMimePart:
- compactMessages:permanently:
- setFlagsForMessages:mask:
- postFlagsChangedForMessages:flags:oldFlagsByMessage:
- flagsChangedForMessages:flags:oldFlagsByMessage:
- duplicateMessages:newRemoteIDs:forMailbox:setFlags:clearFlags:messageFlagsForMessages:createNewCacheFiles:
- updateRecipientsForMessage:fromHeaders:
- updateThreadingInfoForMessage:fromHeaders:
- messagesNeedingSyncConfirmationForMailbox:
- messagesWithoutSummariesForMailbox:
- messagesWithSummariesForMailbox:fromRowID:limit:
- orderedBatchOfMessagesEndingAtRowId:limit:success:
- deletedCountForMailbox:
- setServerUnreadOnlyOnServerCount:forMailbox:
- oldestMessageInMailbox:
- messageWithRemoteID:inRemoteMailbox:
- maximumRemoteIDForMailbox:
- minimumRemoteIDForMailbox:
- sequenceIdentifierForMailbox:
- setSequenceIdentifier:forMailbox:
- sequenceIdentifierForMessagesWithRemoteIDs:inMailbox:
- setSequenceIdentifier:forMessageWithLibraryID:
- setSequenceIdentifier:forMessagesWithRemoteIDs:inMailbox:
- getDetailsForMessagesWithRemoteIDInRange:fromMailbox:
- getDetailsForAllMessagesFromMailbox:
- getDetailsForMessages:absoluteBottom:topOfDesiredRange:range:fromMailbox:
- messagesWithMessageIDHeader:
- removeAllMessagesFromMailbox:removeMailbox:andNotify:
- messageWithMessageID:inMailbox:
- dataConsumerForMessage:isPartial:
- dataConsumerForMessage:
- metadataForMessage:
- bodyDataForMessage:
- sendMessagesMatchingCriterion:to:options:range:
- sendMessagesMatchingCriterion:to:options:
- messagesMatchingCriterion:options:success:
- messagesMatchingCriterion:options:range:success:
- libraryExists
- closeDatabaseConnections
- deletePOPUID:inMailbox:
- UIDsToDeleteInMailbox:
- deletedUIDsInMailbox:
- allUIDsInMailbox:
- hiddenPOPUIDsInMailbox:
- lockDBForWriting
- appendOfflineCacheOperation:forAccount:lastTemporaryID:
- markOfflineCacheOperationAsComplete:
- offlineCacheOperationsForAccount:lastTemporaryID:
- appendOfflineCacheReplayData:forAccountID:
- consumeOfflineCacheReplayDataForAccount:usingBlock:
- deleteOfflineCacheDataForAccount:
- updateFlagsForMessagesInPlace:success:
- remoteStoreForMessage:
- addMessages:withMailbox:fetchBodies:newMessagesByOldMessage:
- setFlagsForMessages:
- postOldFlags:newFlags:forMessage:
- storedIntegerPropertyWithName:
- setStoredIntegerPropertyWithName:value:
- isBusy
@end