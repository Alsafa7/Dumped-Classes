@interface SUGradientColorStop : NSObject
{
	double _r;
	double _g;
	double _b;
	double _a;
	double _offset;
	pointer _rawColor;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ description
+ offset
+ compare:
+ copyCGColor
+ initWithColor:offset:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- description
- offset
- compare:
- copyCGColor
- initWithColor:offset:
@end
