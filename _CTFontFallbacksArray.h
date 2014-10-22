@interface _CTFontFallbacksArray : NSArray
{
	int _lock;
	_baseFont;
	usigned long long _count;
	id _cascade;
	id _fallbacks;
}

+ initWithBaseFont:cascade:
+ dealloc
+ countByEnumeratingWithState:objects:count:
+ count
+ objectAtIndex:
- initWithBaseFont:cascade:
- dealloc
- countByEnumeratingWithState:objects:count:
- count
- objectAtIndex:
@end
