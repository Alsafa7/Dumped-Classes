@interface NSMutableIndexSet : NSIndexSet
{
	pointer _reserved;
}

+ initWithXPCEncoding:
+ copyXPCEncoding
+ __ck_intersectIndexes:
+ mf_intersectIndexes:
+ pl_adjustIndexesForDeletions:
+ pl_adjustIndexesForInsertions:
+ _ensureRangeCapacity:
+ _removeRangeInArrayAtIndex:
+ removeIndexesWithOptions:passingTest:
+ _replaceRangeInArrayAtIndex:withRange:
+ _insertRange:inArrayAtIndex:
+ _addRangeToArray:
+ _mergeOverlappingRangesStartingAtIndex:
+ _incrementBy:startingAtIndex:
+ _removeAndDecrementBy:startingAtIndex:
+ addIndexesFromIndexSet:
+ addIndexes:count:
+ removeIndexesFromIndexSet:
+ removeIndexesInRange:options:passingTest:
+ removeIndexesPassingTest:
+ classForCoder
+ addIndex:
+ removeIndex:
+ removeAllIndexes
+ addIndexes:
+ removeIndexes:
+ addIndexesInRange:
+ shiftIndexesStartingAtIndex:by:
+ removeIndexesInRange:
- initWithXPCEncoding:
- copyXPCEncoding
- __ck_intersectIndexes:
- mf_intersectIndexes:
- pl_adjustIndexesForDeletions:
- pl_adjustIndexesForInsertions:
- _ensureRangeCapacity:
- _removeRangeInArrayAtIndex:
- removeIndexesWithOptions:passingTest:
- _replaceRangeInArrayAtIndex:withRange:
- _insertRange:inArrayAtIndex:
- _addRangeToArray:
- _mergeOverlappingRangesStartingAtIndex:
- _incrementBy:startingAtIndex:
- _removeAndDecrementBy:startingAtIndex:
- addIndexesFromIndexSet:
- addIndexes:count:
- removeIndexesFromIndexSet:
- removeIndexesInRange:options:passingTest:
- removeIndexesPassingTest:
- classForCoder
- addIndex:
- removeIndex:
- removeAllIndexes
- addIndexes:
- removeIndexes:
- addIndexesInRange:
- shiftIndexesStartingAtIndex:by:
- removeIndexesInRange:
@end
