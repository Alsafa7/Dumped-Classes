@interface MBDomainManager : NSObject
{
	id _domainsByName;
}

+ initWithDomains:
+ domainForPath:relativePath:
+ addDomainForApp:createPlaceholder:cache:
+ domainForName:
+ allDomains
+ redirectDomain:forRelativePath:
+ dealloc
- initWithDomains:
- domainForPath:relativePath:
- addDomainForApp:createPlaceholder:cache:
- domainForName:
- allDomains
- redirectDomain:forRelativePath:
- dealloc
@end
