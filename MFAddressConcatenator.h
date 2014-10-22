@interface MFAddressConcatenator : NSObject
{
	id _andNMoreFormat;
	id _andNMoreNoEllipsisFormat;
	id _oneAddressFormat;
	id _nAddressesFormat;
	id _truncatedAddressFormat;
}

+ setAndNMoreFormat:
+ setAndNMoreNoEllipsisFormat:
+ setNAddressesFormat:
+ setOneAddressFormat:
+ setTruncatedAddressFormat:
+ getCommaSeparatedAddressList:andListSuffix:withAddressCount:prefixForAddressAtIndex:stringForAddressAtIndex:lengthValidationBlock:
+ commaSeparatedAddressListWithAddressCount:prefixForAddressAtIndex:stringForAddressAtIndex:lengthValidationBlock:
+ andNMoreFormat
+ andNMoreNoEllipsisFormat
+ oneAddressFormat
+ nAddressesFormat
+ truncatedAddressFormat
+ dealloc
- setAndNMoreFormat:
- setAndNMoreNoEllipsisFormat:
- setNAddressesFormat:
- setOneAddressFormat:
- setTruncatedAddressFormat:
- getCommaSeparatedAddressList:andListSuffix:withAddressCount:prefixForAddressAtIndex:stringForAddressAtIndex:lengthValidationBlock:
- commaSeparatedAddressListWithAddressCount:prefixForAddressAtIndex:stringForAddressAtIndex:lengthValidationBlock:
- andNMoreFormat
- andNMoreNoEllipsisFormat
- oneAddressFormat
- nAddressesFormat
- truncatedAddressFormat
- dealloc
@end
