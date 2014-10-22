@interface _NSUndoObject : NSObject
{
	id next;
	id previous;
	id _target;
}

+ isEndMark
+ isBeginMark
+ init
+ invoke
+ target
+ initWithTarget:
- isEndMark
- isBeginMark
- init
- invoke
- target
- initWithTarget:
@end
