@interface _UICompatibilityTextViewData : NSObject
{
	id m_frame;
	id m_body;
	int m_marginTop;
	id m_selectionTimer;
	id m_longPressAction;
	BOOL m_editable;
	BOOL m_editing;
	BOOL m_becomesEditableWithGestures;
	BOOL m_reentrancyGuard;
	BOOL m_readyForScroll;
	BOOL m_hasExplicitTextAlignment;
	BOOL m_hasExplicitLineHeight;
	id m_interactionAssistant;
	id m_webView;
	id m_font;
	id m_textColor;
	long long m_textAlignment;
	id m_inputView;
	id m_inputAccessoryView;
	double m_lineHeight;
	BOOL m_skipScrollContainingView;
	BOOL m_allowsEditingTextAttributes;
	BOOL m_usesAttributedText;
	BOOL m_clearsOnInsertion;
}

@end
