@interface GKGridLayoutMetrics : NSObject
{
	id _keyToMetrics;
	id _locationToKeyList;
	id _layoutKey;
}

+ prepareLayout:startingAtSection:
+ insertSupplementaryMetrics:forKey:atLocation:
+ _gkDescriptionWithChildren:
+ localDescription
+ keyToMetrics
+ setKeyToMetrics:
+ locationToKeyList
+ setLocationToKeyList:
+ layoutKey
+ enumerateSupplementaryLocations:
+ _gkDescription
+ addSupplementaryMetrics:forKey:atLocation:
+ supplementaryMetricsForKey:
+ replaceSupplementaryMetrics:forKey:
+ setLayoutKey:
+ keyListForLocation:
+ enumerateSupplementaryMetricsUsingBlock:
+ listForLocation:
+ mergeSupplementaryMetricsFromEnclosingMetrics:atLocation:globalRange:
+ removeSupplementaryMetricsForKey:
+ dealloc
+ init
+ description
+ copyWithZone:
- prepareLayout:startingAtSection:
- insertSupplementaryMetrics:forKey:atLocation:
- _gkDescriptionWithChildren:
- localDescription
- keyToMetrics
- setKeyToMetrics:
- locationToKeyList
- setLocationToKeyList:
- layoutKey
- enumerateSupplementaryLocations:
- _gkDescription
- addSupplementaryMetrics:forKey:atLocation:
- supplementaryMetricsForKey:
- replaceSupplementaryMetrics:forKey:
- setLayoutKey:
- keyListForLocation:
- enumerateSupplementaryMetricsUsingBlock:
- listForLocation:
- mergeSupplementaryMetricsFromEnclosingMetrics:atLocation:globalRange:
- removeSupplementaryMetricsForKey:
- dealloc
- init
- description
- copyWithZone:
@end
