@interface ML3Predicate : NSObject
{

}

+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ copyWithZone:
+ SQLJoinClausesForClass:
+ appendSQLToMutableString:entityClass:
+ databaseStatementParameters
+ SQLForEntityClass:
+ predicateOptimizedForEntityClass:
+ isDynamicForEntityClass:
+ spotlightPredicate
+ isTrueAlways
+ isFalseAlways
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- copyWithZone:
- SQLJoinClausesForClass:
- appendSQLToMutableString:entityClass:
- databaseStatementParameters
- SQLForEntityClass:
- predicateOptimizedForEntityClass:
- isDynamicForEntityClass:
- spotlightPredicate
- isTrueAlways
- isFalseAlways
@end
