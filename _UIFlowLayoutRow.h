@interface _UIFlowLayoutRow : NSObject
{
	id _items;
	id _section;
	struct _rowSize;
	struct _rowFrame;
	long long _index;
	BOOL _isValid;
	BOOL _complete;
	int _verticalAlignement;
	int _horizontalAlignement;
	BOOL _fixedItemSize;
}

+ dealloc
+ init
+ invalidate
+ snapshot
+ items
+ section
+ index
+ addItem:
+ rowSize
+ setRowSize:
+ fixedItemSize
+ setFixedItemSize:
+ rowFrame
+ setSection:
+ setComplete:
+ layoutRow
+ setRowFrame:
+ copyFromSection:
+ complete
+ setIndex:
- dealloc
- init
- invalidate
- snapshot
- items
- section
- index
- addItem:
- rowSize
- setRowSize:
- fixedItemSize
- setFixedItemSize:
- rowFrame
- setSection:
- setComplete:
- layoutRow
- setRowFrame:
- copyFromSection:
- complete
- setIndex:
@end
