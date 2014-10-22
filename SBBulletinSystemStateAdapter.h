@interface SBBulletinSystemStateAdapter : NSObject
{
	id _stateProvider;
	BOOL _quietModeEnabled;
}

+ applicationRestrictionController:didUpdateVisibleTags:hiddenTags:
+ _lockStateChanged:
+ _screenDimmed:
+ _lostModeStateChanged
+ dealloc
+ init
- applicationRestrictionController:didUpdateVisibleTags:hiddenTags:
- _lockStateChanged:
- _screenDimmed:
- _lostModeStateChanged
- dealloc
- init
@end
