@interface NSPort : NSObject
{

}

+ replacementObjectForCoder:
+ machPort
+ scheduleInRunLoop:forMode:
+ removeFromRunLoop:forMode:
+ initWithMachPort:
+ sendBeforeDate:components:from:reserved:
+ reservedSpaceLength
+ classForPortCoder
+ sendBeforeDate:msgid:components:from:reserved:
+ initWithCoder:
+ encodeWithCoder:
+ setDelegate:
+ delegate
+ invalidate
+ isValid
+ copyWithZone:
+ classForCoder
- replacementObjectForCoder:
- machPort
- scheduleInRunLoop:forMode:
- removeFromRunLoop:forMode:
- initWithMachPort:
- sendBeforeDate:components:from:reserved:
- reservedSpaceLength
- classForPortCoder
- sendBeforeDate:msgid:components:from:reserved:
- initWithCoder:
- encodeWithCoder:
- setDelegate:
- delegate
- invalidate
- isValid
- copyWithZone:
- classForCoder
@end
