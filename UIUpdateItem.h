@interface UIUpdateItem : NSObject
{
	int _action;
	id _indexPath;
	long long _animation;
	double _offset;
	id _gap;
	BOOL _headerFooterOnly;
	BOOL _skipAnimation;
}

+ dealloc
+ action
+ animation
+ inverseCompareIndexPaths:
+ compareIndexPaths:
+ indexPath
+ isSectionOperation
+ initWithAction:forIndexPath:animation:
+ headerFooterOnly
+ setHeaderFooterOnly:
+ setOffset:
+ offset
+ setGap:
+ setAnimation:
+ _actionDescription
+ gap
+ skipAnimation
+ setSkipAnimation:
- dealloc
- action
- animation
- inverseCompareIndexPaths:
- compareIndexPaths:
- indexPath
- isSectionOperation
- initWithAction:forIndexPath:animation:
- headerFooterOnly
- setHeaderFooterOnly:
- setOffset:
- offset
- setGap:
- setAnimation:
- _actionDescription
- gap
- skipAnimation
- setSkipAnimation:
@end
