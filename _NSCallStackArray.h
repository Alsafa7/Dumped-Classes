@interface _NSCallStackArray : NSArray
{
	pointer _frames;
	usigned long long _cnt;
	usigned long long _ignore;
	pointer _pcstrs;
	BOOL _wantSyms;
}

+ descriptionWithLocale:indent:
+ dealloc
+ count
+ objectAtIndex:
+ finalize
- descriptionWithLocale:indent:
- dealloc
- count
- objectAtIndex:
- finalize
@end
