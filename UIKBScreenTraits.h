@interface UIKBScreenTraits : NSObject
{
	id _screen;
	long long _orientation;
	id _orientationKey;
}

+ dealloc
+ orientation
+ screen
+ setOrientationKey:
+ initWithScreen:orientation:
+ idiom
+ setOrientation:
+ orientationKey
- dealloc
- orientation
- screen
- setOrientationKey:
- initWithScreen:orientation:
- idiom
- setOrientation:
- orientationKey
@end
