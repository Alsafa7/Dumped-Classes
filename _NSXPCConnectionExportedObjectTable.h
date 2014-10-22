@interface _NSXPCConnectionExportedObjectTable : NSObject
{
	id _lock;
	pointer _proxyNumberToObject;
	pointer _objectToProxyNumber;
	usigned long long _next;
	BOOL _valid;
}

+ exportedObjectForProxyNumber:
+ interfaceForProxyNumber:
+ proxyNumberForExportedObject:interface:
+ setExportedObject:forProxyNumber:
+ setInterface:forProxyNumber:
+ releaseExportedObject:
+ dealloc
+ init
+ invalidate
+ finalize
- exportedObjectForProxyNumber:
- interfaceForProxyNumber:
- proxyNumberForExportedObject:interface:
- setExportedObject:forProxyNumber:
- setInterface:forProxyNumber:
- releaseExportedObject:
- dealloc
- init
- invalidate
- finalize
@end
