@interface RemindersListHeaderView : UIView
{
	int _style;
	id _mainText;
	id _accountLabel;
	id _numberOfItemsLabel;
	id _editButton;
	id _addImageView;
	id _color;
	struct _mainTextSizeAtMinFont;
	id _headerDelegate;
	BOOL _showsNumberOfItems;
	BOOL _usesEditButtonAsDoneButton;
}

+ setCardIsEditing:
+ setHeaderDelegate:
+ setUsesEditButtonAsDoneButton:
+ setEditButtonAlpha:
+ updateEditButtonTitle
+ setCategory:withColor:
+ setAccountHidden:
+ setShowsNumberOfItems:
+ coloredTextAttributes
+ mainTextDidBeginEditing:
+ mainTextAttributes
+ placeholderAttributes
+ newTextButton
+ createEditButtonIfNeeded
+ setEditButtonHidden:
+ setCategoryFieldEnabled:
+ beginEditingTextField
+ showsNumberOfItems
+ usesEditButtonAsDoneButton
+ editButtonTapped
+ dealloc
+ setStyle:
+ initWithFrame:style:
+ beginEditing
+ endEditing
+ updateConstraints
+ setColor:
+ setAccount:
+ setNumberOfItems:
+ setPlaceholderText:
+ setTextFieldDelegate:
+ .cxx_destruct
- setCardIsEditing:
- setHeaderDelegate:
- setUsesEditButtonAsDoneButton:
- setEditButtonAlpha:
- updateEditButtonTitle
- setCategory:withColor:
- setAccountHidden:
- setShowsNumberOfItems:
- coloredTextAttributes
- mainTextDidBeginEditing:
- mainTextAttributes
- placeholderAttributes
- newTextButton
- createEditButtonIfNeeded
- setEditButtonHidden:
- setCategoryFieldEnabled:
- beginEditingTextField
- showsNumberOfItems
- usesEditButtonAsDoneButton
- editButtonTapped
- dealloc
- setStyle:
- initWithFrame:style:
- beginEditing
- endEditing
- updateConstraints
- setColor:
- setAccount:
- setNumberOfItems:
- setPlaceholderText:
- setTextFieldDelegate:
- .cxx_destruct
@end
