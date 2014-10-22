@interface GKLeaderboardScoreCell : GKCollectionViewCell
{
	BOOL _isAchievementCell;
	id _iconView;
	id _nameLabel;
	id _scoreLabel;
	id _rankLabel;
}

+ initialContraints
+ rankLabel
+ scoreLabel
+ isAchievementCell
+ setIsAchievementCell:
+ setScoreLabel:
+ setRankLabel:
+ score
+ setScore:
+ setRepresentedItem:
+ iconView
+ didUpdateModel
+ canRemoveItem
+ nameLabel
+ setNameLabel:
+ setIconView:
+ initWithFrame:
+ dealloc
+ prepareForReuse
- initialContraints
- rankLabel
- scoreLabel
- isAchievementCell
- setIsAchievementCell:
- setScoreLabel:
- setRankLabel:
- score
- setScore:
- setRepresentedItem:
- iconView
- didUpdateModel
- canRemoveItem
- nameLabel
- setNameLabel:
- setIconView:
- initWithFrame:
- dealloc
- prepareForReuse
@end
