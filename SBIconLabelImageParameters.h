@interface SBIconLabelImageParameters : NSObject
{
	id _font;
	id _text;
	BOOL _containsNonLatinLikeCharacters;
	BOOL _containsEmoji;
	BOOL _canEllipsize;
	struct _maxSize;
	long long _style;
}

+ colorspaceIsGrayscale
+ canEllipsize
+ containsNonLatinLikeCharacters
+ containsEmoji
+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ maxSize
+ style
+ text
+ font
+ mutableCopyWithZone:
+ initWithParameters:
- colorspaceIsGrayscale
- canEllipsize
- containsNonLatinLikeCharacters
- containsEmoji
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- maxSize
- style
- text
- font
- mutableCopyWithZone:
- initWithParameters:
@end
