@interface TIKeyboardLayoutFactory : NSObject
{
	pointer _layoutsLibraryHandle;
	id _internalCache;
}

+ dealloc
+ init
+ keyboardWithName:inCache:
+ internalCache
+ setInternalCache:
+ layoutsLibraryHandle
- dealloc
- init
- keyboardWithName:inCache:
- internalCache
- setInternalCache:
- layoutsLibraryHandle
@end
