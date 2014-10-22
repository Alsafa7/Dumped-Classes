@interface NSUndoTextOperation : NSObject
{
	struct _affectedRange;
	id _inputController;
}

+ setInputController:
+ inputController
+ initWithAffectedRange:inputController:
+ undoRedo
+ supportsCoalescing
+ affectedRange
+ setAffectedRange:
- setInputController:
- inputController
- initWithAffectedRange:inputController:
- undoRedo
- supportsCoalescing
- affectedRange
- setAffectedRange:
@end
