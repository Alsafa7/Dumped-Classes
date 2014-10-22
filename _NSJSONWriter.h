@interface _NSJSONWriter : NSObject
{
	id outputStream;
	int kind;
	char *dataBuffer;
	usigned long long dataBufferLen;
	usigned long long dataLen;
	BOOL freeDataBuffer;
	char *tempBuffer;
	usigned long long tempBufferLen;
	long long totalDataWritten;
}

+ resizeTemporaryBuffer:
+ dataWithRootObject:options:error:
+ writeRootObject:toStream:options:error:
+ appendString:range:
+ dealloc
+ init
+ finalize
- resizeTemporaryBuffer:
- dataWithRootObject:options:error:
- writeRootObject:toStream:options:error:
- appendString:range:
- dealloc
- init
- finalize
@end
