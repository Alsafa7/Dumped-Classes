@interface SKUICardCellLayout : SKUIItemCellLayout
{
	id _artistLabel;
	long long _numberOfUserRatings;
	id _screenshotImageView;
	id _titleLabel;
	double _userRating;
	id _userRatingImageView;
	id _userRatingLabel;
}

+ setBackgroundColor:
+ layoutSubviews
+ setTitle:
+ title
+ prepareForReuse
+ artistName
+ setArtistName:
+ userRating
+ setUserRating:
+ screenshotImage
+ resetLayout
+ setScreenshotImage:
+ layoutForItemOfferChange
+ .cxx_destruct
+ numberOfUserRatings
+ setNumberOfUserRatings:
- setBackgroundColor:
- layoutSubviews
- setTitle:
- title
- prepareForReuse
- artistName
- setArtistName:
- userRating
- setUserRating:
- screenshotImage
- resetLayout
- setScreenshotImage:
- layoutForItemOfferChange
- .cxx_destruct
- numberOfUserRatings
- setNumberOfUserRatings:
@end
