@interface MusicSongsDataSource : MusicQueryDataSource
{
	usigned long long _syncAssetTotal;
	int _syncAssetTotalToken;
	BOOL _syncAssetTotalTokenIsValid;
	int _syncCurrentAssetNumberToken;
	BOOL _syncCurrentAssetNumberTokenIsValid;
	usigned long long _syncCurrentAssetNumber;
	id _syncProgressString;
}

+ dealloc
+ initWithQuery:entityType:
+ entityCountFormat
+ showsEntityCountFooter
+ showsIndexBar
+ _updateSyncProgressString
+ .cxx_destruct
- dealloc
- initWithQuery:entityType:
- entityCountFormat
- showsEntityCountFooter
- showsIndexBar
- _updateSyncProgressString
- .cxx_destruct
@end
