@interface NSAttributeDictionaryEnumerator : NSEnumerator
{
	id dictionary;
	usigned long long nextElement;
}

+ initWithAttributeDictionary:
+ dealloc
+ nextObject
- initWithAttributeDictionary:
- dealloc
- nextObject
@end
