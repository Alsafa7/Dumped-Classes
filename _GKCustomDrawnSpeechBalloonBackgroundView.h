@interface _GKCustomDrawnSpeechBalloonBackgroundView : UIView
{
	unsigned char _drawStyle;
	unsigned char _tipDirection;
}

+ tipDirection
+ drawStyle
+ setDrawStyle:
+ setTipDirection:
+ _tipDirectionForCurrentUILayoutDirection
+ speechBalloonMaskForRect:
+ _gradientForColor:
+ initWithFrame:
+ drawRect:
+ alignmentRectInsets
+ tintColorDidChange
- tipDirection
- drawStyle
- setDrawStyle:
- setTipDirection:
- _tipDirectionForCurrentUILayoutDirection
- speechBalloonMaskForRect:
- _gradientForColor:
- initWithFrame:
- drawRect:
- alignmentRectInsets
- tintColorDidChange
@end
