@interface MPMediaItemArtwork : NSObject
{
	id _image;
}

+ imageWithSize:atPlaybackTime:
+ imageDataWithSize:atPlaybackTime:
+ hasArtworkAvailable
+ imageWithSize:
+ albumImageWithSize:
+ albumImageDataWithSize:
+ imageCropRect
+ bounds
+ initWithImage:
+ .cxx_destruct
- imageWithSize:atPlaybackTime:
- imageDataWithSize:atPlaybackTime:
- hasArtworkAvailable
- imageWithSize:
- albumImageWithSize:
- albumImageDataWithSize:
- imageCropRect
- bounds
- initWithImage:
- .cxx_destruct
@end
