@interface ML3TruthPredicate : ML3Predicate
{
	BOOL _truthValue;
}

+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ appendSQLToMutableString:entityClass:
+ isTrueAlways
+ isFalseAlways
+ _predicateString
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- appendSQLToMutableString:entityClass:
- isTrueAlways
- isFalseAlways
- _predicateString
@end
