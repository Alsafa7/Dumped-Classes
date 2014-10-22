@interface NSKeyValueSlowMutableCollectionGetter : NSKeyValueProxyGetter
{
	id _baseGetter;
	id _baseSetter;
}

+ baseGetter
+ initWithContainerClassID:key:baseGetter:baseSetter:containerIsa:proxyClass:
+ baseSetter
+ treatNilValuesLikeEmptyCollections
+ dealloc
- baseGetter
- initWithContainerClassID:key:baseGetter:baseSetter:containerIsa:proxyClass:
- baseSetter
- treatNilValuesLikeEmptyCollections
- dealloc
@end
