@interface CMASBBPlugin : NSObject
{
	id _alerts;
	id _sortDescriptors;
	id _sectionParameters;
	id _sectionInfo;
	id _toneMap;
	id _sectionIdentifier;
}

+ _registerCMASToneWithURL:
+ _placeholderVibe
+ _saveBulletins
+ _priorAlertsDirectory
+ _priorAlertsURL
+ _populatePriorBulletins
+ _cellBroadcastMessageReceived:
+ dealloc
+ init
+ sectionIdentifier
+ sectionParameters
+ sectionDisplayName
+ bulletinsFilteredBy:count:lastCleared:
+ clearedInfoForBulletins:lastClearedInfo:
+ defaultSectionInfo
+ sortDescriptors
- _registerCMASToneWithURL:
- _placeholderVibe
- _saveBulletins
- _priorAlertsDirectory
- _priorAlertsURL
- _populatePriorBulletins
- _cellBroadcastMessageReceived:
- dealloc
- init
- sectionIdentifier
- sectionParameters
- sectionDisplayName
- bulletinsFilteredBy:count:lastCleared:
- clearedInfoForBulletins:lastClearedInfo:
- defaultSectionInfo
- sortDescriptors
@end
