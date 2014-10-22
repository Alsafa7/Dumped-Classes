@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout
{
	id _cellContentView;
	struct _imageBoundingSize;
	BOOL _largeSpacing;
	long long _numberOfUserRatings;
	id _primaryTextColor;
	id _secondaryTextColor;
	double _userRating;
}

+ setBackgroundColor:
+ layoutSubviews
+ setTitle:
+ title
+ setCategory:
+ category
+ initWithTableViewCell:
+ userRating
+ setUserRating:
+ setIconImage:
+ setColoringWithColorScheme:
+ _reloadUserRatingViews
+ _decimalNumberFormatter
+ setImageBoundingSize:
+ initWithCollectionViewCell:
+ initWithParentView:
+ layoutForItemOfferChange
+ imageBoundingSize
+ _initSKUIItemBrowseCellLayout
+ indexNumberString
+ setIndexNumberString:
+ setLargeSpacing:
+ isLargeSpacing
+ .cxx_destruct
+ numberOfUserRatings
+ setNumberOfUserRatings:
- setBackgroundColor:
- layoutSubviews
- setTitle:
- title
- setCategory:
- category
- initWithTableViewCell:
- userRating
- setUserRating:
- setIconImage:
- setColoringWithColorScheme:
- _reloadUserRatingViews
- _decimalNumberFormatter
- setImageBoundingSize:
- initWithCollectionViewCell:
- initWithParentView:
- layoutForItemOfferChange
- imageBoundingSize
- _initSKUIItemBrowseCellLayout
- indexNumberString
- setIndexNumberString:
- setLargeSpacing:
- isLargeSpacing
- .cxx_destruct
- numberOfUserRatings
- setNumberOfUserRatings:
@end
