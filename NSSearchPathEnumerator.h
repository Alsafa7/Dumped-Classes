@interface NSSearchPathEnumerator : NSEnumerator
{
	long long state;
	usigned long long directory;
	usigned long long domainMask;
}

+ initWithDirectory:domains:
+ nextObject
- initWithDirectory:domains:
- nextObject
@end
