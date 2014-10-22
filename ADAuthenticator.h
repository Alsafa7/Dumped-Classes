@interface ADAuthenticator : NSObject
{
	int _state;
	id _queue;
	pointer _nacContext;
	id _requestData;
	id _sessionInfo;
	double _duration;
}

+ initWithTargetQueue:
+ setSessionInfo:duration:
+ signedDataForData:
+ sessionInfoDuration
+ prepareWithCertificateData:completion:
+ _setNACContext:
+ _setRequestData:
+ _getSessionRequestForCertificate:completion:
+ _requestData
+ _signData:withSessionInfo:signedData:
+ _sessionInfo
+ requestData
+ dealloc
+ state
+ reset
+ _setSessionInfo:
+ .cxx_destruct
- initWithTargetQueue:
- setSessionInfo:duration:
- signedDataForData:
- sessionInfoDuration
- prepareWithCertificateData:completion:
- _setNACContext:
- _setRequestData:
- _getSessionRequestForCertificate:completion:
- _requestData
- _signData:withSessionInfo:signedData:
- _sessionInfo
- requestData
- dealloc
- state
- reset
- _setSessionInfo:
- .cxx_destruct
@end
