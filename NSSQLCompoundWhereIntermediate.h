@interface NSSQLCompoundWhereIntermediate : NSSQLWhereIntermediate
{
	id _subclauses;
}

+ initWithPredicate:inScope:inContext:
+ generateSQLStringInContext:
+ _generateMulticlauseStringInContext:
+ isOrScoped
+ dealloc
- initWithPredicate:inScope:inContext:
- generateSQLStringInContext:
- _generateMulticlauseStringInContext:
- isOrScoped
- dealloc
@end
