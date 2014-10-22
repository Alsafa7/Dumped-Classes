@interface SSProtocolConditionalContext : NSObject
{
	id _itemLookupBlock;
	id _platformName;
	id _systemVersion;
}

+ dealloc
+ systemVersion
+ copyWithZone:
+ itemLookupBlock
+ platformName
+ setPlatformName:
+ setSystemVersion:
+ setItemLookupBlock:
- dealloc
- systemVersion
- copyWithZone:
- itemLookupBlock
- platformName
- setPlatformName:
- setSystemVersion:
- setItemLookupBlock:
@end
