@interface GKSectionPresentationData : NSObject
{
	long long _section;
	double _headerMinY;
	double _headerMaxY;
	double _itemsMinY;
	double _itemsMaxY;
	double _footerMinY;
	double _footerMaxY;
	double _minY;
	double _maxY;
	double _showMoreMaxY;
	usigned long long _numHeaders;
	usigned long long _numFooters;
	usigned long long _numOverlays;
	usigned long long _numItems;
	usigned long long _overlayOffset;
}

+ maxY
+ initWithSection:presentationData:
+ showMoreMaxY
+ itemsMinY
+ updateWithLayoutAttributes:supplementaryLocation:
+ headerMinY
+ setHeaderMinY:
+ headerMaxY
+ setHeaderMaxY:
+ setItemsMinY:
+ itemsMaxY
+ setItemsMaxY:
+ footerMinY
+ setFooterMinY:
+ footerMaxY
+ setFooterMaxY:
+ minY
+ setMinY:
+ setMaxY:
+ setShowMoreMaxY:
+ numHeaders
+ setNumHeaders:
+ numFooters
+ setNumFooters:
+ numOverlays
+ setNumOverlays:
+ numItems
+ setNumItems:
+ overlayOffset
+ setOverlayOffset:
+ description
+ section
+ setSection:
- maxY
- initWithSection:presentationData:
- showMoreMaxY
- itemsMinY
- updateWithLayoutAttributes:supplementaryLocation:
- headerMinY
- setHeaderMinY:
- headerMaxY
- setHeaderMaxY:
- setItemsMinY:
- itemsMaxY
- setItemsMaxY:
- footerMinY
- setFooterMinY:
- footerMaxY
- setFooterMaxY:
- minY
- setMinY:
- setMaxY:
- setShowMoreMaxY:
- numHeaders
- setNumHeaders:
- numFooters
- setNumFooters:
- numOverlays
- setNumOverlays:
- numItems
- setNumItems:
- overlayOffset
- setOverlayOffset:
- description
- section
- setSection:
@end
