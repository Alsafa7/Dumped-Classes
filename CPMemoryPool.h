@interface CPMemoryPool : NSObject
{
	struct _lock;
	id _files;
	char *_label;
	usigned long long _slotLength;
}

+ dealloc
+ nextSlotWithBytes:length:
+ initWithLabel:slotLength:
+ slotLength
- dealloc
- nextSlotWithBytes:length:
- initWithLabel:slotLength:
- slotLength
@end
