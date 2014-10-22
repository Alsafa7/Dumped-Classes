@interface AXSettingsObjectDestructionHelper : NSObject
{
	pointer _listenerAddress;
	id _selectorKeys;
}

+ dealloc
+ initWithListenerAddress:
+ addSelectorKey:
- dealloc
- initWithListenerAddress:
- addSelectorKey:
@end
