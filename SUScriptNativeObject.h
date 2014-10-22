@interface SUScriptNativeObject : NSObject
{
	id _lock;
	id _nativeObject;
	id _scriptObject;
	BOOL _weak;
}

+ dealloc
+ init
+ lock
+ unlock
+ object
+ setObject:
+ destroyNativeObject
+ setupNativeObject
+ scriptObject
+ setScriptObject:
+ _nativeObjectBecameWeakNotification:
- dealloc
- init
- lock
- unlock
- object
- setObject:
- destroyNativeObject
- setupNativeObject
- scriptObject
- setScriptObject:
- _nativeObjectBecameWeakNotification:
@end
