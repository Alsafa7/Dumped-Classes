@interface WebFrameViewPrivate : NSObject
{
	id webFrame;
	id frameScrollView;
	BOOL includedInWebKitStatistics;
}

+ dealloc
- dealloc
@end
