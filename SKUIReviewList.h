@interface SKUIReviewList : NSObject
{
	id _dictionary;
	id _reviews;
}

+ numberOfPages
+ reviews
+ userRating
+ initWithCacheRepresentation:
+ cacheRepresentation
+ writeReviewURL
+ initWithReviewListDictionary:
+ addReviews:
+ fiveStarRatingCount
+ fourStarRatingCount
+ oneStarRatingCount
+ ratingCount
+ threeStarRatingCount
+ twoStarRatingCount
+ .cxx_destruct
- numberOfPages
- reviews
- userRating
- initWithCacheRepresentation:
- cacheRepresentation
- writeReviewURL
- initWithReviewListDictionary:
- addReviews:
- fiveStarRatingCount
- fourStarRatingCount
- oneStarRatingCount
- ratingCount
- threeStarRatingCount
- twoStarRatingCount
- .cxx_destruct
@end
