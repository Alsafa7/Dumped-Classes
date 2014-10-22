@interface AVURLAssetInternal : NSObject
{
	id loader;
	id URL;
	id tracks;
	id chapterGroupInfo;
	id anchorChapterType;
	id resourceLoader;
	long long makeOneResourceLoaderOnly;
	id tracksAccessQueue;
}

@end
