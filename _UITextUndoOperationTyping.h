@interface _UITextUndoOperationTyping : NSUndoTextOperation
{
	struct _replacementRange;
	id _attributedString;
}

+ dealloc
+ coalesceAffectedRange:replacementRange:selectedRange:textStorage:
+ initWithAffectedRange:inputController:replacementRange:
+ undoRedo
+ supportsCoalescing
- dealloc
- coalesceAffectedRange:replacementRange:selectedRange:textStorage:
- initWithAffectedRange:inputController:replacementRange:
- undoRedo
- supportsCoalescing
@end
