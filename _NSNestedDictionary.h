@interface _NSNestedDictionary : NSMutableDictionary
{
	id _locals;
	id _bindings;
}

+ _recursiveAllKeys
+ _recursiveAllValues
+ count
+ removeObjectForKey:
+ objectEnumerator
+ keyEnumerator
+ objectForKey:
+ setObject:forKey:
- _recursiveAllKeys
- _recursiveAllValues
- count
- removeObjectForKey:
- objectEnumerator
- keyEnumerator
- objectForKey:
- setObject:forKey:
@end
