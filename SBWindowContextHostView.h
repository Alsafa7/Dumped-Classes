@interface SBWindowContextHostView : UIView
{
	id _screen;
	id _hostManager;
	id _contextManager;
	id _hiddenContexts;
	id _contexts;
	id _layerHosts;
}

+ initWithScreen:jailBehavior:
+ _adjustLayerFrameAndTransform:
+ isHosting
+ windowContextManager:didRepositionContext:from:to:forScreen:
+ setContextManager:
+ hiddenContexts
+ setHiddenContexts:
+ hostManager
+ setHostManager:
+ contextManager
+ dealloc
+ hitTest:withEvent:
+ window
+ init
+ description
+ screen
+ hasContent
- initWithScreen:jailBehavior:
- _adjustLayerFrameAndTransform:
- isHosting
- windowContextManager:didRepositionContext:from:to:forScreen:
- setContextManager:
- hiddenContexts
- setHiddenContexts:
- hostManager
- setHostManager:
- contextManager
- dealloc
- hitTest:withEvent:
- window
- init
- description
- screen
- hasContent
@end
