@interface NSKeyValueProxyGetter : NSKeyValueGetter
{
	Class _proxyClass;
}

+ initWithContainerClassID:key:proxyClass:
+ proxyClass
- initWithContainerClassID:key:proxyClass:
- proxyClass
@end
