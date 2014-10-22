@interface NSMethodSignature : NSObject
{
	pointer _private;
	Array _reserved;
}

+ _cheapTypeString:maxLength:
+ _frameDescriptor
+ _argInfo:
+ _typeString
+ _signatureForBlockAtArgumentIndex:
+ _classForObjectAtArgumentIndex:
+ _protocolsForObjectAtArgumentIndex:
+ isOneway
+ dealloc
+ init
+ isEqual:
+ hash
+ debugDescription
+ getArgumentTypeAtIndex:
+ numberOfArguments
+ methodReturnLength
+ methodReturnType
+ frameLength
+ finalize
- _cheapTypeString:maxLength:
- _frameDescriptor
- _argInfo:
- _typeString
- _signatureForBlockAtArgumentIndex:
- _classForObjectAtArgumentIndex:
- _protocolsForObjectAtArgumentIndex:
- isOneway
- dealloc
- init
- isEqual:
- hash
- debugDescription
- getArgumentTypeAtIndex:
- numberOfArguments
- methodReturnLength
- methodReturnType
- frameLength
- finalize
@end
