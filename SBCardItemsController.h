@interface SBCardItemsController : NSObject
{
	id _remoteControllers;
	id _cardItems;
}

+ _addControllerWithConnection:
+ _activateAllCardItems
+ _updateThumbnailForCardItem:withSnapshotter:completion:
+ dealloc
+ init
+ proxy:detailedSignatureForSelector:
+ cardItemsDidChange:forControllerWithIdentifier:
+ addCardItems:forControllerWithIdentifier:
+ removeCardItems:forControllerWithIdentifier:
+ setCardItems:forControllerWithIdentifier:
+ clearCardItemsForControllerWithIdentifier:
+ getCardItemsForControllerWithIdentifier:withHandler:
- _addControllerWithConnection:
- _activateAllCardItems
- _updateThumbnailForCardItem:withSnapshotter:completion:
- dealloc
- init
- proxy:detailedSignatureForSelector:
- cardItemsDidChange:forControllerWithIdentifier:
- addCardItems:forControllerWithIdentifier:
- removeCardItems:forControllerWithIdentifier:
- setCardItems:forControllerWithIdentifier:
- clearCardItemsForControllerWithIdentifier:
- getCardItemsForControllerWithIdentifier:withHandler:
@end
