@interface SKUIReview : NSObject
{
	id _body;
	id _dateString;
	float _rating;
	id _reviewer;
	id _title;
}

+ rating
+ title
+ body
+ reviewer
+ initWithReviewDictionary:
+ initWithCacheRepresentation:
+ cacheRepresentation
+ dateString
+ formattedBylineWithClientContext:
+ .cxx_destruct
- rating
- title
- body
- reviewer
- initWithReviewDictionary:
- initWithCacheRepresentation:
- cacheRepresentation
- dateString
- formattedBylineWithClientContext:
- .cxx_destruct
@end
