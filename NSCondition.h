@interface NSCondition : NSObject
{
	pointer _priv;
}

+ dealloc
+ init
+ description
+ setName:
+ name
+ lock
+ unlock
+ signal
+ waitUntilDate:
+ wait
+ broadcast
+ finalize
- dealloc
- init
- description
- setName:
- name
- lock
- unlock
- signal
- waitUntilDate:
- wait
- broadcast
- finalize
@end
