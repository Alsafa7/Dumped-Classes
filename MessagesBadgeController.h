@interface MessagesBadgeController : NSObject
{
	long long _madridCount;
	long long _lastMadridFailure;
	BOOL _showingFailure;
	BOOL _disableDBFullDialog;
}

+ updateBadge
+ _updateBadge
+ _madridFailureCountChanged:
+ _madridUnreadCountChanged:
+ _displayDatabaseFullWarning
+ _saveMadridFailureID:
+ _savedMadridFailureID
+ _databaseBecameFull
+ _clearFailureBadge
+ _madridMessageSent:
+ _databaseBecameNoLongerFull
+ dealloc
+ init
- updateBadge
- _updateBadge
- _madridFailureCountChanged:
- _madridUnreadCountChanged:
- _displayDatabaseFullWarning
- _saveMadridFailureID:
- _savedMadridFailureID
- _databaseBecameFull
- _clearFailureBadge
- _madridMessageSent:
- _databaseBecameNoLongerFull
- dealloc
- init
@end
