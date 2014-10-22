@interface GKFriendRequestsCell : GKCollectionViewCell
{
	BOOL _didSetupLineLayoutConstraints;
	id _friendRequests;
	id _titleLabel;
	id _subtitleLabel;
	id _caretView;
	id _iconView;
	id _metricsOverrides;
}

+ setMetricsOverrides:
+ iconView
+ updateLineLayoutConstraints
+ didUpdateModel
+ canRemoveItem
+ setIconView:
+ metricsOverrides
+ didSetupLineLayoutConstraints
+ setDidSetupLineLayoutConstraints:
+ players
+ setPlayers:
+ friendRequests
+ setFriendRequests:
+ setSubtitleLabel:
+ setCaretView:
+ initWithFrame:
+ dealloc
+ titleLabel
+ prepareForReuse
+ subtitleLabel
+ updateConstraints
+ caretView
+ setTitleLabel:
- setMetricsOverrides:
- iconView
- updateLineLayoutConstraints
- didUpdateModel
- canRemoveItem
- setIconView:
- metricsOverrides
- didSetupLineLayoutConstraints
- setDidSetupLineLayoutConstraints:
- players
- setPlayers:
- friendRequests
- setFriendRequests:
- setSubtitleLabel:
- setCaretView:
- initWithFrame:
- dealloc
- titleLabel
- prepareForReuse
- subtitleLabel
- updateConstraints
- caretView
- setTitleLabel:
@end
