@interface GKMetricData : NSObject
{
	id _metrics;
	usigned long long _currentMaxVisibleItemCount;
	usigned long long _filteredTotalItemCount;
	id _headerPinnableAttributes;
	id _footerPinnableAttributes;
}

+ _gkDescriptionWithChildren:
+ localDescription
+ layoutKey
+ sectionMetrics
+ setMetrics:
+ setHeaderPinnableAttributes:
+ setFooterPinnableAttributes:
+ addAttributes:forLocation:
+ currentMaxVisibleItemCount
+ setCurrentMaxVisibleItemCount:
+ filteredTotalItemCount
+ setFilteredTotalItemCount:
+ headerPinnableAttributes
+ footerPinnableAttributes
+ dealloc
+ init
+ description
+ metrics
- _gkDescriptionWithChildren:
- localDescription
- layoutKey
- sectionMetrics
- setMetrics:
- setHeaderPinnableAttributes:
- setFooterPinnableAttributes:
- addAttributes:forLocation:
- currentMaxVisibleItemCount
- setCurrentMaxVisibleItemCount:
- filteredTotalItemCount
- setFilteredTotalItemCount:
- headerPinnableAttributes
- footerPinnableAttributes
- dealloc
- init
- description
- metrics
@end
