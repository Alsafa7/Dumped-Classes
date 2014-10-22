@interface NSSQLAliasGenerator : NSObject
{
	unsigned int _nextTableAlias;
	unsigned int _nextVariableAlias;
	unsigned int _nextTempTableAlias;
	id _tableBase;
	id _variableBase;
}

+ initWithNestingLevel:
+ generateTableAlias
+ generateSubqueryVariableAlias
+ generateTempTableName
+ dealloc
+ init
- initWithNestingLevel:
- generateTableAlias
- generateSubqueryVariableAlias
- generateTempTableName
- dealloc
- init
@end
