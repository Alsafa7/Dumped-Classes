@interface CKTranscriptBalloonCell : CKTranscriptMessageCell
{
	id _balloonView;
	double _transcriptDrawerWidth;
	double _drawerPercentRevealed;
	id _drawerLabel;
}

+ configureForRowObject:
+ configureForRow:
+ balloonView
+ setBalloonView:
+ initWithFrame:
+ dealloc
+ layoutSubviews
+ setGradientReferenceView:
+ gradientReferenceView
+ setDrawerLabel:
+ drawerPercentRevealed
+ transcriptDrawerWidth
+ drawerLabel
+ setDrawerAttributedText:
+ drawerAttributedText
+ setDrawerPercentRevealed:
+ setTranscriptDrawerWidth:
- configureForRowObject:
- configureForRow:
- balloonView
- setBalloonView:
- initWithFrame:
- dealloc
- layoutSubviews
- setGradientReferenceView:
- gradientReferenceView
- setDrawerLabel:
- drawerPercentRevealed
- transcriptDrawerWidth
- drawerLabel
- setDrawerAttributedText:
- drawerAttributedText
- setDrawerPercentRevealed:
- setTranscriptDrawerWidth:
@end
