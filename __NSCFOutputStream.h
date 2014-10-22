@interface __NSCFOutputStream : NSOutputStream
{

}

+ propertyForKey:
+ setProperty:forKey:
+ scheduleInRunLoop:forMode:
+ removeFromRunLoop:forMode:
+ streamStatus
+ streamError
+ _setCFClientFlags:callback:context:
+ _scheduleInCFRunLoop:forMode:
+ _unscheduleFromCFRunLoop:forMode:
+ initWithURL:append:
+ initToMemory
+ initToBuffer:capacity:
+ write:maxLength:
+ hasSpaceAvailable
+ release
+ retain
+ setDelegate:
+ isEqual:
+ hash
+ retainCount
+ delegate
+ _tryRetain
+ _isDeallocating
+ close
+ initToFileAtPath:append:
+ finalize
+ open
- propertyForKey:
- setProperty:forKey:
- scheduleInRunLoop:forMode:
- removeFromRunLoop:forMode:
- streamStatus
- streamError
- _setCFClientFlags:callback:context:
- _scheduleInCFRunLoop:forMode:
- _unscheduleFromCFRunLoop:forMode:
- initWithURL:append:
- initToMemory
- initToBuffer:capacity:
- write:maxLength:
- hasSpaceAvailable
- release
- retain
- setDelegate:
- isEqual:
- hash
- retainCount
- delegate
- _tryRetain
- _isDeallocating
- close
- initToFileAtPath:append:
- finalize
- open
@end
