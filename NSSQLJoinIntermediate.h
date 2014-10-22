@interface NSSQLJoinIntermediate : NSSQLIntermediate
{
	id _relationship;
	id _sourceAlias;
	id _destinationAlias;
	id _correlationAlias;
	usigned long long _type;
	BOOL _direct;
}

+ relationship
+ destinationEntity
+ generateSQLStringInContext:
+ sourceEntity
+ setJoinType:
+ destinationAlias
+ initForRelationship:sourceAlias:destinationAlias:correlationAlias:direct:inScope:
+ sourceAlias
+ setSourceAlias:
+ _generateToOneSQLStringInContext:
+ _generateToManySQLStringInContext:
+ _generateManyToManySQLStringInContext:
+ isDirect
+ setDirect:
+ setDestinationAlias:
+ correlationAlias
+ joinType
+ dealloc
+ description
- relationship
- destinationEntity
- generateSQLStringInContext:
- sourceEntity
- setJoinType:
- destinationAlias
- initForRelationship:sourceAlias:destinationAlias:correlationAlias:direct:inScope:
- sourceAlias
- setSourceAlias:
- _generateToOneSQLStringInContext:
- _generateToManySQLStringInContext:
- _generateManyToManySQLStringInContext:
- isDirect
- setDirect:
- setDestinationAlias:
- correlationAlias
- joinType
- dealloc
- description
@end
