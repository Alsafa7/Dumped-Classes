@interface SBFolderTitleTextField : UITextField
{
	BOOL _showingEditUI;
	id _legibilityView;
	BOOL _allowsEditing;
	id _legibilitySettings;
}

+ _updateLegibility
+ _updateLegibilityView
+ _textRectForBounds:
+ _clearButtonImage
+ setShowsEditUI:animated:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ setText:
+ editingRectForBounds:
+ _backgroundImage
+ textRectForBounds:
+ setFontSize:
+ allowsEditing
+ setAllowsEditing:
+ clearButtonRectForBounds:
+ fontSize
+ legibilitySettings
+ setLegibilitySettings:
- _updateLegibility
- _updateLegibilityView
- _textRectForBounds:
- _clearButtonImage
- setShowsEditUI:animated:
- initWithFrame:
- dealloc
- layoutSubviews
- sizeThatFits:
- setText:
- editingRectForBounds:
- _backgroundImage
- textRectForBounds:
- setFontSize:
- allowsEditing
- setAllowsEditing:
- clearButtonRectForBounds:
- fontSize
- legibilitySettings
- setLegibilitySettings:
@end
