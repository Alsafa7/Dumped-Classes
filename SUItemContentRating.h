@interface SUItemContentRating : NSObject
{
	id _dictionary;
	long long _rank;
	id _ratingDescription;
	id _ratingLabel;
	long long _ratingSystem;
	id _ratingSystemLogo;
	BOOL _shouldHideWhenRestricted;
}

+ _isRatingSystemForApps:
+ _isRatingSystemForMovies:
+ _isRatingSystemForTV:
+ isExplicitContent
+ _isRatingSystemForMusic:
+ dealloc
+ initWithDictionary:
+ copyWithZone:
+ valueForProperty:
+ ratingSystem
+ ratingLabel
+ ratingDescription
+ setRatingDescription:
+ setRatingLabel:
+ setRatingSystem:
+ rank
+ setRank:
+ isRestricted
+ shouldHideWhenRestricted
+ ratingSystemLogo
+ setRatingSystemLogo:
+ setShouldHideWhenRestricted:
- _isRatingSystemForApps:
- _isRatingSystemForMovies:
- _isRatingSystemForTV:
- isExplicitContent
- _isRatingSystemForMusic:
- dealloc
- initWithDictionary:
- copyWithZone:
- valueForProperty:
- ratingSystem
- ratingLabel
- ratingDescription
- setRatingDescription:
- setRatingLabel:
- setRatingSystem:
- rank
- setRank:
- isRestricted
- shouldHideWhenRestricted
- ratingSystemLogo
- setRatingSystemLogo:
- setShouldHideWhenRestricted:
@end
