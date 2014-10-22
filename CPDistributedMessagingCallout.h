@interface CPDistributedMessagingCallout : NSObject
{
	id _target;
	SEL _selector;
	BOOL _returnsVoid;
	BOOL _returnsVoidIsValid;
}

@end
