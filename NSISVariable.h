@interface NSISVariable : NSObject
{
	id _delegate;
	int _refCount;
	unsigned int _ident;
}

+ shouldBeIntegral
+ valueRestriction
+ markedConstraint
+ markedConstraintIsEligibleForIntegralizationAdjustment
+ allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint
+ valueIsUserVisible
+ shouldBeMinimized
+ release
+ retain
+ setDelegate:
+ init
+ hash
+ retainCount
+ description
+ delegate
+ _tryRetain
+ _isDeallocating
- shouldBeIntegral
- valueRestriction
- markedConstraint
- markedConstraintIsEligibleForIntegralizationAdjustment
- allowedMagnitudeForIntegralizationAdjustmentOfMarkedConstraint
- valueIsUserVisible
- shouldBeMinimized
- release
- retain
- setDelegate:
- init
- hash
- retainCount
- description
- delegate
- _tryRetain
- _isDeallocating
@end
