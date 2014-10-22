@interface SBFolderSettings : _UISettings
{
	BOOL _allowNestedFolders;
	BOOL _pinchToClose;
	BOOL _blurFolderBackground;
	BOOL _oneColumnAtATime;
}

+ allowNestedFolders
+ setAllowNestedFolders:
+ setPinchToClose:
+ setBlurFolderBackground:
+ setOneColumnAtATime:
+ pinchToClose
+ blurFolderBackground
+ oneColumnAtATime
+ setDefaultValues
- allowNestedFolders
- setAllowNestedFolders:
- setPinchToClose:
- setBlurFolderBackground:
- setOneColumnAtATime:
- pinchToClose
- blurFolderBackground
- oneColumnAtATime
- setDefaultValues
@end
