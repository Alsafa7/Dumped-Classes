@interface BKSProcessAssertion : NSObject
{
	id _queue;
	id _serverConnection;
	BOOL _valid;
	id _invalidationSignal;
	int _pid;
	id _bundleIdentifier;
	id _name;
	unsigned int _flags;
	unsigned int _reason;
	id _invalidationHandler;
	id _acquisitionHandler;
}

+ invalidationHandler
+ setValid:
+ setReason:
+ dealloc
+ init
+ invalidate
+ initWithPID:flags:reason:name:withHandler:
+ setName:
+ name
+ valid
+ setInvalidationHandler:
+ reason
+ queue_invalidate:
+ setAcquisitionHandler:
+ queue_registerWithServer
+ queue_acquireAssertion
+ queue_updateAssertion
+ queue_notifyAssertionAcquired:
+ initWithBundleIdentifier:flags:reason:name:withHandler:
+ acquisitionHandler
+ flags
+ setFlags:
- invalidationHandler
- setValid:
- setReason:
- dealloc
- init
- invalidate
- initWithPID:flags:reason:name:withHandler:
- setName:
- name
- valid
- setInvalidationHandler:
- reason
- queue_invalidate:
- setAcquisitionHandler:
- queue_registerWithServer
- queue_acquireAssertion
- queue_updateAssertion
- queue_notifyAssertionAcquired:
- initWithBundleIdentifier:flags:reason:name:withHandler:
- acquisitionHandler
- flags
- setFlags:
@end
