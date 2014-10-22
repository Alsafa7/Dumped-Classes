@interface UIKBGradient : NSObject
{
	id _gradientName;
	id _flatColorName;
	id _startColorName;
	id _endColorName;
	id _colors;
	double _middleLocation;
	BOOL _horizontal;
}

+ dealloc
+ description
+ copyWithZone:
+ setHorizontal:
+ initWithName:
+ horizontal
+ CGGradient
+ initWithFlatColor:
+ initWithStartColor:endColor:
+ initWith3Colors:middleLocation:
- dealloc
- description
- copyWithZone:
- setHorizontal:
- initWithName:
- horizontal
- CGGradient
- initWithFlatColor:
- initWithStartColor:endColor:
- initWith3Colors:middleLocation:
@end
