@interface NSConcreteAttributedString : NSAttributedString
{
	id string;
	id attributes;
}

+ _runArrayHoldingAttributes
+ dealloc
+ init
+ length
+ copyWithZone:
+ string
+ initWithString:attributes:
+ initWithString:
+ attribute:atIndex:effectiveRange:
+ initWithAttributedString:
+ attributesAtIndex:effectiveRange:
+ finalize
- _runArrayHoldingAttributes
- dealloc
- init
- length
- copyWithZone:
- string
- initWithString:attributes:
- initWithString:
- attribute:atIndex:effectiveRange:
- initWithAttributedString:
- attributesAtIndex:effectiveRange:
- finalize
@end
