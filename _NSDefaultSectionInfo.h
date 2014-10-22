@interface _NSDefaultSectionInfo : NSObject
{
	id _controller;
	id _name;
	id _indexTitle;
	usigned long long _sectionOffset;
	usigned long long _numberOfObjects;
	usigned long long _oldSectionNumber;
	id _sectionObjects;
}

+ clearSectionObjectsCache
+ indexTitle
+ numberOfObjects
+ objects
+ initWithController:name:indexTitle:sectionOffset:
+ setNumberOfObjects:
+ setSectionOffset:
+ sectionNumber
+ sectionOffset
+ oldSectionNumber
+ setOldSectionNumber:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ indexOfObject:
+ name
+ setController:
- clearSectionObjectsCache
- indexTitle
- numberOfObjects
- objects
- initWithController:name:indexTitle:sectionOffset:
- setNumberOfObjects:
- setSectionOffset:
- sectionNumber
- sectionOffset
- oldSectionNumber
- setOldSectionNumber:
- dealloc
- initWithCoder:
- encodeWithCoder:
- indexOfObject:
- name
- setController:
@end
