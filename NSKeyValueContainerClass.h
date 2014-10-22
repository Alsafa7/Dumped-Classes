@interface NSKeyValueContainerClass : NSObject
{
	Class _originalClass;
	pointer _cachedObservationInfoImplementation;
	pointer _cachedSetObservationInfoImplementation;
	BOOL _cachedSetObservationInfoTakesAnObject;
	pointer _notifyingInfo;
}

+ initWithOriginalClass:
+ description
- initWithOriginalClass:
- description
@end
