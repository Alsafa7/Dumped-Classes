@interface CNFRegTableLabel : UIView
{
	id _label;
	id _specifier;
	id _cnfreg_tableView;
	BOOL _isTopmostHeader;
	id _urlButton;
	id _URLText;
	id _URLTarget;
}

+ initWithSpecifier:
+ preferredHeightForWidth:
+ dealloc
+ layoutSubviews
+ _topPadding
+ _bottomPadding
+ clearSpecifier
+ updateLabelText
+ setCnfreg_tableView:
+ setIsTopmostHeader:
+ isTopmostHeader
+ _labelInset
+ _labelTextAlignment
+ _URLTarget
+ _labelText
+ _urlTapped:
+ _URLText
+ setURLText:
+ setURLTarget:
+ cnfreg_tableView
+ URLText
+ URLTarget
- initWithSpecifier:
- preferredHeightForWidth:
- dealloc
- layoutSubviews
- _topPadding
- _bottomPadding
- clearSpecifier
- updateLabelText
- setCnfreg_tableView:
- setIsTopmostHeader:
- isTopmostHeader
- _labelInset
- _labelTextAlignment
- _URLTarget
- _labelText
- _urlTapped:
- _URLText
- setURLText:
- setURLTarget:
- cnfreg_tableView
- URLText
- URLTarget
@end
