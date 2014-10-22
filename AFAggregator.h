@interface AFAggregator : NSObject
{
	int _type;
	double _startTime;
	BOOL _hasActiveRequest;
	BOOL _sessionIsRetrying;
	BOOL _retryPrefersWWAN;
}

+ recordFailure:forConnectionType:
+ recordSuccessForConnectionType:isWarm:forTimeInterval:
+ recordSessionRetrySuccess
+ connectionDidFail
+ connectionDidDrop
+ beginSessionRetryPreferringWWAN:
+ startWaitingForSpeechResponse
+ speechResponseReceived
+ speechResponseFailure
+ hasActiveRequest
+ setHasActiveRequest:
+ connectionType
+ setConnectionType:
- recordFailure:forConnectionType:
- recordSuccessForConnectionType:isWarm:forTimeInterval:
- recordSessionRetrySuccess
- connectionDidFail
- connectionDidDrop
- beginSessionRetryPreferringWWAN:
- startWaitingForSpeechResponse
- speechResponseReceived
- speechResponseFailure
- hasActiveRequest
- setHasActiveRequest:
- connectionType
- setConnectionType:
@end
