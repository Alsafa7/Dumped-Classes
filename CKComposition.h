@interface CKComposition : NSObject
{
	id _text;
	id _subject;
}

+ dealloc
+ isEqual:
+ description
+ text
+ setText:
+ hasContent
+ isTextOnly
+ setSubject:
+ subject
+ mediaObjects
+ initWithText:subject:
+ hasNonwhiteSpaceContent
+ saveCompositionWithGUID:
+ compositionByAppendingMessagePart:
- dealloc
- isEqual:
- description
- text
- setText:
- hasContent
- isTextOnly
- setSubject:
- subject
- mediaObjects
- initWithText:subject:
- hasNonwhiteSpaceContent
- saveCompositionWithGUID:
- compositionByAppendingMessagePart:
@end
