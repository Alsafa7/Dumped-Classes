@interface SBUIKeyboardEnablementManager : NSObject
{
	id _disabledContexts;
	BOOL _disabled;
}

+ dealloc
+ init
+ description
+ disableAutomaticAppearanceForContext:
+ enableAutomaticAppearanceForContext:
- dealloc
- init
- description
- disableAutomaticAppearanceForContext:
- enableAutomaticAppearanceForContext:
@end
