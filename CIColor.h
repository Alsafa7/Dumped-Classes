@interface CIColor : NSObject
{
	pointer _priv;
	Array _pad;
}

+ initWithColor:
+ dealloc
+ initWithCoder:
+ CGColor
+ encodeWithCoder:
+ alpha
+ numberOfComponents
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ initWithRed:green:blue:alpha:
+ cgColor
+ initWithString:
+ initWithCGColor:
+ red
+ green
+ blue
+ components
+ colorSpace
+ finalize
+ stringRepresentation
- initWithColor:
- dealloc
- initWithCoder:
- CGColor
- encodeWithCoder:
- alpha
- numberOfComponents
- isEqual:
- hash
- description
- copyWithZone:
- initWithRed:green:blue:alpha:
- cgColor
- initWithString:
- initWithCGColor:
- red
- green
- blue
- components
- colorSpace
- finalize
- stringRepresentation
@end
