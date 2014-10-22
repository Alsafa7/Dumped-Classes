@interface IMIDStatusController : NSObject
{
	id _servicesRegistered;
}

+ dealloc
+ init
+ _statusForCanonicalizedID:onService:
+ requestStatusForID:onAccount:
+ __statusForID:onService:isCanonicalized:
+ _idStatusForID:onService:
+ _processIDStatusResponseForURI:resultStatus:forService:
+ _requestStatusForID:onService:onAccount:
+ _idStatusForID:onAccount:
+ requestStatusForID:onService:
+ statusForID:onService:
+ _servicesRegistered
+ set_servicesRegistered:
- dealloc
- init
- _statusForCanonicalizedID:onService:
- requestStatusForID:onAccount:
- __statusForID:onService:isCanonicalized:
- _idStatusForID:onService:
- _processIDStatusResponseForURI:resultStatus:forService:
- _requestStatusForID:onService:onAccount:
- _idStatusForID:onAccount:
- requestStatusForID:onService:
- statusForID:onService:
- _servicesRegistered
- set_servicesRegistered:
@end
