@interface UIKBSplitRow : NSObject
{
	unsigned char _rowIndex;
	double _rowOffset;
	double _rowWidth;
	struct _defaultKeySize;
	id _keys;
	id _vacancies;
	id _hints;
	id _keylistLeft;
	id _geolistLeft;
	id _attrlistLeft;
	id _keylistRight;
	id _geolistRight;
	id _attrlistRight;
}

+ keyAtIndex:
+ dealloc
+ init
+ description
+ rowIndex
+ keys
+ setRowIndex:
+ rowOffset
+ addKey:
+ setHints:
+ listOfType:left:
+ setRowOffset:
+ rowWidth
+ setRowWidth:
+ defaultKeySize
+ setDefaultKeySize:
+ hints
- keyAtIndex:
- dealloc
- init
- description
- rowIndex
- keys
- setRowIndex:
- rowOffset
- addKey:
- setHints:
- listOfType:left:
- setRowOffset:
- rowWidth
- setRowWidth:
- defaultKeySize
- setDefaultKeySize:
- hints
@end
