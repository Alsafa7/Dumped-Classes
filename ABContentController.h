@interface ABContentController : NSObject
{
	pointer _addressBook;
	id _contentControllerDelegate;
	id _contentLayer;
}

+ initWithContentControllerDelegate:addressBook:
+ back:save:
+ contentControllerDelegate
+ setContentControllerDelegate:
+ cleanUpContentLayer
+ contentViewIsVisible
+ preloadController
+ dealloc
+ init
+ reload
+ contentView
+ displayScrollerIndicators
+ addressBook
+ setAddressBook:
- initWithContentControllerDelegate:addressBook:
- back:save:
- contentControllerDelegate
- setContentControllerDelegate:
- cleanUpContentLayer
- contentViewIsVisible
- preloadController
- dealloc
- init
- reload
- contentView
- displayScrollerIndicators
- addressBook
- setAddressBook:
@end
