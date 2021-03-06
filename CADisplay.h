@interface CADisplay : NSObject
{
	pointer _impl;
}

+ isCloned
+ _initWithDisplay:
+ colorMode
+ setColorMode:
+ allowsVirtualModes
+ setAllowsVirtualModes:
+ safeBounds
+ bounds
+ description
+ tag
+ name
+ currentMode
+ update
+ availableModes
+ isOverscanned
+ overscanAdjustment
+ setOverscanAdjustment:
+ overscanAmount
+ refreshRate
+ isCloningSupported
+ preferredMode
+ setCurrentMode:
+ displayId
+ isExternal
+ uniqueId
+ isSupported
+ _invalidate
+ deviceName
- isCloned
- _initWithDisplay:
- colorMode
- setColorMode:
- allowsVirtualModes
- setAllowsVirtualModes:
- safeBounds
- bounds
- description
- tag
- name
- currentMode
- update
- availableModes
- isOverscanned
- overscanAdjustment
- setOverscanAdjustment:
- overscanAmount
- refreshRate
- isCloningSupported
- preferredMode
- setCurrentMode:
- displayId
- isExternal
- uniqueId
- isSupported
- _invalidate
- deviceName
@end
