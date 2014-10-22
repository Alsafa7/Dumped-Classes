@interface SSItemImageCollection : NSObject
{
	id _itemImages;
}

+ dealloc
+ copyWithZone:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ _newImagesForDictionary:
+ imagesForSize:
+ _imagesForSize:scale:
+ itemImages
+ bestImageForSize:
+ imagesForKind:
+ initWithItemImages:
+ initWithImageCollection:
- dealloc
- copyWithZone:
- initWithXPCEncoding:
- copyXPCEncoding
- _newImagesForDictionary:
- imagesForSize:
- _imagesForSize:scale:
- itemImages
- bestImageForSize:
- imagesForKind:
- initWithItemImages:
- initWithImageCollection:
@end
