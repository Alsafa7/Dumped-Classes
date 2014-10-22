@interface SKUITextLayout : NSObject
{
	pointer _framesetter;
	BOOL _requiresTruncation;
	struct _size;
	pointer _textFrame;
	struct _truncatedSize;
}

+ dealloc
+ textSize
+ textFrame
+ initWithLayoutRequest:
+ requiresTruncation
+ truncatedSize
- dealloc
- textSize
- textFrame
- initWithLayoutRequest:
- requiresTruncation
- truncatedSize
@end
