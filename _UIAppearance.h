@interface _UIAppearance : NSObject
{
	id _containerList;
	id _appearanceInvocations;
	id _invocationSources;
	id _resettableInvocations;
	id _customizableClassInfo;
}

+ dealloc
+ description
+ methodSignatureForSelector:
+ forwardInvocation:
+ _resettableInvocationsCreateIfNecessary
+ updateResettableSelectorsWithInvocation:removeSelector:
+ _appearanceInvocations
+ _resettableInvocations
+ _setResettableInvocations:
+ _customizableClassInfo
- dealloc
- description
- methodSignatureForSelector:
- forwardInvocation:
- _resettableInvocationsCreateIfNecessary
- updateResettableSelectorsWithInvocation:removeSelector:
- _appearanceInvocations
- _resettableInvocations
- _setResettableInvocations:
- _customizableClassInfo
@end
