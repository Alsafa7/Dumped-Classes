@interface GKPlayerGameCell : GKBaseGameCell
{
	id _statsLabel;
	id _dateLabel;
}

+ didUpdateModel
+ canRemoveItem
+ statsLabel
+ achievementsStringWithGameRecord:
+ leaderboardStringWithGameRecord:
+ setStatsLabel:
+ setDateLabel:
+ initWithFrame:
+ dealloc
+ prepareForReuse
+ dateLabel
- didUpdateModel
- canRemoveItem
- statsLabel
- achievementsStringWithGameRecord:
- leaderboardStringWithGameRecord:
- setStatsLabel:
- setDateLabel:
- initWithFrame:
- dealloc
- prepareForReuse
- dateLabel
@end
