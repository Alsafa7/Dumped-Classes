@interface DeferredFrameworkLoader : NSObject
{
	id _path;
	pointer _frameworkHandle;
	long long _frameworkLoadedToken;
}

+ dealloc
+ path
+ setPath:
+ initWithPath:
+ classFromString:
+ frameworkHandle
+ setFrameworkHandle:
+ frameworkLoadedToken
+ setFrameworkLoadedToken:
- dealloc
- path
- setPath:
- initWithPath:
- classFromString:
- frameworkHandle
- setFrameworkHandle:
- frameworkLoadedToken
- setFrameworkLoadedToken:
@end
