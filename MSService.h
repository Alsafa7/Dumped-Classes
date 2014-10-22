@interface MSService : NSObject
{
	int _canceled;
	id _connectionQueue;
	id _replyQueue;
	id _connection;
	id _responseListener;
	id _responseHandler;
}

+ isCanceled
+ dealloc
+ init
+ cancel
+ start
+ _connection
+ stop
+ setupResponseConnectionOnQueue:
+ _callServicesMethod:arguments:callback:
+ responseConnection:handleError:
+ responseConnection:handleResponse:
+ _unitTestsAreEnabled
+ _generateUnitTestReplyForMethod:arg:error:
+ _generateUnitTestResponsesForResultArray:
+ _handleMessageSendFailure:message:messageIndex:context:
+ _createServiceOnQueue:
+ _simulateServicesMethod:arguments:callback:
+ _registerConnection:onQueue:
+ _createMessageForService:arguments:index:
- isCanceled
- dealloc
- init
- cancel
- start
- _connection
- stop
- setupResponseConnectionOnQueue:
- _callServicesMethod:arguments:callback:
- responseConnection:handleError:
- responseConnection:handleResponse:
- _unitTestsAreEnabled
- _generateUnitTestReplyForMethod:arg:error:
- _generateUnitTestResponsesForResultArray:
- _handleMessageSendFailure:message:messageIndex:context:
- _createServiceOnQueue:
- _simulateServicesMethod:arguments:callback:
- _registerConnection:onQueue:
- _createMessageForService:arguments:index:
@end
