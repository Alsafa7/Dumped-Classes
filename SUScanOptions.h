@interface SUScanOptions : NSObject
{
	id _identifier;
	BOOL _forced;
	id _types;
}

+ types
+ addType:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ description
+ identifier
+ setIdentifier:
+ setTypes:
+ containsType:
+ removeType:
+ findsAnyUpdate
+ clearTypes
+ isForced
+ setForced:
- types
- addType:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- description
- identifier
- setIdentifier:
- setTypes:
- containsType:
- removeType:
- findsAnyUpdate
- clearTypes
- isForced
- setForced:
@end
