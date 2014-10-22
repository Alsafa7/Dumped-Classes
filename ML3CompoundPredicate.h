@interface ML3CompoundPredicate : ML3Predicate
{
	id _predicates;
}

+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ SQLJoinClausesForClass:
+ appendSQLToMutableString:entityClass:
+ databaseStatementParameters
+ predicateOptimizedForEntityClass:
+ isDynamicForEntityClass:
+ spotlightPredicate
+ setPredicates:
+ predicates
+ initWithPredicates:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- SQLJoinClausesForClass:
- appendSQLToMutableString:entityClass:
- databaseStatementParameters
- predicateOptimizedForEntityClass:
- isDynamicForEntityClass:
- spotlightPredicate
- setPredicates:
- predicates
- initWithPredicates:
- .cxx_destruct
@end
