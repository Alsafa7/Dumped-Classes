@interface NSSQLLimitIntermediate : NSSQLIntermediate
{
	usigned long long _limit;
}

+ generateSQLStringInContext:
+ initWithLimit:inScope:
- generateSQLStringInContext:
- initWithLimit:inScope:
@end
