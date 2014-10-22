@interface SKUIPageComponentContext : NSObject
{
	id _componentDictionary;
	id _items;
	long long _layoutStyle;
	double _pageGenerationTime;
	id _unavailableItems;
}

+ layoutStyle
+ setLayoutStyle:
+ init
+ copyWithZone:
+ items
+ setItems:
+ componentDictionary
+ pageGenerationTime
+ isUnavailableItemIdentifier:
+ itemForItemIdentifier:
+ setUnavailableItemIdentifiers:
+ .cxx_destruct
+ setComponentDictionary:
- layoutStyle
- setLayoutStyle:
- init
- copyWithZone:
- items
- setItems:
- componentDictionary
- pageGenerationTime
- isUnavailableItemIdentifier:
- itemForItemIdentifier:
- setUnavailableItemIdentifiers:
- .cxx_destruct
- setComponentDictionary:
@end
