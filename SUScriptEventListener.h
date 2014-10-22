@interface SUScriptEventListener : NSObject
{
	id _callback;
	id _lock;
	id _name;
	BOOL _useCapture;
}

+ callback
+ setCallback:
+ dealloc
+ init
+ setName:
+ name
+ setShouldUseCapture:
+ shouldUseCapture
- callback
- setCallback:
- dealloc
- init
- setName:
- name
- setShouldUseCapture:
- shouldUseCapture
@end
