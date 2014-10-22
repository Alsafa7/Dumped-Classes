@interface SKUICategory : NSObject
{
	id _artworkList;
	long long _categoryIdentifier;
	id _children;
	id _name;
	id _parentLabel;
	id _url;
}

+ name
+ URL
+ artworkList
+ initWithCategoryDictionary:
+ containsURL:
+ subcategoryContainingURL:
+ categoryIdentifier
+ parentLabel
+ .cxx_destruct
+ children
- name
- URL
- artworkList
- initWithCategoryDictionary:
- containsURL:
- subcategoryContainingURL:
- categoryIdentifier
- parentLabel
- .cxx_destruct
- children
@end
