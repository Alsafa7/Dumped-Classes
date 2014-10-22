@interface SKUIPageComponent : NSObject
{
	long long _metricsLocationPosition;
}

+ initWithCustomPageContext:
+ componentType
+ valueForMetricsField:
+ enumerateMissingItemIdentifiersFromIndex:usingBlock:
+ isMissingItemData
+ metricsElementName
+ _enumerateMissingItemIdentifiersFromBricks:startIndex:usingBlock:
+ _enumerateMissingItemIdentifiersFromLinks:startIndex:usingBlock:
+ _enumerateMissingItemIdentifiersFromLockups:startIndex:usingBlock:
+ metricsLocationPosition
+ _setMetricsLocationPosition:
+ initWithFeaturedContentContext:kind:
- initWithCustomPageContext:
- componentType
- valueForMetricsField:
- enumerateMissingItemIdentifiersFromIndex:usingBlock:
- isMissingItemData
- metricsElementName
- _enumerateMissingItemIdentifiersFromBricks:startIndex:usingBlock:
- _enumerateMissingItemIdentifiersFromLinks:startIndex:usingBlock:
- _enumerateMissingItemIdentifiersFromLockups:startIndex:usingBlock:
- metricsLocationPosition
- _setMetricsLocationPosition:
- initWithFeaturedContentContext:kind:
@end
