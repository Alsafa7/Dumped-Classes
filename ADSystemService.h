@interface ADSystemService : ADService
{
	pointer _commandMap;
}

+ handleCommand:forDomain:reply:
+ commandsForDomain:
+ lockRestrictedCommands
+ implementsCommand:forDomain:
+ _systemDomains
+ dealloc
+ init
+ handle
+ domains
+ isSystemService
- handleCommand:forDomain:reply:
- commandsForDomain:
- lockRestrictedCommands
- implementsCommand:forDomain:
- _systemDomains
- dealloc
- init
- handle
- domains
- isSystemService
@end
