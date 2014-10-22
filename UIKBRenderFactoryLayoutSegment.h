@interface UIKBRenderFactoryLayoutSegment : NSObject
{
	int _rectCount;
	Array _rects;
	Array _triangleCorners;
	int _edgeCount;
	Array _edges;
	Array _cachedKeyNames;
	int _states;
	id _traits;
}

+ dealloc
+ traits
+ setKeyStates:
+ addLayoutRect:asTriangle:
+ initWithTraits:
+ addRelativeLayoutRectFromEdge:ofCachedKey:
+ containsPoint:inRect:withKeyplane:
+ keyStates
- dealloc
- traits
- setKeyStates:
- addLayoutRect:asTriangle:
- initWithTraits:
- addRelativeLayoutRectFromEdge:ofCachedKey:
- containsPoint:inRect:withKeyplane:
- keyStates
@end
