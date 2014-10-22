@interface SKUIBrickCollectionViewCell : UICollectionViewCell
{
	id _accessibilityLabel;
	id _clientContext;
	id _countdownView;
	BOOL _itemImageHidden;
	struct _itemImageInsets;
	id _itemImageView;
	id _titleColor;
	id _titleLabel;
}

+ setBackgroundColor:
+ layoutSubviews
+ setTitle:
+ accessibilityLabel
+ title
+ setAccessibilityLabel:
+ itemImage
+ setItemImage:
+ setColoringWithColorScheme:
+ clientContext
+ countdown
+ setCountdown:
+ isItemImageHidden
+ setItemImageHidden:
+ setItemImageInsets:
+ itemImageInsets
+ itemImageView
+ .cxx_destruct
+ setClientContext:
- setBackgroundColor:
- layoutSubviews
- setTitle:
- accessibilityLabel
- title
- setAccessibilityLabel:
- itemImage
- setItemImage:
- setColoringWithColorScheme:
- clientContext
- countdown
- setCountdown:
- isItemImageHidden
- setItemImageHidden:
- setItemImageInsets:
- itemImageInsets
- itemImageView
- .cxx_destruct
- setClientContext:
@end
