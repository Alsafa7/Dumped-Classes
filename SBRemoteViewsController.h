@interface SBRemoteViewsController : NSObject
{
	id _registeredRemoteViewInfos;
	id _unregisteredRemoteViewInfos;
}

+ unregisterRemoteViewsForApplication:
+ registerRemoteContextID:forIdentifier:opaque:size:application:
+ unregisterRemoteIdentifier:application:
+ unregisterProxyRemoteView:
+ _sequesterProxyRemoteView:
+ _newProxyRemoteViewForIdentifier:
+ proxyRemoteViewForIdentifier:
+ dealloc
+ init
- unregisterRemoteViewsForApplication:
- registerRemoteContextID:forIdentifier:opaque:size:application:
- unregisterRemoteIdentifier:application:
- unregisterProxyRemoteView:
- _sequesterProxyRemoteView:
- _newProxyRemoteViewForIdentifier:
- proxyRemoteViewForIdentifier:
- dealloc
- init
@end
