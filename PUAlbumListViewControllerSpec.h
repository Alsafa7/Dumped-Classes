@interface PUAlbumListViewControllerSpec : NSObject
{
	BOOL _allowsAlbumCountSubtitle;
	BOOL _usesStackTransitionToGrid;
	BOOL _shouldUseCollageForCloudFeedPlaceholder;
	int _fastImageFormat;
	int _qualityImageFormat;
	int _collageFastImageFormat;
	int _collageQualityImageFormat;
	usigned long long _stackViewStyle;
	id _stackPhotoDecoration;
	id _emptyStackPhotoDecoration;
	double _collageSpacing;
	double _sectionHeaderHeight;
	double _sectionFooterHeight;
	long long _albumDeletionConfirmationStyle;
	id _gridViewControllerSpec;
	id _panoramaViewControllerSpec;
	id _photosPickerViewControllerSpec;
	id _feedViewControllerSpec;
	struct _stackSize;
	struct _stackOffset;
	struct _stackPerspectiveOffset;
	struct _stackPerspectiveInsets;
}

+ stackSize
+ sectionHeaderHeight
+ sectionFooterHeight
+ contentSizeForViewInPopover
+ cellSizeForBounds:
+ photosPickerViewControllerSpec
+ _centeredGlyphImage:withBackgroundColor:size:imageAlpha:
+ _nameOfEmptySharedAlbumPlaceholderImage
+ _nameOfAddSharedAlbumPlaceholderImage
+ _centeredTintedGlyphImage:withBackgroundColor:size:
+ _pixelRoundedOriginForCenteredImage:inRect:
+ configureCollectionViewAlbumListLayout:forBounds:
+ emptyAlbumPlaceholderImage
+ emptySharedAlbumPlaceholderImage
+ addSharedAlbumPlaceholderImage
+ fastImageFormat
+ qualityImageFormat
+ stackViewStyle
+ stackPhotoDecoration
+ emptyStackPhotoDecoration
+ stackOffset
+ stackPerspectiveInsets
+ stackPerspectiveOffset
+ collageFastImageFormat
+ collageQualityImageFormat
+ collageSpacing
+ allowsAlbumCountSubtitle
+ usesStackTransitionToGrid
+ shouldUseCollageForCloudFeedPlaceholder
+ albumDeletionConfirmationStyle
+ gridViewControllerSpec
+ panoramaViewControllerSpec
+ feedViewControllerSpec
+ .cxx_destruct
- stackSize
- sectionHeaderHeight
- sectionFooterHeight
- contentSizeForViewInPopover
- cellSizeForBounds:
- photosPickerViewControllerSpec
- _centeredGlyphImage:withBackgroundColor:size:imageAlpha:
- _nameOfEmptySharedAlbumPlaceholderImage
- _nameOfAddSharedAlbumPlaceholderImage
- _centeredTintedGlyphImage:withBackgroundColor:size:
- _pixelRoundedOriginForCenteredImage:inRect:
- configureCollectionViewAlbumListLayout:forBounds:
- emptyAlbumPlaceholderImage
- emptySharedAlbumPlaceholderImage
- addSharedAlbumPlaceholderImage
- fastImageFormat
- qualityImageFormat
- stackViewStyle
- stackPhotoDecoration
- emptyStackPhotoDecoration
- stackOffset
- stackPerspectiveInsets
- stackPerspectiveOffset
- collageFastImageFormat
- collageQualityImageFormat
- collageSpacing
- allowsAlbumCountSubtitle
- usesStackTransitionToGrid
- shouldUseCollageForCloudFeedPlaceholder
- albumDeletionConfirmationStyle
- gridViewControllerSpec
- panoramaViewControllerSpec
- feedViewControllerSpec
- .cxx_destruct
@end
