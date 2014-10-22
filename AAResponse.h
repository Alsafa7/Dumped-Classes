@interface AAResponse : NSObject
{
	id _responseDictionary;
	id _httpResponse;
	id _error;
}

+ setError:
+ protocolVersion
+ responseDictionary
+ initWithHTTPResponse:data:
+ initWithHTTPResponse:data:bodyIsPlist:
+ _deviceSpecificLocalizedString:
+ _parsePlistResponse:
+ _stringWithDescriptionForResponseError:
+ error
+ .cxx_destruct
- setError:
- protocolVersion
- responseDictionary
- initWithHTTPResponse:data:
- initWithHTTPResponse:data:bodyIsPlist:
- _deviceSpecificLocalizedString:
- _parsePlistResponse:
- _stringWithDescriptionForResponseError:
- error
- .cxx_destruct
@end
