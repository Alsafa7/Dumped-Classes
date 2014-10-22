@interface SSSoftwareLibraryItem : NSObject
{
	id _etags;
	BOOL _profileValidated;
	id _propertyValues;
}

+ dealloc
+ _setValue:forProperty:
+ valueForProperty:
+ initWithXPCEncoding:
+ copyXPCEncoding
+ ETagForAssetType:
+ setETag:forAssetType:error:
+ _initWithITunesMetadata:
+ isProfileValidated
+ setProfileValidated:
- dealloc
- _setValue:forProperty:
- valueForProperty:
- initWithXPCEncoding:
- copyXPCEncoding
- ETagForAssetType:
- setETag:forAssetType:error:
- _initWithITunesMetadata:
- isProfileValidated
- setProfileValidated:
@end
