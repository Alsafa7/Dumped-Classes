@interface NSSQLFunctionExpressionIntermediate : NSSQLExpressionIntermediate
{

}

+ generateSQLStringInContext:
+ isFunctionScoped
+ _generateUncorrelatedSubqueryStringWithSymbol:forAttribute:inContext:
+ _generateCorrelatedSubqueryStringWithSymbol:forExpression:inContext:
+ _generateArgumentStringForCollection:inContext:
+ _generateSelectForAggregateStringWithSymbol:argument:inContext:
+ generateType1SQLString:inContext:
+ generateType2SQLString:inContext:
+ generateType3SQLString:keypathOnly:inContext:
+ _generateType4SQLForSymbol:inContext:
+ _generateSQLForCountInContext:
+ _generateMathStringWithSymbol:inContext:
+ _generateDistinctStringInContext:
- generateSQLStringInContext:
- isFunctionScoped
- _generateUncorrelatedSubqueryStringWithSymbol:forAttribute:inContext:
- _generateCorrelatedSubqueryStringWithSymbol:forExpression:inContext:
- _generateArgumentStringForCollection:inContext:
- _generateSelectForAggregateStringWithSymbol:argument:inContext:
- generateType1SQLString:inContext:
- generateType2SQLString:inContext:
- generateType3SQLString:keypathOnly:inContext:
- _generateType4SQLForSymbol:inContext:
- _generateSQLForCountInContext:
- _generateMathStringWithSymbol:inContext:
- _generateDistinctStringInContext:
@end
