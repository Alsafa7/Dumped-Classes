@interface MCWebClipPayload : MCPayload
{
	id _URL;
	id _label;
	id _iconData;
	BOOL _isRemovable;
	BOOL _precomposed;
	BOOL _fullScreen;
	id _savedIdentifier;
}

+ handlerWithProfileHandler:
+ description
+ title
+ label
+ URL
+ fullScreen
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ subtitle2Label
+ subtitle2Description
+ savedIdentifier
+ iconData
+ isRemovable
+ precomposed
+ setSavedIdentifier:
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- title
- label
- URL
- fullScreen
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- subtitle2Label
- subtitle2Description
- savedIdentifier
- iconData
- isRemovable
- precomposed
- setSavedIdentifier:
- .cxx_destruct
@end
