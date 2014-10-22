@interface SUItemReviewStatistics : NSObject
{
	float _averageUserRating;
	long long _numberOfUserRatings;
	id _numberOfUserRatingsString;
	long long _numberOfUserReviews;
	id _numberOfUserReviewsString;
}

+ averageUserRating
+ dealloc
+ initWithDictionary:
+ copyWithZone:
+ setAverageUserRating:
+ numberOfUserRatings
+ setNumberOfUserRatings:
+ numberOfUserRatingsString
+ setNumberOfUserRatingsString:
+ numberOfUserReviews
+ setNumberOfUserReviews:
+ numberOfUserReviewsString
+ setNumberOfUserReviewsString:
- averageUserRating
- dealloc
- initWithDictionary:
- copyWithZone:
- setAverageUserRating:
- numberOfUserRatings
- setNumberOfUserRatings:
- numberOfUserRatingsString
- setNumberOfUserRatingsString:
- numberOfUserReviews
- setNumberOfUserReviews:
- numberOfUserReviewsString
- setNumberOfUserReviewsString:
@end
