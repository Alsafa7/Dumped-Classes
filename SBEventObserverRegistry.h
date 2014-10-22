@interface SBEventObserverRegistry : SBAwayViewPluginController
{
	pointer _provider;
	id _observers;
}

+ postEventToInterestedObservers:
+ addObserverWithToken:forEvent:
+ removeObserverWithToken:forEvent:
+ handleEvent:token:action:
+ setValue:forState:
+ init
- postEventToInterestedObservers:
- addObserverWithToken:forEvent:
- removeObserverWithToken:forEvent:
- handleEvent:token:action:
- setValue:forState:
- init
@end
