@interface MBStateInfo : NSObject
{
	int _state;
	float _progress;
	usigned long long _estimatedTimeRemaining;
	id _error;
	id _date;
}

+ setError:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ description
+ state
+ setState:
+ date
+ copyWithZone:
+ setProgress:
+ dictionaryRepresentation
+ progress
+ initWithState:progress:estimatedTimeRemaining:error:
+ estimatedTimeRemaining
+ error
+ setEstimatedTimeRemaining:
+ initWithDictionaryRepresentation:
- setError:
- dealloc
- initWithCoder:
- encodeWithCoder:
- description
- state
- setState:
- date
- copyWithZone:
- setProgress:
- dictionaryRepresentation
- progress
- initWithState:progress:estimatedTimeRemaining:error:
- estimatedTimeRemaining
- error
- setEstimatedTimeRemaining:
- initWithDictionaryRepresentation:
@end
