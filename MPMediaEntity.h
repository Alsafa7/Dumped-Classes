@interface MPMediaEntity : NSObject
{

}

+ preferredStoreOfferVariant
+ buyOfferForVariant:
+ isDownloadable
+ buyOffer
+ completionOfferForVariant:
+ isDownloadableStoreOffer
+ isPurchasableStoreOffer
+ representativeItem
+ mediaLibrary
+ enumerateValuesForProperties:usingBlock:
+ valuesForProperties:
+ invalidateCachedProperties
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ copyWithZone:
+ valueForProperty:
+ persistentID
- preferredStoreOfferVariant
- buyOfferForVariant:
- isDownloadable
- buyOffer
- completionOfferForVariant:
- isDownloadableStoreOffer
- isPurchasableStoreOffer
- representativeItem
- mediaLibrary
- enumerateValuesForProperties:usingBlock:
- valuesForProperties:
- invalidateCachedProperties
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- copyWithZone:
- valueForProperty:
- persistentID
@end
