@interface _ML3DatabaseConnectionWrapper : NSObject
{
	id _connection;
	id _owningThread;
	id _borrowingThread;
	usigned long long _useCount;
}

+ description
+ connection
+ initWithConnection:
+ setConnection:
+ useCount
+ setUseCount:
+ owningThread
+ setOwningThread:
+ borrowingThread
+ setBorrowingThread:
+ .cxx_destruct
- description
- connection
- initWithConnection:
- setConnection:
- useCount
- setUseCount:
- owningThread
- setOwningThread:
- borrowingThread
- setBorrowingThread:
- .cxx_destruct
@end
