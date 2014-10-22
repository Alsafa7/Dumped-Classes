@interface RenderedHandViewFactory : NSObject
{
	id _resourcesBundle;
	id _imagePath;
	struct _offset;
	struct _scale;
	pointer _page;
	struct _viewSize;
	BOOL _allowCaching;
	id _angleCache;
	usigned long long _registeredClientsCount;
}

+ dealloc
+ key
+ flushCache
+ initWithBundle:imagePath:offset:scale:allowCaching:
+ registeredClientsCount
+ setRegisteredClientsCount:
+ renderImageForAngle:viewSize:
+ imageForAngle:viewSize:
+ allowCaching
- dealloc
- key
- flushCache
- initWithBundle:imagePath:offset:scale:allowCaching:
- registeredClientsCount
- setRegisteredClientsCount:
- renderImageForAngle:viewSize:
- imageForAngle:viewSize:
- allowCaching
@end
