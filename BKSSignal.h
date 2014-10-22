@interface BKSSignal : NSObject
{
	BOOL _signalled;
}

+ init
+ reset
+ signal
+ hasBeenSignalled
- init
- reset
- signal
- hasBeenSignalled
@end
