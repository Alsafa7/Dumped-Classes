@interface NotesBackgroundView : UIView
{
	id _delegate;
	id _textureView;
	int _style;
	id _topTextureView;
	id _bottomTextureView;
	struct _lastRecordedContentOffset;
	id _contentView;
	bit[1] _inLandscape;
}

+ initWithFrame:style:delegate:
+ addContentView:
+ scrollView:setContentOffset:
+ setTopFadingViewVisible:
+ snapshotContentIntoSnapshotView:
+ setContentLayerVisible:
+ scrollViewDescendantOfView:
+ copyGradientBottomWithImage:forBounds:
+ setImage:
+ setDelegate:
+ layoutSubviews
+ delegate
+ bottomMargin
+ .cxx_destruct
- initWithFrame:style:delegate:
- addContentView:
- scrollView:setContentOffset:
- setTopFadingViewVisible:
- snapshotContentIntoSnapshotView:
- setContentLayerVisible:
- scrollViewDescendantOfView:
- copyGradientBottomWithImage:forBounds:
- setImage:
- setDelegate:
- layoutSubviews
- delegate
- bottomMargin
- .cxx_destruct
@end
