@interface GKStoreItemInternal : GKInternalRepresentation
{
	id _adamID;
	id _artistName;
	id _priceDisplay;
	id _viewItemURL;
	id _shortViewItemURL;
	id _tellAFriendMessageContentsUrl;
	id _expirationDate;
	unsigned int _numberOfUserRatings;
	float _averageUserRating;
	BOOL _owned;
}

+ tellAFriendMessageContentsUrl
+ setTellAFriendMessageContentsUrl:
+ owned
+ setOwned:
+ priceDisplay
+ viewItemURL
+ averageUserRating
+ setViewItemURL:
+ shortViewItemURL
+ setShortViewItemURL:
+ adamID
+ dealloc
+ isEqual:
+ hash
+ isValid
+ artistName
+ setArtistName:
+ expirationDate
+ setExpirationDate:
+ setPriceDisplay:
+ setAdamID:
+ setAverageUserRating:
+ numberOfUserRatings
+ setNumberOfUserRatings:
- tellAFriendMessageContentsUrl
- setTellAFriendMessageContentsUrl:
- owned
- setOwned:
- priceDisplay
- viewItemURL
- averageUserRating
- setViewItemURL:
- shortViewItemURL
- setShortViewItemURL:
- adamID
- dealloc
- isEqual:
- hash
- isValid
- artistName
- setArtistName:
- expirationDate
- setExpirationDate:
- setPriceDisplay:
- setAdamID:
- setAverageUserRating:
- numberOfUserRatings
- setNumberOfUserRatings:
@end
