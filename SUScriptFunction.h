@interface SUScriptFunction : NSObject
{
	id _function;
	id _lock;
	id _thisObject;
}

+ dealloc
+ init
+ lock
+ unlock
+ initWithScriptObject:
+ setThisObject:
+ callWithArguments:
+ scriptObject
+ setScriptObject:
+ callSynchronouslyWithArguments:
+ callWithArguments:completionBlock:
+ _copyAdjustedArgumentsForArguments:
+ thisObject
- dealloc
- init
- lock
- unlock
- initWithScriptObject:
- setThisObject:
- callWithArguments:
- scriptObject
- setScriptObject:
- callSynchronouslyWithArguments:
- callWithArguments:completionBlock:
- _copyAdjustedArgumentsForArguments:
- thisObject
@end
