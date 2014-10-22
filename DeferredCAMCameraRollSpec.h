@interface DeferredCAMCameraRollSpec : CAMCameraRollSpec
{
	BOOL _isPad;
	id _spec;
	id _loader;
}

+ dealloc
+ isPad
+ setLoader:
+ ensureCAMCameraRollSpec
+ initWithDeferredLoader:isPad:
+ loader
+ setIsPad:
+ spec
+ prepareAlbumViewControllerForReuse:withAlbum:inApplicationCameraViewController:
+ newAlbumNavigationControllerForAlbum:inApplicationCameraViewController:
+ setSpec:
- dealloc
- isPad
- setLoader:
- ensureCAMCameraRollSpec
- initWithDeferredLoader:isPad:
- loader
- setIsPad:
- spec
- prepareAlbumViewControllerForReuse:withAlbum:inApplicationCameraViewController:
- newAlbumNavigationControllerForAlbum:inApplicationCameraViewController:
- setSpec:
@end
