@interface SKUIItemState : NSObject
{
	id _downloadPhase;
	float _downloadProgress;
	long long _installedVersionIdentifier;
	id _itemIdentifier;
	usigned long long _state;
}

+ downloadProgress
+ downloadPhase
+ description
+ state
+ setState:
+ copyWithZone:
+ setDownloadPhase:
+ setDownloadProgress:
+ installedVersionIdentifier
+ setInstalledVersionIdentifier:
+ .cxx_destruct
+ itemIdentifier
+ setItemIdentifier:
- downloadProgress
- downloadPhase
- description
- state
- setState:
- copyWithZone:
- setDownloadPhase:
- setDownloadProgress:
- installedVersionIdentifier
- setInstalledVersionIdentifier:
- .cxx_destruct
- itemIdentifier
- setItemIdentifier:
@end
