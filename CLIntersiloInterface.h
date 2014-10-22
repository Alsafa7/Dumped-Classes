@interface CLIntersiloInterface : NSObject
{
	struct _selectors;
	id _protocol;
}

+ initWithProtocol:base:
+ getInfoForSelector:
+ conformsToProtocol:
+ debugDescription
+ .cxx_construct
+ protocol
+ .cxx_destruct
- initWithProtocol:base:
- getInfoForSelector:
- conformsToProtocol:
- debugDescription
- .cxx_construct
- protocol
- .cxx_destruct
@end
