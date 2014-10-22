@interface GKPurchasableGameCell : GKBaseGameCell
{
	float _capturedRating;
	id _storeItem;
	id _developerLabel;
	id _priceLabel;
	id _ratingStarsView;
}

+ didUpdateModel
+ canRemoveItem
+ storeItem
+ establishConstraints
+ setCapturedRating:
+ capturedRating
+ setStoreItem:
+ developerLabel
+ setDeveloperLabel:
+ priceLabel
+ setPriceLabel:
+ ratingStarsView
+ setRatingStarsView:
+ initWithFrame:
+ dealloc
+ prepareForReuse
- didUpdateModel
- canRemoveItem
- storeItem
- establishConstraints
- setCapturedRating:
- capturedRating
- setStoreItem:
- developerLabel
- setDeveloperLabel:
- priceLabel
- setPriceLabel:
- ratingStarsView
- setRatingStarsView:
- initWithFrame:
- dealloc
- prepareForReuse
@end
