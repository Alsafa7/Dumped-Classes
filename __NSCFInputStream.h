@interface __NSCFInputStream : NSInputStream
{

}

+ initWithFileAtPath:
+ propertyForKey:
+ setProperty:forKey:
+ scheduleInRunLoop:forMode:
+ removeFromRunLoop:forMode:
+ streamStatus
+ streamError
+ read:maxLength:
+ getBuffer:length:
+ hasBytesAvailable
+ _setCFClientFlags:callback:context:
+ _scheduleInCFRunLoop:forMode:
+ _unscheduleFromCFRunLoop:forMode:
+ release
+ retain
+ setDelegate:
+ isEqual:
+ hash
+ retainCount
+ delegate
+ initWithData:
+ _tryRetain
+ _isDeallocating
+ close
+ initWithURL:
+ finalize
+ open
- initWithFileAtPath:
- propertyForKey:
- setProperty:forKey:
- scheduleInRunLoop:forMode:
- removeFromRunLoop:forMode:
- streamStatus
- streamError
- read:maxLength:
- getBuffer:length:
- hasBytesAvailable
- _setCFClientFlags:callback:context:
- _scheduleInCFRunLoop:forMode:
- _unscheduleFromCFRunLoop:forMode:
- release
- retain
- setDelegate:
- isEqual:
- hash
- retainCount
- delegate
- initWithData:
- _tryRetain
- _isDeallocating
- close
- initWithURL:
- finalize
- open
@end
