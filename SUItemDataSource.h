@interface SUItemDataSource : NSObject
{

}

+ newItemWithItemDictionary:
+ newExternalDownloadWithItem:storeOffer:
+ newPurchaseWithItem:storeOffer:
+ itemTypeForTypeString:
+ _newDownloadForDocumentItem:storeOffer:
+ _newDownloadForPodcastEpisode:storeOffer:
+ itemTypeForItem:
+ _thumbnailImageForItem:
+ _newTonePurchaseWithPurchase:
+ _newDownloadMetadataForPodcastEpisode:storeOffer:
+ estimatedDiskSpaceNeededForItem:storeOffer:
+ newDisplayItemValidationTestsForItem:
+ typeStringForItemType:
- newItemWithItemDictionary:
- newExternalDownloadWithItem:storeOffer:
- newPurchaseWithItem:storeOffer:
- itemTypeForTypeString:
- _newDownloadForDocumentItem:storeOffer:
- _newDownloadForPodcastEpisode:storeOffer:
- itemTypeForItem:
- _thumbnailImageForItem:
- _newTonePurchaseWithPurchase:
- _newDownloadMetadataForPodcastEpisode:storeOffer:
- estimatedDiskSpaceNeededForItem:storeOffer:
- newDisplayItemValidationTestsForItem:
- typeStringForItemType:
@end
