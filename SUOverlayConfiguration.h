@interface SUOverlayConfiguration : NSObject
{
	id _bagKeyPattern;
	long long _cornerRadius;
	BOOL _shouldShowNavigationBar;
	struct _size;
	id _transitionName;
	id _urlPattern;
}

+ dealloc
+ size
+ init
+ initWithDictionary:
+ cornerRadius
+ shouldShowNavigationBar
+ transitionName
+ matchesURL:
+ matchesURLBagKey:
- dealloc
- size
- init
- initWithDictionary:
- cornerRadius
- shouldShowNavigationBar
- transitionName
- matchesURL:
- matchesURLBagKey:
@end
