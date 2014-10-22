@interface XPCDetailedSignature : NSObject
{
	usigned long long _argumentCount;
	pointer _classes;
}

+ dealloc
+ argumentClassAtIndex:
+ initWithArgumentCount:
+ setClass:forArgumentAtIndex:
- dealloc
- argumentClassAtIndex:
- initWithArgumentCount:
- setClass:forArgumentAtIndex:
@end
