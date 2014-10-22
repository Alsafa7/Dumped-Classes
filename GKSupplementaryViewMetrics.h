@interface GKSupplementaryViewMetrics : NSObject
{
	BOOL _shouldPin;
	BOOL _hidden;
	BOOL _shouldUseGlobalIndexing;
	BOOL _shouldPinGlobal;
	double _desiredWidth;
	double _desiredHeight;
	id _kind;
	long long _animateWithSection;
	struct _globalSectionRange;
}

+ setDesiredHeight:
+ setShouldPin:
+ localDescription
+ setGlobalSectionRange:
+ globalSectionRange
+ setShouldPinGlobal:
+ setShouldUseGlobalIndexing:
+ desiredHeight
+ shouldPin
+ setDesiredWidth:
+ setAnimateWithSection:
+ sizeForCollectionView:
+ desiredWidth
+ shouldUseGlobalIndexing
+ shouldPinGlobal
+ animateWithSection
+ dealloc
+ isHidden
+ setHidden:
+ init
+ description
+ copyWithZone:
+ kind
+ setKind:
- setDesiredHeight:
- setShouldPin:
- localDescription
- setGlobalSectionRange:
- globalSectionRange
- setShouldPinGlobal:
- setShouldUseGlobalIndexing:
- desiredHeight
- shouldPin
- setDesiredWidth:
- setAnimateWithSection:
- sizeForCollectionView:
- desiredWidth
- shouldUseGlobalIndexing
- shouldPinGlobal
- animateWithSection
- dealloc
- isHidden
- setHidden:
- init
- description
- copyWithZone:
- kind
- setKind:
@end
