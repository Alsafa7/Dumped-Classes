@interface ZZLicenseManager : NSObject
{
	id packageId;
	id plistFilename;
	BOOL licenseWasSuccessfullyChecked;
}

+ initWithPackageId:
+ checkLicenseCached
+ verifyLicenseCode:withUdid:
+ checkLicense
+ dictionaryWithUrlencodedString:
+ storeLicenseCode:forUdid:
+ signatureFromLicenseCode:
+ downloadLicense
+ udid
+ dealloc
- initWithPackageId:
- checkLicenseCached
- verifyLicenseCode:withUdid:
- checkLicense
- dictionaryWithUrlencodedString:
- storeLicenseCode:forUdid:
- signatureFromLicenseCode:
- downloadLicense
- udid
- dealloc
@end
