@interface PUAlbumListCellContentView : UIView
{
	BOOL _editing;
	BOOL _enabled;
	BOOL _showsDeleteButtonWhenEditing;
	BOOL __showsTitleAndSubtitle;
	id _delegate;
	id _stackView;
	id _customImageView;
	id _title;
	id _subtitle;
	double _xInset;
	long long _layout;
	usigned long long _editCapabilities;
	id __titleTextField;
	id __subtitleLabel;
	id __deleteButton;
}

@end
