@interface _CKDispatchQueueBlock : NSObject
{
	id _block;
	id _key;
	long long _priority;
	usigned long long _fifo;
}

+ dealloc
+ description
+ cancel
+ compare:
+ key
+ setKey:
+ priority
+ setPriority:
+ initWithBlock:key:priority:fifo:
+ fifo
+ setFIFO:
+ block
+ setBlock:
- dealloc
- description
- cancel
- compare:
- key
- setKey:
- priority
- setPriority:
- initWithBlock:key:priority:fifo:
- fifo
- setFIFO:
- block
- setBlock:
@end
