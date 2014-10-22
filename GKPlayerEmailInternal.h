@interface GKPlayerEmailInternal : GKInternalRepresentation
{
	id _address;
	id _addressSHA1;
	id _addressPrefix;
	BOOL _verified;
}

+ setAddress:
+ addressSHA1
+ setAddressSHA1:
+ addressPrefix
+ setAddressPrefix:
+ verified
+ setVerified:
+ dealloc
+ isEqual:
+ hash
+ address
- setAddress:
- addressSHA1
- setAddressSHA1:
- addressPrefix
- setAddressPrefix:
- verified
- setVerified:
- dealloc
- isEqual:
- hash
- address
@end
