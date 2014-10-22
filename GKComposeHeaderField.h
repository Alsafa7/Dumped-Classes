@interface GKComposeHeaderField : UIImageView
{
	id _nameLabel;
	id _valueLabel;
	id _separatorView;
	usigned long long _maxLineCount;
	SEL _actionWhenTouched;
}

+ nameLabel
+ setNameLabel:
+ valueLabel
+ setValueLabel:
+ setNameText:
+ setMaxLineCount:
+ metricsForConstraints
+ viewsForConstraints
+ nameText
+ valueFrame
+ maxLineCount
+ actionWhenTouched
+ setActionWhenTouched:
+ initWithFrame:
+ dealloc
+ touchesBegan:withEvent:
+ canBecomeFirstResponder
+ intrinsicContentSize
+ updateConstraints
+ viewForBaselineLayout
+ separatorView
+ setSeparatorView:
+ valueText
+ setValueText:
- nameLabel
- setNameLabel:
- valueLabel
- setValueLabel:
- setNameText:
- setMaxLineCount:
- metricsForConstraints
- viewsForConstraints
- nameText
- valueFrame
- maxLineCount
- actionWhenTouched
- setActionWhenTouched:
- initWithFrame:
- dealloc
- touchesBegan:withEvent:
- canBecomeFirstResponder
- intrinsicContentSize
- updateConstraints
- viewForBaselineLayout
- separatorView
- setSeparatorView:
- valueText
- setValueText:
@end
