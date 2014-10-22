@interface _UIAppearanceCustomizableClassInfo : NSObject
{
	BOOL _isGuideClassRoot;
	BOOL _isCustomizableViewClassRoot;
	id _appearanceNodeKey;
	usigned long long _hash;
	Class _customizableViewClass;
	Class _guideClass;
}

+ dealloc
+ isEqual:
+ hash
+ description
+ _customizableViewClass
+ _appearanceNodeKey
+ _guideClass
+ _superClassInfo
+ _hash
- dealloc
- isEqual:
- hash
- description
- _customizableViewClass
- _appearanceNodeKey
- _guideClass
- _superClassInfo
- _hash
@end
