@interface NSFileAttributes : NSDictionary
{
	id dict;
	struct statInfo;
	struct catInfo;
	id extendedAttrs;
	int fileProtectionClass;
}

+ isDirectory
+ filePosixPermissions
+ fileOwnerAccountNumber
+ fileGroupOwnerAccountName
+ fileGroupOwnerAccountNumber
+ fileSystemNumber
+ fileSystemFileNumber
+ dealloc
+ count
+ isEqual:
+ hash
+ keyEnumerator
+ fileType
+ fileModificationDate
+ fileSize
+ fileOwnerAccountName
+ objectForKey:
- isDirectory
- filePosixPermissions
- fileOwnerAccountNumber
- fileGroupOwnerAccountName
- fileGroupOwnerAccountNumber
- fileSystemNumber
- fileSystemFileNumber
- dealloc
- count
- isEqual:
- hash
- keyEnumerator
- fileType
- fileModificationDate
- fileSize
- fileOwnerAccountName
- objectForKey:
@end
