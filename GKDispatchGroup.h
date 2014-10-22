@interface GKDispatchGroup : NSObject
{
	id _name;
	id _group;
	id _values;
	id _error;
	id result;
	int _sequence;
	BOOL _loggingEnabled;
	id _result;
}

+ _values
+ setError:
+ isLoggingEnabled
+ join:queue:block:
+ notifyOnQueue:block:
+ notifyOnMainQueueWithBlock:
+ dealloc
+ init
+ description
+ objectForKeyedSubscript:
+ setObject:forKeyedSubscript:
+ perform:
+ allValues
+ setGroup:
+ group
+ initWithName:
+ setResult:
+ result
+ wait
+ error
+ setLoggingEnabled:
- _values
- setError:
- isLoggingEnabled
- join:queue:block:
- notifyOnQueue:block:
- notifyOnMainQueueWithBlock:
- dealloc
- init
- description
- objectForKeyedSubscript:
- setObject:forKeyedSubscript:
- perform:
- allValues
- setGroup:
- group
- initWithName:
- setResult:
- result
- wait
- error
- setLoggingEnabled:
@end
