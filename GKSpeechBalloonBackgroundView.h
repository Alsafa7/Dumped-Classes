@interface GKSpeechBalloonBackgroundView : UIView
{
	unsigned char _drawStyle;
	unsigned char _tipDirection;
	id _customDrawnView;
	id _strokedImageView;
}

+ tipDirection
+ drawStyle
+ setDrawStyle:
+ setTipDirection:
+ customDrawnView
+ setCustomDrawnView:
+ strokedImageView
+ setStrokedImageView:
+ initWithFrame:
+ dealloc
+ alignmentRectInsets
- tipDirection
- drawStyle
- setDrawStyle:
- setTipDirection:
- customDrawnView
- setCustomDrawnView:
- strokedImageView
- setStrokedImageView:
- initWithFrame:
- dealloc
- alignmentRectInsets
@end
