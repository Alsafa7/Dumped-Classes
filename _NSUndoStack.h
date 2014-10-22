@interface _NSUndoStack : NSObject
{
	usigned long long _max;
	usigned long long _count;
	usigned long long _nestingLevel;
	id _head;
}

+ topUndoObject
+ markBegin
+ isDiscardable
+ popUndoObject
+ markEnd
+ groupIdentifier
+ setGroupIdentifier:
+ setDiscardable:
+ removeAllObjectsWithTarget:
+ _removeBottom
+ _beginMark
+ dealloc
+ removeObject:
+ count
+ init
+ removeAllObjects
+ description
+ popAndInvoke
+ nestingLevel
+ push:
+ max
+ setMax:
- topUndoObject
- markBegin
- isDiscardable
- popUndoObject
- markEnd
- groupIdentifier
- setGroupIdentifier:
- setDiscardable:
- removeAllObjectsWithTarget:
- _removeBottom
- _beginMark
- dealloc
- removeObject:
- count
- init
- removeAllObjects
- description
- popAndInvoke
- nestingLevel
- push:
- max
- setMax:
@end
