@interface SUPageSectionGroup : NSObject
{
	long long _defaultSectionIndex;
	id _sections;
	long long _style;
	id _tintColor;
	long long _tintStyle;
}

+ dealloc
+ isEqual:
+ setStyle:
+ copyWithZone:
+ style
+ tintColor
+ setTintColor:
+ setSections:
+ sections
+ loadFromDictionary:
+ initWithSectionsDictionary:
+ setDefaultSectionIndex:
+ defaultSectionIndex
+ tintStyle
+ setTintStyle:
+ _sectionStyleForString:
- dealloc
- isEqual:
- setStyle:
- copyWithZone:
- style
- tintColor
- setTintColor:
- setSections:
- sections
- loadFromDictionary:
- initWithSectionsDictionary:
- setDefaultSectionIndex:
- defaultSectionIndex
- tintStyle
- setTintStyle:
- _sectionStyleForString:
@end
