@interface SKUIItemCellLayout : SKUICellLayout
{
	BOOL _iconImageHidden;
	BOOL _hidesItemOfferButton;
	BOOL _highlighted;
	id _iconImageView;
	id _itemOffer;
	id _itemOfferButton;
	id _itemOfferButtonAppearance;
	id _itemState;
	BOOL _restricted;
	BOOL _selected;
	id _removeControlView;
}

+ dealloc
+ setBackgroundColor:
+ setHighlighted:
+ isHighlighted
+ isSelected
+ prepareForReuse
+ setSelected:
+ iconImage
+ iconImageView
+ setIconImage:
+ setItemState:
+ setItemOffer:
+ itemOffer
+ itemState
+ setItemState:animated:
+ _itemOfferConfirmAction:
+ itemOfferButtonAppearance
+ setRestricted:
+ setIconImageHidden:
+ setItemOfferButtonAppearance:
+ resetLayout
+ _reloadItemOfferButton:
+ isIconImageHidden
+ _reloadItemOfferVisibility
+ layoutForItemOfferChange
+ _getParentTableView:collectionView:
+ _parentCollectionViewCell
+ _cancelItemOfferConfirmationAction:
+ _showItemOfferConfirmationAction:
+ itemOfferButtonWillAnimateTransition:
+ displaysItemOfferButton
+ setDisplaysItemOfferButton:
+ _useCloudButtonForItemState:
+ removeControlView
+ .cxx_destruct
+ isRestricted
+ itemOfferButton
- dealloc
- setBackgroundColor:
- setHighlighted:
- isHighlighted
- isSelected
- prepareForReuse
- setSelected:
- iconImage
- iconImageView
- setIconImage:
- setItemState:
- setItemOffer:
- itemOffer
- itemState
- setItemState:animated:
- _itemOfferConfirmAction:
- itemOfferButtonAppearance
- setRestricted:
- setIconImageHidden:
- setItemOfferButtonAppearance:
- resetLayout
- _reloadItemOfferButton:
- isIconImageHidden
- _reloadItemOfferVisibility
- layoutForItemOfferChange
- _getParentTableView:collectionView:
- _parentCollectionViewCell
- _cancelItemOfferConfirmationAction:
- _showItemOfferConfirmationAction:
- itemOfferButtonWillAnimateTransition:
- displaysItemOfferButton
- setDisplaysItemOfferButton:
- _useCloudButtonForItemState:
- removeControlView
- .cxx_destruct
- isRestricted
- itemOfferButton
@end
