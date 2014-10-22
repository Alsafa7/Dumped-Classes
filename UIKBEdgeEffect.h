@interface UIKBEdgeEffect : NSObject
{
	id _colorName;
	usigned long long _edges;
	double _inset;
	double _weight;
	id _gradient;
}

+ dealloc
+ setInset:
+ CGColor
+ description
+ setEdges:
+ isValid
+ copyWithZone:
+ setGradient:
+ edges
+ gradient
+ weight
+ initWithColor:edges:inset:weight:
+ inset
+ renderUnder
+ renderSelector
+ setWeight:
- dealloc
- setInset:
- CGColor
- description
- setEdges:
- isValid
- copyWithZone:
- setGradient:
- edges
- gradient
- weight
- initWithColor:edges:inset:weight:
- inset
- renderUnder
- renderSelector
- setWeight:
@end
