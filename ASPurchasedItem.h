@interface ASPurchasedItem : SKUIItem
{
	id _purchasableItem;
	id _redownloadOffer;
}

+ initWithPurchasableAppItem:
+ isSupportedOnIPad
+ isSupportedOnIPhone
+ artworkURLForSize:
+ bundleIdentifier
+ title
+ versionString
+ artistName
+ userRating
+ parentalControlsRank
+ primaryItemOffer
+ isNewsstandApp
+ largestArtworkURL
+ ageBandRange
+ categoryName
+ itemKind
+ .cxx_destruct
+ itemIdentifier
+ versionIdentifier
+ numberOfUserRatings
+ productPageURLString
- initWithPurchasableAppItem:
- isSupportedOnIPad
- isSupportedOnIPhone
- artworkURLForSize:
- bundleIdentifier
- title
- versionString
- artistName
- userRating
- parentalControlsRank
- primaryItemOffer
- isNewsstandApp
- largestArtworkURL
- ageBandRange
- categoryName
- itemKind
- .cxx_destruct
- itemIdentifier
- versionIdentifier
- numberOfUserRatings
- productPageURLString
@end
