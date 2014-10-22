@interface _PFEncodedData : NSData
{
	id _aData;
	unsigned int _byteCount;
	unsigned int _reserved;
}

+ classForArchiver
+ subdataWithRange:
+ privateCopy
+ rangeOfData:options:range:
+ release
+ retain
+ initWithCoder:
+ init
+ retainCount
+ description
+ length
+ writeToFile:options:error:
+ writeToFile:atomically:
+ writeToURL:options:error:
+ writeToURL:atomically:
+ mutableCopy
+ bytes
+ copyWithZone:
+ getBytes:length:
+ _tryRetain
+ _isDeallocating
+ mutableCopyWithZone:
+ getBytes:range:
+ isEqualToData:
- classForArchiver
- subdataWithRange:
- privateCopy
- rangeOfData:options:range:
- release
- retain
- initWithCoder:
- init
- retainCount
- description
- length
- writeToFile:options:error:
- writeToFile:atomically:
- writeToURL:options:error:
- writeToURL:atomically:
- mutableCopy
- bytes
- copyWithZone:
- getBytes:length:
- _tryRetain
- _isDeallocating
- mutableCopyWithZone:
- getBytes:range:
- isEqualToData:
@end
