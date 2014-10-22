@interface AVFrameRateRange : NSObject
{
	id _internal;
}

+ minFrameDuration
+ includesFrameDuration:
+ minFrameRate
+ maxFrameRate
+ maxFrameDuration
+ initWithMinFrameRate:maxFrameRate:
+ includesFrameRate:
+ dealloc
+ isEqual:
+ description
- minFrameDuration
- includesFrameDuration:
- minFrameRate
- maxFrameRate
- maxFrameDuration
- initWithMinFrameRate:maxFrameRate:
- includesFrameRate:
- dealloc
- isEqual:
- description
@end
