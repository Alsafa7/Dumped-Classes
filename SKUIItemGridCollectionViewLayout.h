@interface SKUIItemGridCollectionViewLayout : UICollectionViewFlowLayout
{
	id _evenColor;
	long long _numberOfColumns;
	id _oddColor;
	double _rowHeight;
}

+ init
+ setRowHeight:
+ rowHeight
+ numberOfColumns
+ layoutAttributesForElementsInRect:
+ setNumberOfColumns:
+ evenRowBackgroundColor
+ setEvenRowBackgroundColor:
+ setOddRowBackgroundColor:
+ oddRowBackgroundColor
+ .cxx_destruct
- init
- setRowHeight:
- rowHeight
- numberOfColumns
- layoutAttributesForElementsInRect:
- setNumberOfColumns:
- evenRowBackgroundColor
- setEvenRowBackgroundColor:
- setOddRowBackgroundColor:
- oddRowBackgroundColor
- .cxx_destruct
@end
