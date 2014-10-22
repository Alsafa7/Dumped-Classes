@interface GEORegionalResourceRegion : PBCodable
{
	pointer _tileRanges;
	usigned long long _tileRangesCount;
	usigned long long _tileRangesSpace;
	id _attributions;
	id _iconChecksums;
	id _icons;
}

+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ dictionaryRepresentation
+ setIcons:
+ icons
+ addAttribution:
+ clearAttributions
+ attributionAtIndex:
+ setIconChecksums:
+ addIcon:
+ addIconChecksum:
+ iconAtIndex:
+ iconChecksumsCount
+ clearIconChecksums
+ iconChecksumAtIndex:
+ iconChecksums
+ tileRangesCount
+ tileRangeAtIndex:
+ tileRanges
+ setTileRanges:count:
+ clearTileRanges
+ addTileRange:
+ readFrom:
+ attributions
+ writeTo:
+ copyTo:
+ iconsCount
+ clearIcons
+ attributionsCount
+ setAttributions:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- dictionaryRepresentation
- setIcons:
- icons
- addAttribution:
- clearAttributions
- attributionAtIndex:
- setIconChecksums:
- addIcon:
- addIconChecksum:
- iconAtIndex:
- iconChecksumsCount
- clearIconChecksums
- iconChecksumAtIndex:
- iconChecksums
- tileRangesCount
- tileRangeAtIndex:
- tileRanges
- setTileRanges:count:
- clearTileRanges
- addTileRange:
- readFrom:
- attributions
- writeTo:
- copyTo:
- iconsCount
- clearIcons
- attributionsCount
- setAttributions:
@end
