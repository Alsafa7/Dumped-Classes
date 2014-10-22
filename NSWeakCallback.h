@interface NSWeakCallback : NSObject
{
	id _callback_next;
	pointer _callback_function;
	id _callback_target;
}

@end
