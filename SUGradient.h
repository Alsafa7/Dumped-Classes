@interface SUGradient : NSObject
{
	id _colorStops;
	id _lock;
	struct _p0;
	struct _p1;
	BOOL _sorted;
	long long _type;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ copyWithZone:
+ initWithType:
+ initWithPropertyList:
+ numberOfColorStops
+ colorStopColors
+ addColorStopWithOffset:color:
+ copyShading
+ initWithPoint0:point1:type:
+ newPatternColorWithSize:opaque:
+ gradientType
+ copyCGGradient
+ p0
+ p1
+ colorStopOffsets
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- copyWithZone:
- initWithType:
- initWithPropertyList:
- numberOfColorStops
- colorStopColors
- addColorStopWithOffset:color:
- copyShading
- initWithPoint0:point1:type:
- newPatternColorWithSize:opaque:
- gradientType
- copyCGGradient
- p0
- p1
- colorStopOffsets
@end
