@interface UIKBCacheToken_Key : UIKBCacheToken
{
	union _style;
	id _cacheDisplayString;
	int _displayTypeHint;
	int _displayRowHint;
	struct _size;
	int _state;
	int _clipCorners;
	BOOL _usesInsets;
	struct _displayInsets;
}

+ dealloc
+ size
+ string
+ setSize:
+ hasKey
+ stringForRenderFlags:lightKeyboard:
+ rowHint
+ setRowHint:
+ displayHint
+ setDisplayHint:
+ _initWithKey:style:displayInsets:
+ _stringWithAdditionalValues:
- dealloc
- size
- string
- setSize:
- hasKey
- stringForRenderFlags:lightKeyboard:
- rowHint
- setRowHint:
- displayHint
- setDisplayHint:
- _initWithKey:style:displayInsets:
- _stringWithAdditionalValues:
@end
