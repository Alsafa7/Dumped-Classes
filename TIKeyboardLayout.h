@interface TIKeyboardLayout : NSObject
{
	usigned long long _count;
	pointer _frames;
	usigned long long _framesCapacity;
	char *_strings;
	usigned long long _stringsSize;
	usigned long long _stringsCapacity;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ initWithCapacity:
+ addKeyWithString:frame:
+ ensureFrameCapacity:
+ ensureStringCapacity:
+ enumerateKeysUsingBlock:
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- initWithCapacity:
- addKeyWithString:frame:
- ensureFrameCapacity:
- ensureStringCapacity:
- enumerateKeysUsingBlock:
@end
