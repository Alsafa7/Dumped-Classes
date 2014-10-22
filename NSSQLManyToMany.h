@interface NSSQLManyToMany : NSSQLRelationship
{
	id _correlationTableName;
	id _columnName;
	id _orderColumnName;
}

+ columnName
+ correlationTableName
+ inverseColumnName
+ inverseOrderColumnName
+ orderColumnName
+ columnSQLType
+ orderColumnSQLType
+ initWithEntity:propertyDescription:
+ _setColumnName:
+ isMaster
+ isReflexive
+ inverseManyToMany
+ _setInverseManyToMany:
+ _setCorrelationTableName:
+ _setOrderColumnName:
+ isTableSchemaEqual:
+ dealloc
- columnName
- correlationTableName
- inverseColumnName
- inverseOrderColumnName
- orderColumnName
- columnSQLType
- orderColumnSQLType
- initWithEntity:propertyDescription:
- _setColumnName:
- isMaster
- isReflexive
- inverseManyToMany
- _setInverseManyToMany:
- _setCorrelationTableName:
- _setOrderColumnName:
- isTableSchemaEqual:
- dealloc
@end
