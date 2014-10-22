@interface UIKeyboardTransitionSlice : NSObject
{
	struct _startRect;
	struct _endRect;
	id _startToken;
	id _endToken;
	BOOL _shiftContents;
	BOOL _delayCrossfade;
	int _normalization;
}

+ dealloc
+ init
+ description
+ endRect
+ hasGeometry
+ setStartRect:
+ setEndRect:
+ startRect
+ setStartToken:
+ setEndToken:
+ setNormalization:
+ setDelayCrossfade:
+ addStartRect:end:
+ startToken
+ endToken
+ normalization
+ delayCrossfade
- dealloc
- init
- description
- endRect
- hasGeometry
- setStartRect:
- setEndRect:
- startRect
- setStartToken:
- setEndToken:
- setNormalization:
- setDelayCrossfade:
- addStartRect:end:
- startToken
- endToken
- normalization
- delayCrossfade
@end
