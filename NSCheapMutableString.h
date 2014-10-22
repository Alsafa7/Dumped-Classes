@interface NSCheapMutableString : NSMutableString
{
	union contents;
	struct flags;
	usigned long long numCharacters;
	pointer _reserved;
}

@end
