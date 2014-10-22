@interface _UILayoutGuide : UIView
{
	BOOL _allowsArchivingAsSubview;
	BOOL _horizontal;
	id _constraintsToRemoveAtRuntime;
	id _archivedIdentifier;
}

+ initWithFrame:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ length
+ _allowsArchivingAsSubview
+ _archivedIdentifier
+ _constraintsToRemoveAtRuntime
+ _setConstraintsToRemoveAtRuntime:
+ isHorizontal
+ _relevantLayoutVariables
+ _setUpCounterDimensionConstraint
+ _setAllowsArchivingAsSubview:
+ _setArchivedIdentifier:
+ _setHorizontal:
- initWithFrame:
- dealloc
- initWithCoder:
- encodeWithCoder:
- length
- _allowsArchivingAsSubview
- _archivedIdentifier
- _constraintsToRemoveAtRuntime
- _setConstraintsToRemoveAtRuntime:
- isHorizontal
- _relevantLayoutVariables
- _setUpCounterDimensionConstraint
- _setAllowsArchivingAsSubview:
- _setArchivedIdentifier:
- _setHorizontal:
@end
