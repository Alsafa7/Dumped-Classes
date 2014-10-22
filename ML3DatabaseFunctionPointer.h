@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction
{
	pointer _functionPointer;
	pointer _userData;
}

+ userData
+ setUserData:
+ registerWithConnection:
+ functionPointer
+ setFunctionPointer:
- userData
- setUserData:
- registerWithConnection:
- functionPointer
- setFunctionPointer:
@end
