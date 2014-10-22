@interface SKUITextBoxView : UIControl
{
	id _colorScheme;
	struct _contentInsets;
	id _moreButton;
	long long _numberOfVisibleLines;
	double _rating;
	id _ratingImageView;
	id _ratingLabel;
	id _subtitleLabel;
	pointer _textFrame;
	struct _titleInsets;
	id _titleLabel;
	pointer _titleTextFrame;
	pointer _truncationToken;
	long long _truncationStyle;
	id _underlyingText;
}

+ setRating:
+ rating
+ initWithFrame:
+ dealloc
+ drawRect:
+ setBackgroundColor:
+ setFrame:
+ layoutSubviews
+ setTitle:
+ sizeThatFits:
+ setSubtitle:
+ subtitle
+ reset
+ setContentInsets:
+ contentInsets
+ colorScheme
+ setColorScheme:
+ _textFrame
+ setNumberOfVisibleLines:
+ setFixedWidthTextFrame:
+ setMoreButtonTitle:
+ setFixedWidthTitleTextFrame:
+ setRatingText:
+ moreButtonTitle
+ _moreButton
+ _textSizeToFitSize:
+ ratingText
+ setTextFrameWithText:
+ setTruncationStyle:
+ numberOfVisibleLines
+ truncationStyle
+ titleInsets
+ setTitleInsets:
+ .cxx_destruct
- setRating:
- rating
- initWithFrame:
- dealloc
- drawRect:
- setBackgroundColor:
- setFrame:
- layoutSubviews
- setTitle:
- sizeThatFits:
- setSubtitle:
- subtitle
- reset
- setContentInsets:
- contentInsets
- colorScheme
- setColorScheme:
- _textFrame
- setNumberOfVisibleLines:
- setFixedWidthTextFrame:
- setMoreButtonTitle:
- setFixedWidthTitleTextFrame:
- setRatingText:
- moreButtonTitle
- _moreButton
- _textSizeToFitSize:
- ratingText
- setTextFrameWithText:
- setTruncationStyle:
- numberOfVisibleLines
- truncationStyle
- titleInsets
- setTitleInsets:
- .cxx_destruct
@end
