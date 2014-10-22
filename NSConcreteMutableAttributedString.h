@interface NSConcreteMutableAttributedString : NSMutableAttributedString
{
	id mutableString;
	id mutableAttributes;
	struct fields;
}

+ _runArrayHoldingAttributes
+ edited:range:changeInLength:
+ dealloc
+ initWithCoder:
+ init
+ length
+ string
+ classForCoder
+ initWithString:attributes:
+ addAttribute:value:range:
+ initWithString:
+ attribute:atIndex:effectiveRange:
+ setAttributes:range:
+ initWithAttributedString:
+ attribute:atIndex:longestEffectiveRange:inRange:
+ replaceCharactersInRange:withString:
+ attributesAtIndex:effectiveRange:
+ replaceCharactersInRange:withAttributedString:
+ finalize
- _runArrayHoldingAttributes
- edited:range:changeInLength:
- dealloc
- initWithCoder:
- init
- length
- string
- classForCoder
- initWithString:attributes:
- addAttribute:value:range:
- initWithString:
- attribute:atIndex:effectiveRange:
- setAttributes:range:
- initWithAttributedString:
- attribute:atIndex:longestEffectiveRange:inRange:
- replaceCharactersInRange:withString:
- attributesAtIndex:effectiveRange:
- replaceCharactersInRange:withAttributedString:
- finalize
@end
