@interface ISCertificate : NSObject
{
	pointer _trust;
}

+ dealloc
+ isValid
+ _invalidate
+ checkData:againstSignature:
+ checkData:againstAppleSignature:
+ setCertificateData:
- dealloc
- isValid
- _invalidate
- checkData:againstSignature:
- checkData:againstAppleSignature:
- setCertificateData:
@end
