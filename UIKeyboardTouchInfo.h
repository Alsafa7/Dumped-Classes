@interface UIKeyboardTouchInfo : NSObject
{
	id _touch;
	id _key;
	id _keyplane;
	id _slidOffKey;
	struct _initialPoint;
	struct _initialDragPoint;
	BOOL _dragged;
	int _stage;
	BOOL _maySuppressUpAction;
}

+ dealloc
+ touch
+ key
+ setTouch:
+ setKey:
+ setKeyplane:
+ setSlidOffKey:
+ keyplane
+ slidOffKey
+ initialPoint
+ setInitialPoint:
+ stage
+ setStage:
+ initialDragPoint
+ setInitialDragPoint:
+ dragged
+ setDragged:
+ maySuppressUpAction
+ setMaySuppressUpAction:
- dealloc
- touch
- key
- setTouch:
- setKey:
- setKeyplane:
- setSlidOffKey:
- keyplane
- slidOffKey
- initialPoint
- setInitialPoint:
- stage
- setStage:
- initialDragPoint
- setInitialDragPoint:
- dragged
- setDragged:
- maySuppressUpAction
- setMaySuppressUpAction:
@end
