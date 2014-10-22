@interface IDSIDQueryController : NSObject
{
	id _internal;
}

+ requestIDStatusForDestinations:service:listenerID:queue:completionBlock:
+ dealloc
+ init
+ addDelegate:queue:
+ refreshIDStatusForDestinations:service:listenerID:queue:completionBlock:
+ currentIDStatusForDestinations:service:listenerID:queue:completionBlock:
+ removeDelegate:forService:listenerID:
+ requestIDStatusForDestination:service:listenerID:queue:completionBlock:
+ _warmupQueryCacheForService:
+ _flushQueryCacheForService:
+ addDelegate:forService:listenerID:queue:
+ _hasCacheForService:
+ _currentCachedIDStatusForDestination:service:listenerID:
+ currentIDStatusForDestination:service:listenerID:queue:completionBlock:
+ refreshIDStatusForDestination:service:listenerID:queue:completionBlock:
+ addListenerID:forService:
+ removeListenerID:forService:
+ removeDelegate:
- requestIDStatusForDestinations:service:listenerID:queue:completionBlock:
- dealloc
- init
- addDelegate:queue:
- refreshIDStatusForDestinations:service:listenerID:queue:completionBlock:
- currentIDStatusForDestinations:service:listenerID:queue:completionBlock:
- removeDelegate:forService:listenerID:
- requestIDStatusForDestination:service:listenerID:queue:completionBlock:
- _warmupQueryCacheForService:
- _flushQueryCacheForService:
- addDelegate:forService:listenerID:queue:
- _hasCacheForService:
- _currentCachedIDStatusForDestination:service:listenerID:
- currentIDStatusForDestination:service:listenerID:queue:completionBlock:
- refreshIDStatusForDestination:service:listenerID:queue:completionBlock:
- addListenerID:forService:
- removeListenerID:forService:
- removeDelegate:
@end
