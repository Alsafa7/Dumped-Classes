@interface CUINamedImage : NSObject
{
	id _key;
	usigned long long _storageRef;
	id _name;
}

+ dealloc
+ size
+ description
+ scale
+ edgeInsets
+ resizingMode
+ image
+ setName:
+ opacity
+ name
+ hasSliceInformation
+ _themeStore
+ _renditionForSpecificKey:
+ positionOfSliceBoundary:
+ _rendition
+ initWithName:usingRenditionKey:fromTheme:
+ blendMode
- dealloc
- size
- description
- scale
- edgeInsets
- resizingMode
- image
- setName:
- opacity
- name
- hasSliceInformation
- _themeStore
- _renditionForSpecificKey:
- positionOfSliceBoundary:
- _rendition
- initWithName:usingRenditionKey:fromTheme:
- blendMode
@end
