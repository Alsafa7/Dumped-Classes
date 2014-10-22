@interface SBStarkBackgroundProviderManager : NSObject
{
	id _providersByPriority;
	id _providersByServiceName;
	id _observers;
}

+ addBackgroundProvider:
+ removeBackgroundProviderWithServiceName:
+ activeProvider
+ _notifyAdd:
+ _notifyRemove:
+ removeBackgroundProvider:
+ dealloc
+ init
+ removeObserver:
+ addObserver:
- addBackgroundProvider:
- removeBackgroundProviderWithServiceName:
- activeProvider
- _notifyAdd:
- _notifyRemove:
- removeBackgroundProvider:
- dealloc
- init
- removeObserver:
- addObserver:
@end
