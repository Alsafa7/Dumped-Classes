@interface ML3DatabaseStatementRenderer : NSObject
{

}

+ rollbackTranscationStatementToSavepointName:
+ beginTransactionStatementWithBehaviorType:
+ commitTransactionStatement
+ rollbackTranscationStatement
+ savepointStatementWithName:
+ savepointReleaseStatementWithName:
+ insertStatementWithOptions:
+ insertStatementForTableName:columnNames:
+ insertStatementUsingDefaultValuesForTableName:
+ statementWithPrefix:inParameterCount:
- rollbackTranscationStatementToSavepointName:
- beginTransactionStatementWithBehaviorType:
- commitTransactionStatement
- rollbackTranscationStatement
- savepointStatementWithName:
- savepointReleaseStatementWithName:
- insertStatementWithOptions:
- insertStatementForTableName:columnNames:
- insertStatementUsingDefaultValuesForTableName:
- statementWithPrefix:inParameterCount:
@end
