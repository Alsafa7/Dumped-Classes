@interface UIInputViewAnimationStyle : NSObject
{
	BOOL animated;
	double duration;
	int outDirection;
	usigned long long extraOptions;
	BOOL persistUntilComplete;
	BOOL ignoreNewAnimations;
	id extraViews;
	BOOL placeholderKeyboard;
	BOOL force;
}

+ dealloc
+ isEqual:
+ description
+ duration
+ setDuration:
+ animated
+ setAnimated:
+ setOutDirection:
+ setExtraOptions:
+ launchAnimation:afterStarted:completion:forHost:fromCurrentPosition:
+ setPersistUntilComplete:
+ isAnimationCompleted
+ useCustomTransition
+ setPlaceholderKeyboard:
+ setIgnoreNewAnimations:
+ setForce:
+ extraViews
+ setExtraViews:
+ persistUntilComplete
+ outDirection
+ ignoreNewAnimations
+ placeholderKeyboard
+ force
+ extraOptions
- dealloc
- isEqual:
- description
- duration
- setDuration:
- animated
- setAnimated:
- setOutDirection:
- setExtraOptions:
- launchAnimation:afterStarted:completion:forHost:fromCurrentPosition:
- setPersistUntilComplete:
- isAnimationCompleted
- useCustomTransition
- setPlaceholderKeyboard:
- setIgnoreNewAnimations:
- setForce:
- extraViews
- setExtraViews:
- persistUntilComplete
- outDirection
- ignoreNewAnimations
- placeholderKeyboard
- force
- extraOptions
@end
