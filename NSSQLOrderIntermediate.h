@interface NSSQLOrderIntermediate : NSSQLIntermediate
{
	id _sortDescriptors;
}

+ generateSQLStringInContext:
+ initWithSortDescriptors:inScope:
+ _generateSQLForOrderedManyToManyInverse:inContext:
+ _generateSQLForOrderedToManyInverse:inContext:
+ dealloc
- generateSQLStringInContext:
- initWithSortDescriptors:inScope:
- _generateSQLForOrderedManyToManyInverse:inContext:
- _generateSQLForOrderedToManyInverse:inContext:
- dealloc
@end
