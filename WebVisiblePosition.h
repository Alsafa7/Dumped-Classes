@interface WebVisiblePosition : NSObject
{
	pointer _internal;
}

+ _visiblePosition
+ dealloc
+ isEqual:
+ description
+ isEditable
+ compare:
+ affinity
+ atBoundaryOfGranularity:inDirection:
+ enclosingTextUnitOfGranularity:inDirectionIfAtBoundary:
+ positionOfNextBoundaryOfGranularity:inDirection:
+ distanceFromPosition:
+ positionByMovingInDirection:amount:
+ positionByMovingInDirection:amount:withAffinityDownstream:
+ withinTextUnitOfGranularity:inDirectionIfAtBoundary:
+ enclosingRangeWithCorrectionIndicator
+ positionAtStartOrEndOfWord
+ setAffinity:
+ textDirection
+ directionIsDownstream:
+ requiresContextForWordBoundary
+ atAlphaNumericBoundaryInDirection:
+ enclosingRangeWithDictationPhraseAlternatives:
- _visiblePosition
- dealloc
- isEqual:
- description
- isEditable
- compare:
- affinity
- atBoundaryOfGranularity:inDirection:
- enclosingTextUnitOfGranularity:inDirectionIfAtBoundary:
- positionOfNextBoundaryOfGranularity:inDirection:
- distanceFromPosition:
- positionByMovingInDirection:amount:
- positionByMovingInDirection:amount:withAffinityDownstream:
- withinTextUnitOfGranularity:inDirectionIfAtBoundary:
- enclosingRangeWithCorrectionIndicator
- positionAtStartOrEndOfWord
- setAffinity:
- textDirection
- directionIsDownstream:
- requiresContextForWordBoundary
- atAlphaNumericBoundaryInDirection:
- enclosingRangeWithDictationPhraseAlternatives:
@end
