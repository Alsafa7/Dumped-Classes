@interface NSFormatter : NSObject
{

}

+ isPartialStringValid:newEditingString:errorDescription:
+ attributedStringForObjectValue:withDefaultAttributes:
+ editingStringForObjectValue:
+ getObjectValue:forString:range:error:
+ isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:
+ initWithCoder:
+ encodeWithCoder:
+ copyWithZone:
+ stringForObjectValue:
+ getObjectValue:forString:errorDescription:
- isPartialStringValid:newEditingString:errorDescription:
- attributedStringForObjectValue:withDefaultAttributes:
- editingStringForObjectValue:
- getObjectValue:forString:range:error:
- isPartialStringValid:proposedSelectedRange:originalString:originalSelectedRange:errorDescription:
- initWithCoder:
- encodeWithCoder:
- copyWithZone:
- stringForObjectValue:
- getObjectValue:forString:errorDescription:
@end
