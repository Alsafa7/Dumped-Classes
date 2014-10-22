@interface NSSQLSimpleWhereIntermediate : NSSQLWhereIntermediate
{
	id _comparisonPredicateScopedItem;
	id _effectiveLeftExpression;
	id _effectiveRightExpression;
}

+ initWithPredicate:inScope:
+ generateSQLStringInContext:
+ _lastScopedItem
+ _isNilExpression:
+ _generateSQLType3InContext:
+ _sqlTokenForPredicateOperator:inContext:
+ _cfStringOptionsFromPredicateOptions:
+ _generateSQLForString:expressionPath:wildStart:wildEnd:allowToMany:inContext:
+ _upperBoundSearchStringForString:context:
+ _generateSQLSubstringWildStart:wildEnd:inContext:
+ _entityDestinationIfKeyOfSomeSort:
+ _generateSQLForConstKeyArray:targetEntity:inContext:
+ _generateSQLForConst:inManyToMany:expression:inContext:
+ _generateSQLForConst:inToMany:inContext:
+ _generateSQLForConst:inAttribute:expression:inContext:
+ _generateSQLType1InContext:
+ _generateSQLType2InContext:
+ _generateSQLForMatchingOperator:inContext:
+ _generateSQLBeginsWithStringInContext:
+ _generateSQLEndsWithStringInContext:
+ _generateSQLContainmentStringInContext:
+ _generateSQLBetweenStringInContext:
+ _generateSQLForWildSubStringForGlob:wildStart:wildEnd:
+ dealloc
- initWithPredicate:inScope:
- generateSQLStringInContext:
- _lastScopedItem
- _isNilExpression:
- _generateSQLType3InContext:
- _sqlTokenForPredicateOperator:inContext:
- _cfStringOptionsFromPredicateOptions:
- _generateSQLForString:expressionPath:wildStart:wildEnd:allowToMany:inContext:
- _upperBoundSearchStringForString:context:
- _generateSQLSubstringWildStart:wildEnd:inContext:
- _entityDestinationIfKeyOfSomeSort:
- _generateSQLForConstKeyArray:targetEntity:inContext:
- _generateSQLForConst:inManyToMany:expression:inContext:
- _generateSQLForConst:inToMany:inContext:
- _generateSQLForConst:inAttribute:expression:inContext:
- _generateSQLType1InContext:
- _generateSQLType2InContext:
- _generateSQLForMatchingOperator:inContext:
- _generateSQLBeginsWithStringInContext:
- _generateSQLEndsWithStringInContext:
- _generateSQLContainmentStringInContext:
- _generateSQLBetweenStringInContext:
- _generateSQLForWildSubStringForGlob:wildStart:wildEnd:
- dealloc
@end
