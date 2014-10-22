@interface CPLRUDictionaryNode : NSObject
{
	id _key;
	id _object;
	id next;
	id prev;
}

+ dealloc
+ object
+ setObject:
+ key
+ initWithKey:object:
- dealloc
- object
- setObject:
- key
- initWithKey:object:
@end
