@interface AFContextManager : NSObject
{
	pointer _contextProviders;
	id _center;
}

+ removeContextProvider:
+ addContextProvider:
+ dealloc
+ init
+ nothing
+ _collateContextsIntoArray:
+ _shutdownServer
+ _collateContexts
+ startCenter:
+ .cxx_destruct
- removeContextProvider:
- addContextProvider:
- dealloc
- init
- nothing
- _collateContextsIntoArray:
- _shutdownServer
- _collateContexts
- startCenter:
- .cxx_destruct
@end
