@interface AVConferenceXPCClient : NSObject
{
	id connection;
	id registeredBlocks;
	id replyQueue;
	id connectionQueue;
}

+ dealloc
+ init
+ connection
+ registerBlockForService:block:
+ sendMessageSync:arguments:
+ sendMessageAsync:arguments:reply:
+ deregisterFromService:
+ sendMessageAsync:arguments:
+ createServerDiedDictionary
+ closeConnectionToServer
+ createNSDictionaryFromXPCDictionary:
+ createNSErrorFromNSDictionary:
+ sendMessageAsync:arguments:reply:queue:
+ createConnectionToServer
+ createXPCDictionaryFromNSDictionary:
+ sendMessageSync:arguments:timeout:
+ createTimeoutDictionary
+ registerBlockForService:block:queue:
+ createNSDictionaryFromNSError:
+ registeredBlocks
- dealloc
- init
- connection
- registerBlockForService:block:
- sendMessageSync:arguments:
- sendMessageAsync:arguments:reply:
- deregisterFromService:
- sendMessageAsync:arguments:
- createServerDiedDictionary
- closeConnectionToServer
- createNSDictionaryFromXPCDictionary:
- createNSErrorFromNSDictionary:
- sendMessageAsync:arguments:reply:queue:
- createConnectionToServer
- createXPCDictionaryFromNSDictionary:
- sendMessageSync:arguments:timeout:
- createTimeoutDictionary
- registerBlockForService:block:queue:
- createNSDictionaryFromNSError:
- registeredBlocks
@end
