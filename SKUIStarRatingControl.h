@interface SKUIStarRatingControl : UIControl
{
	long long _previousUserRating;
	id _emptyStarsImageView;
	id _filledStarsImageView;
	long long _userRating;
}

+ setBackgroundColor:
+ pointInside:withEvent:
+ layoutSubviews
+ sizeThatFits:
+ cancelTrackingWithEvent:
+ beginTrackingWithTouch:withEvent:
+ continueTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
+ userRating
+ setUserRating:
+ setEmptyStarsImage:
+ setFilledStarsImage:
+ _updateUserRatingWithTouch:
+ emptyStarsImage
+ filledStarsImage
+ .cxx_destruct
- setBackgroundColor:
- pointInside:withEvent:
- layoutSubviews
- sizeThatFits:
- cancelTrackingWithEvent:
- beginTrackingWithTouch:withEvent:
- continueTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
- userRating
- setUserRating:
- setEmptyStarsImage:
- setFilledStarsImage:
- _updateUserRatingWithTouch:
- emptyStarsImage
- filledStarsImage
- .cxx_destruct
@end
