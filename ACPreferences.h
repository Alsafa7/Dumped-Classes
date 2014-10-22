@interface ACPreferences : NSObject
{
	id _internalPreferences;
}

+ siriDidActivate
+ setSiriDidActivate:
+ listenOnActivation
+ setListenOnActivation:
+ tourGuideWasDisplayed
+ setTourGuideWasDisplayed:
+ init
+ _boolForKey:
+ preferences:didChangeValueForKey:
+ _setBool:forKey:
+ .cxx_destruct
- siriDidActivate
- setSiriDidActivate:
- listenOnActivation
- setListenOnActivation:
- tourGuideWasDisplayed
- setTourGuideWasDisplayed:
- init
- _boolForKey:
- preferences:didChangeValueForKey:
- _setBool:forKey:
- .cxx_destruct
@end
