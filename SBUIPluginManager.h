@interface SBUIPluginManager : SBPluginManager
{
	id _uiPlugins;
	id _pendingActivation;
	id _hostPendingActivation;
}

+ handleActivationEvent:
+ handleMenuButtonDownEvent
+ overrideInterfaceOrientation:
+ loadedUIPlugins
+ _loadedUIPluginHostsVisible:
+ loadedUIPluginHosts
+ setHostPendingActivation:
+ hostPendingActivation
+ loadUIPluginNamed:withHost:
+ unloadUIPlugin:forHost:
+ suppressingNotifications
+ overrideScreenDimInterval:
+ handleMenuButtonTap
+ wantsActivationEvent:interval:
+ prepareForActivationEvent:afterInterval:
+ cancelPendingActivationEvent:
- handleActivationEvent:
- handleMenuButtonDownEvent
- overrideInterfaceOrientation:
- loadedUIPlugins
- _loadedUIPluginHostsVisible:
- loadedUIPluginHosts
- setHostPendingActivation:
- hostPendingActivation
- loadUIPluginNamed:withHost:
- unloadUIPlugin:forHost:
- suppressingNotifications
- overrideScreenDimInterval:
- handleMenuButtonTap
- wantsActivationEvent:interval:
- prepareForActivationEvent:afterInterval:
- cancelPendingActivationEvent:
@end
