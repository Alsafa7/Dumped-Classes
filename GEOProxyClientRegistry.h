@interface GEOProxyClientRegistry : NSObject
{
	id _lock;
	id _currentComposite;
	id _currentSet;
}

+ dealloc
+ _updateComposite
+ enableRegistry
+ addClient:
+ removeClient:
+ compositeClient
- dealloc
- _updateComposite
- enableRegistry
- addClient:
- removeClient:
- compositeClient
@end
