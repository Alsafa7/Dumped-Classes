@interface NSNetworkSettings : NSObject
{
	id _internal;
}

+ _updateProxySettings
+ _listenForProxySettingChanges
+ _init
+ proxyDictionary
+ proxyPropertiesForURL:
+ isProxyNeededForURL:
+ setProxyPropertiesForURL:onStream:
+ connectedToInternet:
+ setProxyDictionary:
+ dealloc
+ init
- _updateProxySettings
- _listenForProxySettingChanges
- _init
- proxyDictionary
- proxyPropertiesForURL:
- isProxyNeededForURL:
- setProxyPropertiesForURL:onStream:
- connectedToInternet:
- setProxyDictionary:
- dealloc
- init
@end
