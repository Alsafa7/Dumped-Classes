@interface SBAppStatusBarTransitionInfo : NSObject
{
	id _startStyleRequest;
	long long _startOrientation;
	id _endStyleRequest;
	long long _endOrientation;
	int _transition;
	BOOL _zoomOther;
}

+ setEndStyleRequest:
+ setStartOrientation:
+ setEndOrientation:
+ setStartStyleRequest:
+ setZoomOther:
+ startOrientation
+ endOrientation
+ startStyleRequest
+ endStyleRequest
+ zoomOther
+ dealloc
+ description
+ setTransition:
+ transition
- setEndStyleRequest:
- setStartOrientation:
- setEndOrientation:
- setStartStyleRequest:
- setZoomOther:
- startOrientation
- endOrientation
- startStyleRequest
- endStyleRequest
- zoomOther
- dealloc
- description
- setTransition:
- transition
@end
