@interface SSAuthenticateResponse : NSObject
{
	id _authenticatedAccount;
	id _error;
	id _responseDictionary;
	long long _responseType;
}

+ _setError:
+ responseDictionary
+ dealloc
+ error
+ authenticateResponseType
+ authenticatedAccount
+ initWithXPCEncoding:
+ copyXPCEncoding
+ setAuthenticatedAccount:
+ setAuthenticateResponseType:
+ setResponseDictionary:
- _setError:
- responseDictionary
- dealloc
- error
- authenticateResponseType
- authenticatedAccount
- initWithXPCEncoding:
- copyXPCEncoding
- setAuthenticatedAccount:
- setAuthenticateResponseType:
- setResponseDictionary:
@end
