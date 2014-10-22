@interface SKUIItemArtworkContext : NSObject
{
	id _backgroundColor;
	id _colorScheme;
	id _generalImageConsumer;
	id _iconConsumer;
	id _letterboxConsumer;
	id _newsstandConsumer;
	id _placeholders;
	id _posterConsumer;
}

+ setBackgroundColor:
+ backgroundColor
+ colorScheme
+ setColorScheme:
+ placeholderImageForItem:
+ dataConsumerForItem:
+ setIconConsumer:
+ setGeneralConsumer:
+ setNewsstandConsumer:
+ setPosterConsumer:
+ setLetterboxConsumer:
+ imageSizeForItem:
+ URLForItem:
+ largestImageSizeForItems:
+ artworkForItem:
+ generalConsumer
+ iconConsumer
+ letterboxConsumer
+ newsstandConsumer
+ posterConsumer
+ .cxx_destruct
- setBackgroundColor:
- backgroundColor
- colorScheme
- setColorScheme:
- placeholderImageForItem:
- dataConsumerForItem:
- setIconConsumer:
- setGeneralConsumer:
- setNewsstandConsumer:
- setPosterConsumer:
- setLetterboxConsumer:
- imageSizeForItem:
- URLForItem:
- largestImageSizeForItems:
- artworkForItem:
- generalConsumer
- iconConsumer
- letterboxConsumer
- newsstandConsumer
- posterConsumer
- .cxx_destruct
@end
