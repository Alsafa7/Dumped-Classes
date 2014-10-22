@interface UITextViewPrintFormatter : UIViewPrintFormatter
{
	struct _textViewPrintFormatterFlags;
	id _pageData;
}

+ dealloc
+ text
+ setFont:
+ font
+ setAttributedText:
+ setText:
+ attributedText
+ setTextAlignment:
+ textAlignment
+ color
+ setColor:
+ _textView
+ _recalcPageCount
+ rectForPageAtIndex:
+ drawInRect:forPageAtIndex:
+ _pageData
- dealloc
- text
- setFont:
- font
- setAttributedText:
- setText:
- attributedText
- setTextAlignment:
- textAlignment
- color
- setColor:
- _textView
- _recalcPageCount
- rectForPageAtIndex:
- drawInRect:forPageAtIndex:
- _pageData
@end
