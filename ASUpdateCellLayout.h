@interface ASUpdateCellLayout : SKUIItemCellLayout
{
	BOOL _isIPad;
	id _lastUpdateDateLabel;
	BOOL _showsWhatsNewButton;
	id _titleLabel;
	long long _versionIdentifier;
	id _versionLabel;
	id _whatsNewButtonLabel;
	id _whatsNewTextBox;
	double _whatsNewWidth;
}

+ setWhatsNewWidth:
+ _adjustedStateFlagForItemState:
+ _whatsNewButtonLabel
+ setLastUpdateDateString:
+ setShowsWhatsNewButton:
+ setWhatsNewWithTextFrame:numberOfVisibleLines:
+ showsWhatsNewButton
+ whatsNewWidth
+ setBackgroundColor:
+ layoutSubviews
+ setTitle:
+ title
+ initWithTableViewCell:
+ versionString
+ setItemState:animated:
+ initWithCollectionViewCell:
+ layoutForItemOfferChange
+ lastUpdateDateString
+ setVersionString:
+ .cxx_destruct
+ versionIdentifier
+ setVersionIdentifier:
- setWhatsNewWidth:
- _adjustedStateFlagForItemState:
- _whatsNewButtonLabel
- setLastUpdateDateString:
- setShowsWhatsNewButton:
- setWhatsNewWithTextFrame:numberOfVisibleLines:
- showsWhatsNewButton
- whatsNewWidth
- setBackgroundColor:
- layoutSubviews
- setTitle:
- title
- initWithTableViewCell:
- versionString
- setItemState:animated:
- initWithCollectionViewCell:
- layoutForItemOfferChange
- lastUpdateDateString
- setVersionString:
- .cxx_destruct
- versionIdentifier
- setVersionIdentifier:
@end
