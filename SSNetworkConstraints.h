@interface SSNetworkConstraints : NSObject
{
	id _dispatchQueue;
	id _sizeLimits;
}

+ sizeLimitForNetworkType:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ isEqual:
+ description
+ copyWithZone:
+ setSizeLimit:forNetworkType:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ _setSizeLimit:forNetworkType:
+ _sizeLimitForNetworkType:
+ _disableAllNetworkTypes
+ _copySizeLimits
+ setAllNetworkTypesDisabled
+ disableCellularNetworkTypes
+ hasSizeLimitForNetworkType:
+ setSizeLimitsWithStoreConstraintDictionary:
+ isAnyNetworkTypeEnabled
- sizeLimitForNetworkType:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- isEqual:
- description
- copyWithZone:
- setSizeLimit:forNetworkType:
- initWithXPCEncoding:
- copyXPCEncoding
- _setSizeLimit:forNetworkType:
- _sizeLimitForNetworkType:
- _disableAllNetworkTypes
- _copySizeLimits
- setAllNetworkTypesDisabled
- disableCellularNetworkTypes
- hasSizeLimitForNetworkType:
- setSizeLimitsWithStoreConstraintDictionary:
- isAnyNetworkTypeEnabled
@end
