@interface CKMessageEntryTextView : UITextView
{
	BOOL _showingDictationPlaceholder;
	id _font;
	id _placeholderLabel;
}

+ setPlaceholderLabel:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ setFont:
+ font
+ setAttributedText:
+ typingAttributes
+ insertDictationResultPlaceholder
+ removeDictationResultPlaceholder:willInsertResult:
+ textViewDidChange:
+ initWithFrame:textContainer:
+ isSingleLine
+ isShowingDictationPlaceholder
+ compositionText
+ setCompositionText:
+ updateTextView
+ setShowingDictationPlaceholder:
+ placeholderLabel
+ placeholderText
+ setPlaceholderText:
- setPlaceholderLabel:
- dealloc
- layoutSubviews
- sizeThatFits:
- setFont:
- font
- setAttributedText:
- typingAttributes
- insertDictationResultPlaceholder
- removeDictationResultPlaceholder:willInsertResult:
- textViewDidChange:
- initWithFrame:textContainer:
- isSingleLine
- isShowingDictationPlaceholder
- compositionText
- setCompositionText:
- updateTextView
- setShowingDictationPlaceholder:
- placeholderLabel
- placeholderText
- setPlaceholderText:
@end
