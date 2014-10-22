@interface _UIFlowLayoutInfo : NSObject
{
	id _sections;
	BOOL _useFloatingHeaderFooter;
	BOOL _horizontal;
	BOOL _leftToRight;
	struct _visibleBounds;
	struct _layoutSize;
	double _dimension;
	BOOL _isValid;
	id _rowAlignmentOptions;
	BOOL _usesFloatingHeaderFooter;
	struct _contentSize;
}

+ dealloc
+ init
+ copy
+ snapshot
+ contentSize
+ setContentSize:
+ setHorizontal:
+ sections
+ invalidate:
+ horizontal
+ rowAlignmentOptions
+ dimension
+ addSection
+ setRowAlignmentOptions:
+ setDimension:
+ frameForItemAtIndexPath:
+ usesFloatingHeaderFooter
+ setUsesFloatingHeaderFooter:
+ leftToRight
+ setLeftToRight:
- dealloc
- init
- copy
- snapshot
- contentSize
- setContentSize:
- setHorizontal:
- sections
- invalidate:
- horizontal
- rowAlignmentOptions
- dimension
- addSection
- setRowAlignmentOptions:
- setDimension:
- frameForItemAtIndexPath:
- usesFloatingHeaderFooter
- setUsesFloatingHeaderFooter:
- leftToRight
- setLeftToRight:
@end
