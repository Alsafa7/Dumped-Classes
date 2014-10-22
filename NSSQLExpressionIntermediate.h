@interface NSSQLExpressionIntermediate : NSSQLIntermediate
{
	id _expression;
	BOOL _allowToMany;
}

+ initWithExpression:allowToMany:inScope:
- initWithExpression:allowToMany:inScope:
@end
