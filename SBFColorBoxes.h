@interface SBFColorBoxes : NSObject
{
	pointer _colorBoxes;
	usigned long long _rowCount;
	usigned long long _columnCount;
	usigned long long _size;
	double _contrast;
}

+ dealloc
+ size
+ description
+ contrast
+ columnCount
+ rowCount
+ _freeColorBoxes
+ initWithColorBoxes:size:rowCount:columnCount:contrast:
+ colorBoxes
- dealloc
- size
- description
- contrast
- columnCount
- rowCount
- _freeColorBoxes
- initWithColorBoxes:size:rowCount:columnCount:contrast:
- colorBoxes
@end
