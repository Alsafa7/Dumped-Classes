@interface BBSettingsGateway : NSObject
{
	id _overrideStatusChangeHandler;
	id _activeOverrideTypesChangedHandler;
	id _overrideStateChangeHandler;
	id _connection;
	id _queue;
}

@end
