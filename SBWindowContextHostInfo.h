@interface SBWindowContextHostInfo : NSObject
{
	id _contextManager;
	id _screen;
	id _wrapperView;
	id _hiddenContexts;
	id _realContextHostViewChangedProperties;
	id _realContextHostViewOriginalProperties;
}

+ windowContextManager:didRepositionContext:from:to:forScreen:
+ hiddenContexts
+ wrapperView
+ initWithContextManager:hostManager:screen:jailBehavior:
+ realContextHostViewChangedProperties
+ realContextHostViewOriginalProperties
+ setRealContextHostViewChangedProperties:
+ setRealContextHostViewOriginalProperties:
+ dealloc
- windowContextManager:didRepositionContext:from:to:forScreen:
- hiddenContexts
- wrapperView
- initWithContextManager:hostManager:screen:jailBehavior:
- realContextHostViewChangedProperties
- realContextHostViewOriginalProperties
- setRealContextHostViewChangedProperties:
- setRealContextHostViewOriginalProperties:
- dealloc
@end
