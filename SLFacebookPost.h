@interface SLFacebookPost : NSObject
{
	id _imageData;
	id _imageAssetURLs;
	id _videoData;
	id _videoAssetURLs;
	id _maskedApplicationID;
	id _text;
	id _videoExportPreset;
	id _link;
	id _place;
	id _album;
	id _privacySetting;
	id _taggedUserIDs;
}

+ privacySetting
+ setPrivacySetting:
+ addImageData:
+ addImageAssetURL:
+ addVideoData:
+ addVideoAssetURL:
+ setVideoExportPreset:
+ _encodableObjectProperties
+ setImageAssetURLs:
+ setMaskedApplicationID:
+ imageAssetURLs
+ videoData
+ videoAssetURLs
+ setVideoData:
+ setVideoAssetURLs:
+ maskedApplicationID
+ videoExportPreset
+ taggedUserIDs
+ setTaggedUserIDs:
+ initWithCoder:
+ encodeWithCoder:
+ init
+ copy
+ text
+ setText:
+ setLink:
+ link
+ setPlace:
+ imageData
+ setImageData:
+ album
+ place
+ setAlbum:
+ .cxx_destruct
- privacySetting
- setPrivacySetting:
- addImageData:
- addImageAssetURL:
- addVideoData:
- addVideoAssetURL:
- setVideoExportPreset:
- _encodableObjectProperties
- setImageAssetURLs:
- setMaskedApplicationID:
- imageAssetURLs
- videoData
- videoAssetURLs
- setVideoData:
- setVideoAssetURLs:
- maskedApplicationID
- videoExportPreset
- taggedUserIDs
- setTaggedUserIDs:
- initWithCoder:
- encodeWithCoder:
- init
- copy
- text
- setText:
- setLink:
- link
- setPlace:
- imageData
- setImageData:
- album
- place
- setAlbum:
- .cxx_destruct
@end
