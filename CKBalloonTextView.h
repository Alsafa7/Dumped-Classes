@interface CKBalloonTextView : UITextView
{
	BOOL _singleLine;
	id _attributedText;
	double _capOffsetFromBoundsTop;
	double _lastLineBaselineOffsetFromBoundsTop;
}

+ didMoveToWindow
+ setAttributedText:
+ attributedText
+ initReadonlyAndUnselectableWithFrame:textContainer:
+ isSingleLine
+ sizeThatFits:textAlignmentInsets:isSingleLine:
+ capOffsetFromBoundsTop
+ setCapOffsetFromBoundsTop:
+ lastLineBaselineOffsetFromBoundsTop
+ setLastLineBaselineOffsetFromBoundsTop:
+ setSingleLine:
- didMoveToWindow
- setAttributedText:
- attributedText
- initReadonlyAndUnselectableWithFrame:textContainer:
- isSingleLine
- sizeThatFits:textAlignmentInsets:isSingleLine:
- capOffsetFromBoundsTop
- setCapOffsetFromBoundsTop:
- lastLineBaselineOffsetFromBoundsTop
- setLastLineBaselineOffsetFromBoundsTop:
- setSingleLine:
@end
