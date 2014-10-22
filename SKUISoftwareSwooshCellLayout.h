@interface SKUISoftwareSwooshCellLayout : SKUIItemCellLayout
{
	id _artistNameLabel;
	id _categoryLabel;
	struct _maxImageSize;
	id _priceLabel;
	id _primaryTextColor;
	id _titleColor;
	id _titleLabel;
	usigned long long _visibleFields;
}

+ price
+ setBackgroundColor:
+ layoutSubviews
+ setTitle:
+ title
+ setCategory:
+ category
+ artistName
+ setArtistName:
+ setColoringWithColorScheme:
+ _newDefaultLabel
+ setVisibleFields:
+ visibleFields
+ setItemOffer:
+ setPrice:
+ setItemState:animated:
+ initWithCollectionViewCell:
+ cellSizeForImageOfSize:
+ _reloadPriceLabel
+ .cxx_destruct
+ setMaxImageSize:
+ maxImageSize
- price
- setBackgroundColor:
- layoutSubviews
- setTitle:
- title
- setCategory:
- category
- artistName
- setArtistName:
- setColoringWithColorScheme:
- _newDefaultLabel
- setVisibleFields:
- visibleFields
- setItemOffer:
- setPrice:
- setItemState:animated:
- initWithCollectionViewCell:
- cellSizeForImageOfSize:
- _reloadPriceLabel
- .cxx_destruct
- setMaxImageSize:
- maxImageSize
@end
