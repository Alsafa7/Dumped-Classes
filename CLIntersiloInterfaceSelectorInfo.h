@interface CLIntersiloInterfaceSelectorInfo : NSObject
{
	int _numArguments;
	int _replyBlockIndex;
	int _returnAddressIndex;
	int _returnValueSize;
	SEL _sel;
	id _sig;
	id _str;
}

+ str
+ initWithSelector:andMethodSignature:
+ sel
+ numArguments
+ replyBlockIndex
+ returnAddressIndex
+ returnValueSize
+ sig
+ description
+ .cxx_destruct
- str
- initWithSelector:andMethodSignature:
- sel
- numArguments
- replyBlockIndex
- returnAddressIndex
- returnValueSize
- sig
- description
- .cxx_destruct
@end
