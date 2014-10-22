@interface SKUILockupComponent : SKUIPageComponent
{
	id _editorial;
	id _item;
	long long _itemIdentifier;
	struct _lockupStyle;
}

+ item
+ initWithCustomPageContext:
+ componentType
+ _setItem:
+ initWithItem:style:
+ _setLockupStyle:
+ editorial
+ initWithItemIdentifier:style:
+ lockupStyle
+ .cxx_destruct
+ itemIdentifier
- item
- initWithCustomPageContext:
- componentType
- _setItem:
- initWithItem:style:
- _setLockupStyle:
- editorial
- initWithItemIdentifier:style:
- lockupStyle
- .cxx_destruct
- itemIdentifier
@end
