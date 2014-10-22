@interface SSItemArtworkImage : NSObject
{
	id _dictionary;
	id _imageKind;
}

+ dealloc
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ imageOrientation
+ width
+ imageSize
+ height
+ URL
+ setURL:
+ URLString
+ valueForProperty:
+ setValue:forProperty:
+ _setValue:forKey:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ setImageKind:
+ setImageKindWithTypeName:variantName:
+ imageScale
+ imageKind
+ isPrerendered
+ initWithArtworkDictionary:
- dealloc
- isEqual:
- hash
- description
- copyWithZone:
- imageOrientation
- width
- imageSize
- height
- URL
- setURL:
- URLString
- valueForProperty:
- setValue:forProperty:
- _setValue:forKey:
- initWithXPCEncoding:
- copyXPCEncoding
- setImageKind:
- setImageKindWithTypeName:variantName:
- imageScale
- imageKind
- isPrerendered
- initWithArtworkDictionary:
@end
