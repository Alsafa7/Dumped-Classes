@interface AASigningSession : NSObject
{
	pointer _context;
	id _certURL;
	id _sessionURL;
	int _error;
}

+ initWithCertURL:sessionURL:
+ signatureForData:
+ dealloc
+ establishSession
+ error
+ .cxx_destruct
- initWithCertURL:sessionURL:
- signatureForData:
- dealloc
- establishSession
- error
- .cxx_destruct
@end
