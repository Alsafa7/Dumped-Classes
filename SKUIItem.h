@interface SKUIItem : NSObject
{
	struct _ageBandRange;
	id _artistName;
	id _artworks;
	id _bundleID;
	id _categoryName;
	usigned long long _deviceFamilies;
	long long _itemIdentifier;
	long long _itemKind;
	id _itemKindString;
	id _itemOffer;
	BOOL _newsstandApp;
	long long _newsstandBindingEdge;
	long long _newsstandBindingType;
	id _newsstandArtworks;
	long long _numberOfUserRatings;
	long long _parentalControlsRank;
	BOOL _prerenderedArtwork;
	id _productPageURLString;
	id _requiredCapabilities;
	id _title;
	float _userRating;
	long long _versionIdentifier;
	id _versionString;
}

+ artworkURLForSize:
+ isEqual:
+ hash
+ bundleIdentifier
+ title
+ versionString
+ artistName
+ userRating
+ initWithCacheRepresentation:
+ cacheRepresentation
+ parentalControlsRank
+ primaryItemOffer
+ requiredCapabilities
+ isNewsstandApp
+ hasPrerenderedArtwork
+ itemKindString
+ valueForMetricsField:
+ largestArtworkURL
+ addItemOfferParameterWithName:value:
+ ageBandRange
+ artworks
+ categoryName
+ deviceFamilies
+ newsstandArtworks
+ newsstandBindingEdge
+ newsstandBindingType
+ itemKind
+ .cxx_destruct
+ itemIdentifier
+ versionIdentifier
+ numberOfUserRatings
+ initWithLookupDictionary:
+ productPageURLString
- artworkURLForSize:
- isEqual:
- hash
- bundleIdentifier
- title
- versionString
- artistName
- userRating
- initWithCacheRepresentation:
- cacheRepresentation
- parentalControlsRank
- primaryItemOffer
- requiredCapabilities
- isNewsstandApp
- hasPrerenderedArtwork
- itemKindString
- valueForMetricsField:
- largestArtworkURL
- addItemOfferParameterWithName:value:
- ageBandRange
- artworks
- categoryName
- deviceFamilies
- newsstandArtworks
- newsstandBindingEdge
- newsstandBindingType
- itemKind
- .cxx_destruct
- itemIdentifier
- versionIdentifier
- numberOfUserRatings
- initWithLookupDictionary:
- productPageURLString
@end
