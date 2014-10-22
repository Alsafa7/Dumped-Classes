@interface PSFooterHyperlinkView : UIView
{
	id _textView;
	id _text;
	id _URL;
	struct _linkRange;
	id _target;
	SEL _action;
}

+ initWithSpecifier:
+ preferredHeightForWidth:
+ dealloc
+ layoutSubviews
+ sizeThatFits:
+ setTarget:
+ action
+ text
+ target
+ setText:
+ setAction:
+ URL
+ setURL:
+ textView:shouldInteractWithURL:inRange:
+ setLinkRange:
+ _linkify
+ linkRange
- initWithSpecifier:
- preferredHeightForWidth:
- dealloc
- layoutSubviews
- sizeThatFits:
- setTarget:
- action
- text
- target
- setText:
- setAction:
- URL
- setURL:
- textView:shouldInteractWithURL:inRange:
- setLinkRange:
- _linkify
- linkRange
@end
