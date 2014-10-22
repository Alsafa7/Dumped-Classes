@interface MCFontPayload : MCPayload
{
	id _fontData;
	id _name;
	id _persistentURL;
}

+ handlerWithProfileHandler:
+ description
+ setName:
+ name
+ title
+ initWithDictionary:profile:outError:
+ stubDictionary
+ subtitle1Label
+ subtitle1Description
+ persistentURL
+ fontData
+ setFontData:
+ setPersistentURL:
+ .cxx_destruct
- handlerWithProfileHandler:
- description
- setName:
- name
- title
- initWithDictionary:profile:outError:
- stubDictionary
- subtitle1Label
- subtitle1Description
- persistentURL
- fontData
- setFontData:
- setPersistentURL:
- .cxx_destruct
@end
