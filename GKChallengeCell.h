@interface GKChallengeCell : GKCollectionViewCell
{
	BOOL _padLeftMargin;
	id _iconView;
	id _titleLabel;
	id _goalLabel;
	id _textContainerView;
	id _iconLeftConstraint;
	id _textLeftConstraint;
}

+ setIconLeftConstraint:
+ setTextLeftConstraint:
+ setPadLeftMargin:
+ goalLabel
+ setGoalLabel:
+ padLeftMargin
+ iconLeftConstraint
+ textLeftConstraint
+ setRepresentedItem:
+ iconView
+ didUpdateModel
+ canRemoveItem
+ setIconView:
+ setTextContainerView:
+ textContainerView
+ establishConstraints
+ initWithFrame:
+ dealloc
+ titleLabel
+ prepareForReuse
+ setTitleLabel:
+ challenge
+ setChallenge:
- setIconLeftConstraint:
- setTextLeftConstraint:
- setPadLeftMargin:
- goalLabel
- setGoalLabel:
- padLeftMargin
- iconLeftConstraint
- textLeftConstraint
- setRepresentedItem:
- iconView
- didUpdateModel
- canRemoveItem
- setIconView:
- setTextContainerView:
- textContainerView
- establishConstraints
- initWithFrame:
- dealloc
- titleLabel
- prepareForReuse
- setTitleLabel:
- challenge
- setChallenge:
@end
