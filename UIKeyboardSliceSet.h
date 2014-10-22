@interface UIKeyboardSliceSet : NSObject
{
	id _ssid;
	id _slices;
	struct _startRect;
	struct _endRect;
	double _leftWidth;
	double _rightWidth;
	double _mergePoint;
	id _controlKeys;
}

+ dealloc
+ description
+ endRect
+ slices
+ setStartRect:
+ setEndRect:
+ startRect
+ addSlice:
+ controlKeys
+ initWithSliceID:
+ setLeftWidth:
+ setRightWidth:
+ mergePoint
+ leftWidth
+ rightWidth
+ sliceSetID
+ setSliceSetID:
+ setMergePoint:
+ setControlKeys:
- dealloc
- description
- endRect
- slices
- setStartRect:
- setEndRect:
- startRect
- addSlice:
- controlKeys
- initWithSliceID:
- setLeftWidth:
- setRightWidth:
- mergePoint
- leftWidth
- rightWidth
- sliceSetID
- setSliceSetID:
- setMergePoint:
- setControlKeys:
@end
