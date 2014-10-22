@interface GKGamePointsCompareCell : GKBaseGameCell
{
	id _friendPointsLabel;
	id _localPointsLabel;
	id _totalPointsLabel;
	id _achievementsCountLabel;
	id _localPlayerGameRecord;
}

+ constraintsForSideBySidePointsWithSuperview:leftPoints:rightPoints:toRightOf:
+ friendPointsLabel
+ setFriendPointsLabel:
+ localPointsLabel
+ setLocalPointsLabel:
+ totalPointsLabel
+ setTotalPointsLabel:
+ achievementsCountLabel
+ setAchievementsCountLabel:
+ didUpdateModel
+ localPlayerGameRecord
+ setLocalPlayerGameRecord:
+ initWithFrame:
+ dealloc
+ prepareForReuse
- constraintsForSideBySidePointsWithSuperview:leftPoints:rightPoints:toRightOf:
- friendPointsLabel
- setFriendPointsLabel:
- localPointsLabel
- setLocalPointsLabel:
- totalPointsLabel
- setTotalPointsLabel:
- achievementsCountLabel
- setAchievementsCountLabel:
- didUpdateModel
- localPlayerGameRecord
- setLocalPlayerGameRecord:
- initWithFrame:
- dealloc
- prepareForReuse
@end
