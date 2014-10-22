@interface SKUISearchRelatedView : UIView
{
	id _clientContext;
	id _delegate;
	id _relatedQueries;
	id _titleLabel;
	id _relatedButtons;
	id _scrollView;
	id _noRelatedLabel;
	id _backButton;
	id _separatorView;
	id _previousRelatedSearchTerm;
}

+ initWithFrame:
+ dealloc
+ setDelegate:
+ layoutSubviews
+ sizeThatFits:
+ delegate
+ clientContext
+ _backAction:
+ setPreviousRelatedSearchTerm:
+ setRelatedQueries:
+ relatedQueries
+ previousRelatedSearchTerm
+ .cxx_destruct
+ _buttonAction:
+ setClientContext:
- initWithFrame:
- dealloc
- setDelegate:
- layoutSubviews
- sizeThatFits:
- delegate
- clientContext
- _backAction:
- setPreviousRelatedSearchTerm:
- setRelatedQueries:
- relatedQueries
- previousRelatedSearchTerm
- .cxx_destruct
- _buttonAction:
- setClientContext:
@end
