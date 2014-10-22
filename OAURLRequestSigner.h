@interface OAURLRequestSigner : NSObject
{
	id _credential;
	int _signatureMethod;
}

+ initWithCredential:
+ signedURLRequestWithRequest:applicationID:timestamp:
+ dealloc
+ signatureMethod
+ signatureMethodString
+ applyApplicationID:toRequest:containsMultiPartData:
+ oauthNonce
+ timestamp:
+ oauthParametersWithNonce:timeStamp:
+ signer
+ oauthAuthorizationHeaderWithSignature:nonce:timestamp:
+ setSignatureMethod:
+ signedURLRequestWithRequest:
- initWithCredential:
- signedURLRequestWithRequest:applicationID:timestamp:
- dealloc
- signatureMethod
- signatureMethodString
- applyApplicationID:toRequest:containsMultiPartData:
- oauthNonce
- timestamp:
- oauthParametersWithNonce:timeStamp:
- signer
- oauthAuthorizationHeaderWithSignature:nonce:timestamp:
- setSignatureMethod:
- signedURLRequestWithRequest:
@end
