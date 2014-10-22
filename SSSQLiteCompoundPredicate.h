@interface SSSQLiteCompoundPredicate : SSSQLitePredicate
{
	id _combinationOperation;
	id _predicates;
}

+ dealloc
+ isEqual:
+ hash
+ copyWithZone:
+ SQLForEntityClass:
+ predicates
+ bindToStatement:bindingIndex:
+ SQLJoinClausesForEntityClass:
- dealloc
- isEqual:
- hash
- copyWithZone:
- SQLForEntityClass:
- predicates
- bindToStatement:bindingIndex:
- SQLJoinClausesForEntityClass:
@end
