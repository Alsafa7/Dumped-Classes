@interface CAValueFunction : NSObject
{
	id _string;
	pointer _impl;
}

+ _initWithName:
+ encodeWithCAMLWriter:
+ CA_copyRenderValue
+ outputCount
+ apply:result:parameterFunction:context:
+ apply:result:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ name
+ inputCount
- _initWithName:
- encodeWithCAMLWriter:
- CA_copyRenderValue
- outputCount
- apply:result:parameterFunction:context:
- apply:result:
- dealloc
- initWithCoder:
- encodeWithCoder:
- name
- inputCount
@end
