@interface SKUICollectionViewCell : UICollectionViewCell
{
	id _bottomBorderView;
	long long _position;
	id _rightBorderView;
	id _separatorColor;
	BOOL _showsCellSeparators;
}

+ setBackgroundColor:
+ layoutSubviews
+ setHighlighted:
+ separatorColor
+ setSeparatorColor:
+ setSelected:
+ applyLayoutAttributes:
+ setShowsCellSeparators:
+ _showsRightBorder
+ _updateBorderVisibility
+ showsCellSeparators
+ _setPosition:
+ .cxx_destruct
- setBackgroundColor:
- layoutSubviews
- setHighlighted:
- separatorColor
- setSeparatorColor:
- setSelected:
- applyLayoutAttributes:
- setShowsCellSeparators:
- _showsRightBorder
- _updateBorderVisibility
- showsCellSeparators
- _setPosition:
- .cxx_destruct
@end
