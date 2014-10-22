@interface NSSQLPredicateAnalyser : NSObject
{
	BOOL _compoundPredicate;
	id _keys;
	id _allModifierPredicates;
	id _setExpressions;
	id _subqueries;
}

+ visitPredicate:
+ visitPredicateExpression:
+ allModifierPredicates
+ visitPredicateOperator:
+ keypaths
+ subqueries
+ setExpressions
+ dealloc
+ init
- visitPredicate:
- visitPredicateExpression:
- allModifierPredicates
- visitPredicateOperator:
- keypaths
- subqueries
- setExpressions
- dealloc
- init
@end
