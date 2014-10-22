@interface LSApplicationProxy : LSResourceProxy
{
	usigned long long _flags;
	usigned long long _bundleFlags;
	id _privateDocumentIconNames;
	id _privateDocumentTypeOwner;
	id _directionsModes;
	id _UIBackgroundModes;
	id _audioComponents;
	BOOL _profileValidated;
	BOOL _isInstalled;
	BOOL _isPlaceholder;
	BOOL _isAppUpdate;
	BOOL _isNewsstandApp;
	BOOL _isRestricted;
	BOOL _foundBackingBundle;
	id _applicationType;
	id _signerIdentity;
	id _entitlements;
	id _environmentVariables;
	id _groupContainers;
	id _machOUUIDs;
	id _vendorID;
	id _vendorName;
	id _bundleVersion;
	id _shortVersionString;
	id _bundleURL;
	usigned long long _installType;
}

+ _defaultStyleSize:
+ _iconVariantDefinitions:
+ _gkITunesMetadata
+ _gkIsInstalled
+ _gkIsAppleInternal
+ _gkDetachITunesMetadata
+ _gkBundle
+ _gkItemName
+ _gkIsGameCenterEnabled
+ _gkIsGameCenterEverEnabled
+ _gkAdamID
+ _gkExternalVersion
+ _gkPurchaseDate
+ _gkGameDescriptor
+ audioComponents
+ groupContainers
+ installType
+ applicationType
+ profileValidated
+ bundleVersion
+ setPrivateDocumentIconNames:
+ setPrivateDocumentIconAllowOverride:
+ setPrivateDocumentTypeOwner:
+ isAppUpdate
+ installProgress
+ _initWithApplicationIdentifier:bundleType:name:containerURL:resourcesDirectoryURL:iconsDictionary:iconFileNames:iconIsPrerendered:server:
+ privateDocumentIconAllowOverride
+ iconStyleDomain
+ resourcesDirectoryURL
+ privateDocumentIconNames
+ _createContext:andGetBundle:withData:
+ _plistValueForKey:
+ roleIdentifier
+ machOUUIDs
+ vendorID
+ vendorName
+ shortVersionString
+ signerIdentity
+ entitlements
+ environmentVariables
+ directionsModes
+ UIBackgroundModes
+ installProgressSync
+ privateDocumentTypeOwner
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ applicationIdentifier
+ bundleURL
+ iconDataForVariant:
+ localizedName
+ deviceIdentifierForVendor
+ containerURL
+ isPlaceholder
+ isNewsstandApp
+ foundBackingBundle
+ isInstalled
+ isRestricted
- _defaultStyleSize:
- _iconVariantDefinitions:
- _gkITunesMetadata
- _gkIsInstalled
- _gkIsAppleInternal
- _gkDetachITunesMetadata
- _gkBundle
- _gkItemName
- _gkIsGameCenterEnabled
- _gkIsGameCenterEverEnabled
- _gkAdamID
- _gkExternalVersion
- _gkPurchaseDate
- _gkGameDescriptor
- audioComponents
- groupContainers
- installType
- applicationType
- profileValidated
- bundleVersion
- setPrivateDocumentIconNames:
- setPrivateDocumentIconAllowOverride:
- setPrivateDocumentTypeOwner:
- isAppUpdate
- installProgress
- _initWithApplicationIdentifier:bundleType:name:containerURL:resourcesDirectoryURL:iconsDictionary:iconFileNames:iconIsPrerendered:server:
- privateDocumentIconAllowOverride
- iconStyleDomain
- resourcesDirectoryURL
- privateDocumentIconNames
- _createContext:andGetBundle:withData:
- _plistValueForKey:
- roleIdentifier
- machOUUIDs
- vendorID
- vendorName
- shortVersionString
- signerIdentity
- entitlements
- environmentVariables
- directionsModes
- UIBackgroundModes
- installProgressSync
- privateDocumentTypeOwner
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- applicationIdentifier
- bundleURL
- iconDataForVariant:
- localizedName
- deviceIdentifierForVendor
- containerURL
- isPlaceholder
- isNewsstandApp
- foundBackingBundle
- isInstalled
- isRestricted
@end
