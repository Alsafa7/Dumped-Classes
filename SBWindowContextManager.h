@interface SBWindowContextManager : NSObject
{
	id _delegate;
	id _identifier;
	id _observers;
	id _screenToOrderedContexts;
}

+ trackedScreens
+ numberOfContextsForScreen:
+ addContext:
+ contextWithIdentifier:screen:
+ removeContext:
+ contextsForScreen:
+ dealloc
+ setDelegate:
+ description
+ delegate
+ removeObserver:
+ identifier
+ setIdentifier:
+ addObserver:
- trackedScreens
- numberOfContextsForScreen:
- addContext:
- contextWithIdentifier:screen:
- removeContext:
- contextsForScreen:
- dealloc
- setDelegate:
- description
- delegate
- removeObserver:
- identifier
- setIdentifier:
- addObserver:
@end
