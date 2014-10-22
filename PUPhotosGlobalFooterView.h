@interface PUPhotosGlobalFooterView : UICollectionReusableView
{
	usigned long long _imageCount;
	usigned long long _videoCount;
	usigned long long _otherCount;
	usigned long long _pendingCount;
	int _importOperation;
	id _titleLabel;
	id _subtitleLabel;
	id _syncProgressView;
	long long _style;
	id _subtitle;
}

+ layoutSubviews
+ sizeThatFits:
+ setStyle:
+ style
+ setSubtitle:
+ subtitle
+ setPendingCount:importOperation:
+ setImageCount:videoCount:otherCount:
+ _updateSubviews
+ .cxx_destruct
- layoutSubviews
- sizeThatFits:
- setStyle:
- style
- setSubtitle:
- subtitle
- setPendingCount:importOperation:
- setImageCount:videoCount:otherCount:
- _updateSubviews
- .cxx_destruct
@end
