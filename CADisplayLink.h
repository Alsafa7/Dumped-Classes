@interface CADisplayLink : NSObject
{
	pointer _impl;
}

+ userInfo
+ setUserInfo:
+ display
+ removeFromRunLoop:forMode:
+ isPaused
+ _initWithDisplayLinkItem:
+ dealloc
+ timestamp
+ duration
+ invalidate
+ setFrameInterval:
+ addToRunLoop:forMode:
+ frameInterval
+ setPaused:
- userInfo
- setUserInfo:
- display
- removeFromRunLoop:forMode:
- isPaused
- _initWithDisplayLinkItem:
- dealloc
- timestamp
- duration
- invalidate
- setFrameInterval:
- addToRunLoop:forMode:
- frameInterval
- setPaused:
@end
