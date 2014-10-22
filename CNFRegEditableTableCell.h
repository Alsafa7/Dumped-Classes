@interface CNFRegEditableTableCell : PSEditableTableCell
{
	SEL _emptyStateSelector;
	SEL _didBeginEditingSelector;
	SEL _didEndEditingSelector;
	id _textChangeObserver;
	BOOL _textFieldIsEmpty;
	BOOL _skipDelegateCallback;
	id _shadowImage;
	id _shadowView;
	id _customCheckmarkImage;
	id _customCheckmarkImageSelected;
}

@end
