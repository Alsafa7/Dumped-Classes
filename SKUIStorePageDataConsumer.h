@interface SKUIStorePageDataConsumer : SSVURLDataConsumer
{
	Class _storePageClass;
}

+ init
+ storePageClass
+ _groupingPageComponentsForDictionary:items:
+ _roomComponentsForDictionary:items:
+ _multiRoomComponentsForDictionary:items:
+ _chartPageComponentsForDictionary:items:
+ _artistPageComponentsForDictionary:items:
+ _bannerRoomComponentsForDictionary:items:
+ _customPageComponentsForDictionary:items:
+ _newPageComponentContextWithDictionary:
+ _newCustomPageComponentForBlockType:context:
+ _newFeaturedContentComponentForKind:context:
+ setStorePageClass:
+ objectForData:response:error:
+ storePageWithDictionary:
- init
- storePageClass
- _groupingPageComponentsForDictionary:items:
- _roomComponentsForDictionary:items:
- _multiRoomComponentsForDictionary:items:
- _chartPageComponentsForDictionary:items:
- _artistPageComponentsForDictionary:items:
- _bannerRoomComponentsForDictionary:items:
- _customPageComponentsForDictionary:items:
- _newPageComponentContextWithDictionary:
- _newCustomPageComponentForBlockType:context:
- _newFeaturedContentComponentForKind:context:
- setStorePageClass:
- objectForData:response:error:
- storePageWithDictionary:
@end
