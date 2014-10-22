@interface _NSUndoBeginMark : _NSUndoObject
{
	id _groupIdentifier;
	BOOL _isDiscardable;
}

+ isBeginMark
+ isDiscardable
+ groupIdentifier
+ setGroupIdentifier:
+ setDiscardable:
+ dealloc
+ description
- isBeginMark
- isDiscardable
- groupIdentifier
- setGroupIdentifier:
- setDiscardable:
- dealloc
- description
@end
