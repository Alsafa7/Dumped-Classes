@interface TIKeyboardTouchEvent : NSObject
{
	int _stage;
	double _radius;
	double _timestamp;
	long long _pathIndex;
	long long _forcedKeyCode;
	struct _location;
}

+ initWithCoder:
+ encodeWithCoder:
+ description
+ timestamp
+ location
+ stage
+ pathIndex
+ radius
+ initWithStage:location:radius:timestamp:pathIndex:forcedKeyCode:
+ forcedKeyCode
- initWithCoder:
- encodeWithCoder:
- description
- timestamp
- location
- stage
- pathIndex
- radius
- initWithStage:location:radius:timestamp:pathIndex:forcedKeyCode:
- forcedKeyCode
@end
