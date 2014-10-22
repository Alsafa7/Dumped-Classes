@interface UIKBCacheToken : NSObject
{
	id _components;
	id _name;
	double _scale;
	int _emptyFields;
	long long _renderFlags;
}

+ dealloc
+ size
+ copyWithZone:
+ string
+ setSize:
+ setName:
+ name
+ stringForState:
+ emptyFields
+ hasKey
+ stringForKey:state:
+ stringForSplitState:
+ stringForRenderFlags:lightKeyboard:
+ renderFlags
+ initWithComponents:name:
+ _writeString:toStr:maxLen:
+ _writeNumber:toStr:
+ _writeEdgeInsets:toStr:maxLen:
+ _writeArray:toStr:maxLen:
+ stringForConstruction:
+ stringForComponentArray:additionalValues:
+ initWithName:
+ rowHint
+ setRowHint:
+ displayHint
+ setDisplayHint:
+ setEmptyFields:
+ setRenderFlags:
- dealloc
- size
- copyWithZone:
- string
- setSize:
- setName:
- name
- stringForState:
- emptyFields
- hasKey
- stringForKey:state:
- stringForSplitState:
- stringForRenderFlags:lightKeyboard:
- renderFlags
- initWithComponents:name:
- _writeString:toStr:maxLen:
- _writeNumber:toStr:
- _writeEdgeInsets:toStr:maxLen:
- _writeArray:toStr:maxLen:
- stringForConstruction:
- stringForComponentArray:additionalValues:
- initWithName:
- rowHint
- setRowHint:
- displayHint
- setDisplayHint:
- setEmptyFields:
- setRenderFlags:
@end
