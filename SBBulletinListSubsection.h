@interface SBBulletinListSubsection : NSObject
{
	BOOL _showsInLockScreen;
	BOOL _showsMessagePreview;
	id _subsectionID;
}

+ initWithBulletinListSection:subsectionID:
+ dealloc
+ showsMessagePreview
+ setShowsMessagePreview:
+ subsectionID
+ showsInLockScreen
+ setShowsInLockScreen:
- initWithBulletinListSection:subsectionID:
- dealloc
- showsMessagePreview
- setShowsMessagePreview:
- subsectionID
- showsInLockScreen
- setShowsInLockScreen:
@end
