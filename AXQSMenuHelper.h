@interface AXQSMenuHelper : NSObject
{
	BOOL _showingLanguageChoices;
	id _thirdPartyMenuItems;
}

+ restoreMenu
+ calloutBar
+ menuController
+ menuItemForCalloutBarButton:
+ setShowingLanguageChoices:
+ isShowingLanguageChoices
+ setThirdPartyMenuItems:
+ thirdPartyMenuItems
+ saveThirdPartyMenuItemsIfNeeded:
+ dealloc
- restoreMenu
- calloutBar
- menuController
- menuItemForCalloutBarButton:
- setShowingLanguageChoices:
- isShowingLanguageChoices
- setThirdPartyMenuItems:
- thirdPartyMenuItems
- saveThirdPartyMenuItemsIfNeeded:
- dealloc
@end
