@interface _NSDispatchData : NSData
{

}

+ subdataWithRange:
+ rangeOfData:options:range:
+ _isDispatchData
+ enumerateByteRangesUsingBlock:
+ _allowsDirectEncoding
+ _bytesIfCompact
+ initWithCoder:
+ encodeWithCoder:
+ hash
+ length
+ bytes
+ copyWithZone:
+ getBytes:length:
+ classForCoder
+ mutableCopyWithZone:
+ getBytes:range:
+ getBytes:
+ isEqualToData:
- subdataWithRange:
- rangeOfData:options:range:
- _isDispatchData
- enumerateByteRangesUsingBlock:
- _allowsDirectEncoding
- _bytesIfCompact
- initWithCoder:
- encodeWithCoder:
- hash
- length
- bytes
- copyWithZone:
- getBytes:length:
- classForCoder
- mutableCopyWithZone:
- getBytes:range:
- getBytes:
- isEqualToData:
@end
