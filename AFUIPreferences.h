@interface AFUIPreferences : NSObject
{
	id _userDefaults;
	id _delegate;
}

+ doubleForKey:
+ setInteger:forKey:
+ setDelegate:
+ init
+ delegate
+ boolForKey:
+ synchronize
+ stringForKey:
+ setBool:forKey:
+ integerForKey:
+ initWithDefaultsAtURL:
+ _mutateValueForKey:block:
+ initWithDefaultsResource:withExtension:inBundle:
+ objectForKey:
+ setObject:forKey:
+ .cxx_destruct
- doubleForKey:
- setInteger:forKey:
- setDelegate:
- init
- delegate
- boolForKey:
- synchronize
- stringForKey:
- setBool:forKey:
- integerForKey:
- initWithDefaultsAtURL:
- _mutateValueForKey:block:
- initWithDefaultsResource:withExtension:inBundle:
- objectForKey:
- setObject:forKey:
- .cxx_destruct
@end
