@interface BBBulletin : NSObject
{
	BOOL _hasEventDate;
	BOOL _dateIsAllDay;
	BOOL _clearable;
	BOOL _wantsFullscreenPresentation;
	BOOL _expiresOnPublisherDeath;
	BOOL _showsMessagePreview;
	BOOL _usesExternalSync;
	id _sectionID;
	id _subsectionIDs;
	id _publisherRecordID;
	id _publisherBulletinID;
	id _dismissalID;
	long long _addressBookRecordID;
	long long _sectionSubtype;
	id _content;
	id _modalAlertContent;
	id _starkBannerContent;
	id _date;
	id _endDate;
	id _recencyDate;
	long long _dateFormatStyle;
	id _timeZone;
	usigned long long _accessoryStyle;
	id _sound;
	id _attachments;
	id _unlockActionLabelOverride;
	id _actions;
	id _buttons;
	id _context;
	id _expirationDate;
	usigned long long _expirationEvents;
	id _alertSuppressionContexts;
	id _bulletinID;
	id _lastInterruptDate;
	id _publicationDate;
	id _bulletinVersionID;
	id _lifeAssertions;
	id _observers;
	usigned long long realertCount_deprecated;
	id alertSuppressionAppIDs_deprecated;
}

+ sectionIconImageWithFormat:
+ isCritical
+ overridesQuietMode
+ _receivedTime
+ _setReceivedTime:
+ defaultActionBlockWithOrigin:canBypassPinLock:requiresUnlock:shouldDeactivateAwayController:suitabilityFilter:
+ defaultActionBlockWithOrigin:
+ actionBlockForButton:withOrigin:
+ playSound
+ killSound
+ defaultActionBlock
+ actionBlockForButton:
+ bulletinAlertShouldOverrideQuietMode
+ syncHash
+ composedAttachmentImageForKey:withObserver:
+ composedAttachmentImageSizeForKey:withObserver:
+ composedAttachmentImageForKey:
+ composedAttachmentImageSizeForKey:
+ composedAttachmentImageWithObserver:
+ composedAttachmentImageSizeWithObserver:
+ composedAttachmentImage
+ composedAttachmentImageSize
+ realertCount
+ showsSubtitle
+ messageNumberOfLines
+ usesVariableLayout
+ orderSectionUsingRecencyDate
+ showsDateInFloatingLockScreenAlert
+ missedBannerDescriptionFormat
+ fullUnlockActionLabel
+ unlockActionLabel
+ alertSuppressionAppIDs
+ coalescesWhenLocked
+ suppressesMessageForPrivacy
+ inertWhenLocked
+ preservesUnlockActionCase
+ bannerShowsSubtitle
+ visuallyIndicatesWhenDateIsInFuture
+ subtypePriority
+ iPodOutAlertType
+ sectionDisplayName
+ sectionIcon
+ sectionDisplaysCriticalBulletins
+ topic
+ setActions:
+ setAttachments:
+ dismissalID
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ setTitle:
+ description
+ setTimeZone:
+ date
+ copyWithZone:
+ context
+ title
+ setContext:
+ section
+ message
+ setDate:
+ setSubtitle:
+ subtitle
+ setMessage:
+ content
+ timeZone
+ buttons
+ setSection:
+ setObservers:
+ observers
+ addObserver:
+ defaultAction
+ actions
+ setBulletinID:
+ bulletinID
+ lifeAssertions
+ setLifeAssertions:
+ _fillOutCopy:withZone:
+ sectionID
+ setSectionID:
+ numberOfAdditionalAttachments
+ numberOfAdditionalAttachmentsOfType:
+ attachmentsCreatingIfNecessary:
+ responseSendBlock
+ _responseForActionType:
+ firstValidObserver
+ _actionKeyForType:
+ subsectionIDs
+ setSubsectionIDs:
+ publisherBulletinID
+ setPublisherBulletinID:
+ setDismissalID:
+ addressBookRecordID
+ setAddressBookRecordID:
+ sectionSubtype
+ setSectionSubtype:
+ showsMessagePreview
+ setShowsMessagePreview:
+ modalAlertContent
+ setModalAlertContent:
+ starkBannerContent
+ setStarkBannerContent:
+ hasEventDate
+ setHasEventDate:
+ recencyDate
+ setRecencyDate:
+ dateFormatStyle
+ setDateFormatStyle:
+ dateIsAllDay
+ setDateIsAllDay:
+ accessoryStyle
+ setAccessoryStyle:
+ clearable
+ setClearable:
+ sound
+ setSound:
+ unlockActionLabelOverride
+ setUnlockActionLabelOverride:
+ wantsFullscreenPresentation
+ setWantsFullscreenPresentation:
+ expirationEvents
+ setExpirationEvents:
+ alertSuppressionContexts
+ setAlertSuppressionContexts:
+ lastInterruptDate
+ setLastInterruptDate:
+ publicationDate
+ setPublicationDate:
+ usesExternalSync
+ setUsesExternalSync:
+ bulletinVersionID
+ setBulletinVersionID:
+ realertCount_deprecated
+ setRealertCount_deprecated:
+ alertSuppressionAppIDs_deprecated
+ setAlertSuppressionAppIDs_deprecated:
+ _safeDescription:
+ primaryAttachmentType
+ setDefaultAction:
+ alternateAction
+ setAlternateAction:
+ acknowledgeAction
+ setAcknowledgeAction:
+ expireAction
+ setExpireAction:
+ snoozeAction
+ setSnoozeAction:
+ responseForDefaultAction
+ responseForAcknowledgeAction
+ responseForButtonActionAtIndex:
+ responseForSnoozeAction
+ responseForExpireAction
+ actionForResponse:
+ addLifeAssertion:
+ safeDescription
+ expiresOnPublisherDeath
+ setExpiresOnPublisherDeath:
+ attachments
+ endDate
+ setEndDate:
+ setRecordID:
+ recordID
+ expirationDate
+ setExpirationDate:
+ setContent:
+ setButtons:
- sectionIconImageWithFormat:
- isCritical
- overridesQuietMode
- _receivedTime
- _setReceivedTime:
- defaultActionBlockWithOrigin:canBypassPinLock:requiresUnlock:shouldDeactivateAwayController:suitabilityFilter:
- defaultActionBlockWithOrigin:
- actionBlockForButton:withOrigin:
- playSound
- killSound
- defaultActionBlock
- actionBlockForButton:
- bulletinAlertShouldOverrideQuietMode
- syncHash
- composedAttachmentImageForKey:withObserver:
- composedAttachmentImageSizeForKey:withObserver:
- composedAttachmentImageForKey:
- composedAttachmentImageSizeForKey:
- composedAttachmentImageWithObserver:
- composedAttachmentImageSizeWithObserver:
- composedAttachmentImage
- composedAttachmentImageSize
- realertCount
- showsSubtitle
- messageNumberOfLines
- usesVariableLayout
- orderSectionUsingRecencyDate
- showsDateInFloatingLockScreenAlert
- missedBannerDescriptionFormat
- fullUnlockActionLabel
- unlockActionLabel
- alertSuppressionAppIDs
- coalescesWhenLocked
- suppressesMessageForPrivacy
- inertWhenLocked
- preservesUnlockActionCase
- bannerShowsSubtitle
- visuallyIndicatesWhenDateIsInFuture
- subtypePriority
- iPodOutAlertType
- sectionDisplayName
- sectionIcon
- sectionDisplaysCriticalBulletins
- topic
- setActions:
- setAttachments:
- dismissalID
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- setTitle:
- description
- setTimeZone:
- date
- copyWithZone:
- context
- title
- setContext:
- section
- message
- setDate:
- setSubtitle:
- subtitle
- setMessage:
- content
- timeZone
- buttons
- setSection:
- setObservers:
- observers
- addObserver:
- defaultAction
- actions
- setBulletinID:
- bulletinID
- lifeAssertions
- setLifeAssertions:
- _fillOutCopy:withZone:
- sectionID
- setSectionID:
- numberOfAdditionalAttachments
- numberOfAdditionalAttachmentsOfType:
- attachmentsCreatingIfNecessary:
- responseSendBlock
- _responseForActionType:
- firstValidObserver
- _actionKeyForType:
- subsectionIDs
- setSubsectionIDs:
- publisherBulletinID
- setPublisherBulletinID:
- setDismissalID:
- addressBookRecordID
- setAddressBookRecordID:
- sectionSubtype
- setSectionSubtype:
- showsMessagePreview
- setShowsMessagePreview:
- modalAlertContent
- setModalAlertContent:
- starkBannerContent
- setStarkBannerContent:
- hasEventDate
- setHasEventDate:
- recencyDate
- setRecencyDate:
- dateFormatStyle
- setDateFormatStyle:
- dateIsAllDay
- setDateIsAllDay:
- accessoryStyle
- setAccessoryStyle:
- clearable
- setClearable:
- sound
- setSound:
- unlockActionLabelOverride
- setUnlockActionLabelOverride:
- wantsFullscreenPresentation
- setWantsFullscreenPresentation:
- expirationEvents
- setExpirationEvents:
- alertSuppressionContexts
- setAlertSuppressionContexts:
- lastInterruptDate
- setLastInterruptDate:
- publicationDate
- setPublicationDate:
- usesExternalSync
- setUsesExternalSync:
- bulletinVersionID
- setBulletinVersionID:
- realertCount_deprecated
- setRealertCount_deprecated:
- alertSuppressionAppIDs_deprecated
- setAlertSuppressionAppIDs_deprecated:
- _safeDescription:
- primaryAttachmentType
- setDefaultAction:
- alternateAction
- setAlternateAction:
- acknowledgeAction
- setAcknowledgeAction:
- expireAction
- setExpireAction:
- snoozeAction
- setSnoozeAction:
- responseForDefaultAction
- responseForAcknowledgeAction
- responseForButtonActionAtIndex:
- responseForSnoozeAction
- responseForExpireAction
- actionForResponse:
- addLifeAssertion:
- safeDescription
- expiresOnPublisherDeath
- setExpiresOnPublisherDeath:
- attachments
- endDate
- setEndDate:
- setRecordID:
- recordID
- expirationDate
- setExpirationDate:
- setContent:
- setButtons:
@end