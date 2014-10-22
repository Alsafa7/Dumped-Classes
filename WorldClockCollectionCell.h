@interface WorldClockCollectionCell : UICollectionViewCell
{
	id _clockView;
	id _verticalLineView;
	id _horizontalLineView;
}

+ clockView
+ setClockView:
+ initWithFrame:
+ dealloc
+ pointInside:withEvent:
+ layoutSubviews
+ setHighlighted:
+ applyLayoutAttributes:
- clockView
- setClockView:
- initWithFrame:
- dealloc
- pointInside:withEvent:
- layoutSubviews
- setHighlighted:
- applyLayoutAttributes:
@end
