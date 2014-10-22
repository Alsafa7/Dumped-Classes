@interface SUScriptPopOverNativeObject : SUScriptNativeObject
{
	BOOL _redisplayAfterRotation;
	id _sourceButtonItem;
	id _sourceDOMElement;
}

+ dealloc
+ setSourceButtonItem:
+ setSourceDOMElement:
+ destroyNativeObject
+ _windowDidRotateNotification:
+ _windowWillRotateNotification:
+ setupNativeObject
+ sourceDOMElement
+ _isAffectedByWindowNotification:
+ sourceButtonItem
- dealloc
- setSourceButtonItem:
- setSourceDOMElement:
- destroyNativeObject
- _windowDidRotateNotification:
- _windowWillRotateNotification:
- setupNativeObject
- sourceDOMElement
- _isAffectedByWindowNotification:
- sourceButtonItem
@end
