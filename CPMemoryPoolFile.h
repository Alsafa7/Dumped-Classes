@interface CPMemoryPoolFile : NSObject
{
	struct _mutex;
	int _fd;
	char *_slots;
	usigned long long _slotCount;
	usigned long long _slotLength;
	pointer _usedSlots;
	pointer _deallocator;
}

+ dealloc
+ initWithLabel:slotCount:slotLength:
+ nextSlotWithBytes:length:
+ returnSlot:
- dealloc
- initWithLabel:slotCount:slotLength:
- nextSlotWithBytes:length:
- returnSlot:
@end
