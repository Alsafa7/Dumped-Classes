@interface SBPlatformController : NSObject
{
	id _currentConfigurationName;
	long long _defaultIconInfoOnce;
	id _defaultStarkIconState;
	id _defaultIconState;
	id _defaultIconStateDisplayIdentifiers;
	id _iconStateDisplayIdentifiersLock;
	id _iconStateDisplayIdentifiers;
	id _localizedDeviceName;
	BOOL _hasGasGauge;
	BOOL _supportsOpenGLES2;
	BOOL _internalInstall;
	BOOL _carrierInstall;
	BOOL _singleCoreDevice;
}

+ registerForIconVisibilityChanges
+ hasGasGauge
+ iconStateDisplayIdentifiers
+ localizedPlatformName
+ _loadDefaultIconInfoIfNecessary
+ _visibleIdentifiersChanged:
+ _currentConfigurationName
+ defaultIconState
+ defaultStarkIconState
+ defaultIconStateDisplayIdentifiers
+ supportsOpenGLES2
+ isSingleCoreDevice
+ isN90Like
+ dealloc
+ init
+ isCarrierInstall
+ isInternalInstall
- registerForIconVisibilityChanges
- hasGasGauge
- iconStateDisplayIdentifiers
- localizedPlatformName
- _loadDefaultIconInfoIfNecessary
- _visibleIdentifiersChanged:
- _currentConfigurationName
- defaultIconState
- defaultStarkIconState
- defaultIconStateDisplayIdentifiers
- supportsOpenGLES2
- isSingleCoreDevice
- isN90Like
- dealloc
- init
- isCarrierInstall
- isInternalInstall
@end
