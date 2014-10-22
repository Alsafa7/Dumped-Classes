@interface UIStatusBarComposedData : NSObject
{
	struct _rawData;
	Array _itemEnabled;
	id _doubleHeightStatus;
}

+ dealloc
+ copyWithZone:
+ rawData
+ isItemEnabled:
+ setItem:enabled:
+ doubleHeightStatus
+ initWithRawData:
+ setDoubleHeightStatus:
- dealloc
- copyWithZone:
- rawData
- isItemEnabled:
- setItem:enabled:
- doubleHeightStatus
- initWithRawData:
- setDoubleHeightStatus:
@end
