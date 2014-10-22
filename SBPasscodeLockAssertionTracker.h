@interface SBPasscodeLockAssertionTracker : NSObject
{
	pointer _mkbAssertion;
	id _assertions;
}

+ mkbAssertionOptions
+ removeAssertion:
+ hasActiveAssertions
+ dealloc
+ init
+ description
+ addAssertion:
- mkbAssertionOptions
- removeAssertion:
- hasActiveAssertions
- dealloc
- init
- description
- addAssertion:
@end
