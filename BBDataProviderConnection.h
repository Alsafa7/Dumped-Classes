@interface BBDataProviderConnection : NSObject
{
	id _queue;
	id _clientQueue;
	id _serverConnection;
	id _serviceConnection;
	id _bundleID;
	id _serviceName;
	id _dataProvidersBySectionID;
	id _pendingConnectionsBySectionID;
}

@end
