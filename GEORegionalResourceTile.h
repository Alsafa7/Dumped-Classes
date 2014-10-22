@interface GEORegionalResourceTile : PBCodable
{
	id _attributions;
	id _childrens;
	id _iconChecksums;
	id _icons;
	unsigned int _x;
	unsigned int _y;
	unsigned int _z;
}

+ containsTileKey:
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ dictionaryRepresentation
+ x
+ setX:
+ y
+ setY:
+ z
+ setZ:
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
+ childrens
+ childrensCount
+ setChildrens:
+ clearChildrens
+ childrenAtIndex:
+ readFrom:
+ addChildren:
+ attributions
+ writeTo:
+ copyTo:
+ iconsCount
+ clearIcons
+ attributionsCount
+ setAttributions:
- containsTileKey:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- dictionaryRepresentation
- x
- setX:
- y
- setY:
- z
- setZ:
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
- childrens
- childrensCount
- setChildrens:
- clearChildrens
- childrenAtIndex:
- readFrom:
- addChildren:
- attributions
- writeTo:
- copyTo:
- iconsCount
- clearIcons
- attributionsCount
- setAttributions:
@end