@interface NSConcretePipe : NSPipe
{
	id _readHandle;
	id _writeHandle;
}

+ fileHandleForReading
+ fileHandleForWriting
+ dealloc
+ init
+ copyWithZone:
- fileHandleForReading
- fileHandleForWriting
- dealloc
- init
- copyWithZone:
@end
