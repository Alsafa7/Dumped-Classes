@interface NSBigMutableString : NSMutableString
{
	struct flags;
	usigned long long length;
	union contents;
}

@end
