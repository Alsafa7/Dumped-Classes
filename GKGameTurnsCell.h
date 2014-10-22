@interface GKGameTurnsCell : GKBaseGameTurnsCell
{
	id _activeMatchesLabel;
	id _localPlayerTurnsLabel;
	usigned long long _numberOfActiveMatches;
	usigned long long _numberOfLocalPlayerTurns;
	id _statusImageView;
}

+ didUpdateModel
+ numberOfActiveMatches
+ numberOfLocalPlayerTurns
+ setNumberOfActiveMatches:
+ setNumberOfLocalPlayerTurns:
+ activeMatchesLabel
+ localPlayerTurnsLabel
+ setActiveMatchesLabel:
+ setLocalPlayerTurnsLabel:
+ statusImageView
+ setStatusImageView:
+ initWithFrame:
+ dealloc
- didUpdateModel
- numberOfActiveMatches
- numberOfLocalPlayerTurns
- setNumberOfActiveMatches:
- setNumberOfLocalPlayerTurns:
- activeMatchesLabel
- localPlayerTurnsLabel
- setActiveMatchesLabel:
- setLocalPlayerTurnsLabel:
- statusImageView
- setStatusImageView:
- initWithFrame:
- dealloc
@end
