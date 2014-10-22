@interface MPVolumeHUDController : NSObject
{
	id _contexts;
	id _categories;
}

+ setNeedsUpdate
+ mainContext
+ registerView:inContext:
+ unregisterView:inContext:
+ pushContext
+ _updateVisibility
+ _sliderIsVisible:
+ popContext
+ init
+ .cxx_destruct
- setNeedsUpdate
- mainContext
- registerView:inContext:
- unregisterView:inContext:
- pushContext
- _updateVisibility
- _sliderIsVisible:
- popContext
- init
- .cxx_destruct
@end
