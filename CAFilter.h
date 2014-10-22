@interface CAFilter : NSObject
{
	unsigned int _type;
	id _name;
	unsigned int _flags;
	pointer _attr;
	pointer _cache;
}

+ setDefaults
+ CAMLParser:setValue:forKey:
+ encodeWithCAMLWriter:
+ CAMLTypeForKey:
+ CA_copyRenderValue
+ cachesInputImage
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ setValue:forKey:
+ valueForKey:
+ type
+ copyWithZone:
+ initWithType:
+ setName:
+ setCachesInputImage:
+ isEnabled
+ name
+ setEnabled:
+ enabled
+ mutableCopyWithZone:
+ initWithName:
- setDefaults
- CAMLParser:setValue:forKey:
- encodeWithCAMLWriter:
- CAMLTypeForKey:
- CA_copyRenderValue
- cachesInputImage
- dealloc
- initWithCoder:
- encodeWithCoder:
- setValue:forKey:
- valueForKey:
- type
- copyWithZone:
- initWithType:
- setName:
- setCachesInputImage:
- isEnabled
- name
- setEnabled:
- enabled
- mutableCopyWithZone:
- initWithName:
@end
