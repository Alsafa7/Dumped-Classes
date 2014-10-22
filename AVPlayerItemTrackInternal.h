@interface AVPlayerItemTrackInternal : NSObject
{
	id weakReferenceToPlayerItem;
	pointer figPlaybackItem;
	int trackID;
	pointer mediaTypeRef;
	id asset;
}

@end
