@interface SBGestureRecognizer : NSObject
{
	usigned long long m_types;
	int m_state;
	id m_handler;
	usigned long long m_activeTouchesCount;
	Array m_activeTouches;
	usigned long long m_strikes;
	usigned long long m_templateMatches;
	id m_touchTemplates;
	BOOL m_includedInGestureRecognitionIsPossibleTest;
	BOOL m_sendsTouchesCancelledToApplication;
	id m_canBeginCondition;
	struct m_maximumAllowedExclusiveMovement;
}

+ setSendsTouchesCancelledToApplication:
+ setCanBeginCondition:
+ includedInGestureRecognitionIsPossibleTest
+ _appendDescription:forTypes:
+ shouldReceiveTouches
+ sendsTouchesCancelledToApplication
+ isRecognized
+ shouldReportRecognitionPossibleToAppsForTotalMotion:
+ addTouchTemplate:
+ templateMatch
+ setIncludedInGestureRecognitionIsPossibleTest:
+ canBeginCondition
+ maximumAllowedExclusiveMovement
+ setMaximumAllowedExclusiveMovement:
+ types
+ dealloc
+ init
+ description
+ state
+ setState:
+ reset
+ setHandler:
+ handler
+ setTypes:
+ touchesBegan:
+ touchesMoved:
+ touchesEnded:
+ touchesCancelled:
- setSendsTouchesCancelledToApplication:
- setCanBeginCondition:
- includedInGestureRecognitionIsPossibleTest
- _appendDescription:forTypes:
- shouldReceiveTouches
- sendsTouchesCancelledToApplication
- isRecognized
- shouldReportRecognitionPossibleToAppsForTotalMotion:
- addTouchTemplate:
- templateMatch
- setIncludedInGestureRecognitionIsPossibleTest:
- canBeginCondition
- maximumAllowedExclusiveMovement
- setMaximumAllowedExclusiveMovement:
- types
- dealloc
- init
- description
- state
- setState:
- reset
- setHandler:
- handler
- setTypes:
- touchesBegan:
- touchesMoved:
- touchesEnded:
- touchesCancelled:
@end
