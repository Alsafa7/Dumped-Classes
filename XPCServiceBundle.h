@interface XPCServiceBundle : NSObject
{
	id _bundle;
	id _serviceIdentifier;
	long long _serviceIdentifierPredicate;
	id _executablePath;
	long long _executablePathPredicate;
	id _realExecutablePath;
	long long _realExecutablePathPredicate;
	long long _serviceType;
	long long _serviceTypePredicate;
	id _serviceDictionary;
	long long _serviceDictionaryPredicate;
	id _launchdJobDictionary;
	long long _launchdJobDictionaryPredicate;
	id _xpcJobData;
	long long _xpcJobDataPredicate;
}

+ dealloc
+ description
+ executablePath
+ identifier
+ bundle
+ initWithBundle:
+ serviceType
+ initWithArchive:
+ serviceDictionary
+ stringForServiceDictionaryKey:
+ launchdJobDictionary
+ realExecutablePath
+ descriptionWithIndent:
+ objectForServiceDictionaryKey:
+ launchdJobPropertyListData
+ archiveForCache
+ boolForServiceDictionaryKey:
+ dictionaryForServiceDictionaryKey:
+ arrayForServiceDictionaryKey:
+ isSystemService
+ launchdJobPropertyListString
+ launchdJobLaunchData
+ xpcJobData
- dealloc
- description
- executablePath
- identifier
- bundle
- initWithBundle:
- serviceType
- initWithArchive:
- serviceDictionary
- stringForServiceDictionaryKey:
- launchdJobDictionary
- realExecutablePath
- descriptionWithIndent:
- objectForServiceDictionaryKey:
- launchdJobPropertyListData
- archiveForCache
- boolForServiceDictionaryKey:
- dictionaryForServiceDictionaryKey:
- arrayForServiceDictionaryKey:
- isSystemService
- launchdJobPropertyListString
- launchdJobLaunchData
- xpcJobData
@end
