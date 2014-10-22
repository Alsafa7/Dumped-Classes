@interface CIVector : NSObject
{
	usigned long long _count;
	union _u;
}

+ _values
+ X
+ Y
+ Z
+ W
+ initWithValues:count:
+ initWithX:
+ initWithX:Y:
+ initWithX:Y:Z:
+ initWithX:Y:Z:W:
+ initWithCGPoint:
+ initWithCGRect:
+ initWithCGAffineTransform:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ count
+ init
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ CGRectValue
+ CGPointValue
+ CGAffineTransformValue
+ initWithString:
+ valueAtIndex:
+ finalize
+ stringRepresentation
- _values
- X
- Y
- Z
- W
- initWithValues:count:
- initWithX:
- initWithX:Y:
- initWithX:Y:Z:
- initWithX:Y:Z:W:
- initWithCGPoint:
- initWithCGRect:
- initWithCGAffineTransform:
- dealloc
- initWithCoder:
- encodeWithCoder:
- count
- init
- isEqual:
- hash
- description
- copyWithZone:
- CGRectValue
- CGPointValue
- CGAffineTransformValue
- initWithString:
- valueAtIndex:
- finalize
- stringRepresentation
@end
