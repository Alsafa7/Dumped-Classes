@interface GKRatingView : UIView
{
	double _value;
	id _backgroundImageView;
	id _foregroundImageView;
	id _foregroundWidthConstraint;
}

+ setForegroundWidthConstraint:
+ foregroundImageView
+ foregroundWidthConstraint
+ backgroundImageView
+ setBackgroundImageView:
+ setForegroundImageView:
+ initWithFrame:
+ dealloc
+ setValue:
+ value
+ intrinsicContentSize
- setForegroundWidthConstraint:
- foregroundImageView
- foregroundWidthConstraint
- backgroundImageView
- setBackgroundImageView:
- setForegroundImageView:
- initWithFrame:
- dealloc
- setValue:
- value
- intrinsicContentSize
@end
