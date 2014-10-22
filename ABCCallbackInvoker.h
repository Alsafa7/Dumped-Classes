@interface ABCCallbackInvoker : NSObject
{
	pointer cb;
	pointer ab;
	pointer context;
}

+ invoke
- invoke
@end
