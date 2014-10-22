@interface LASpeechListener : NSObject
{

}

+ activator:requiresInfoDictionaryValueOfKey:forListenerWithName:
+ activator:requiresNeedsPoweredDisplayForListenerName:
+ activator:requiresExclusiveAssignmentGroupsForListenerName:
+ activator:requiresGlyphImageDescriptorForListenerName:
+ activator:requiresSupportsRemovalForListenerWithName:
+ activator:requestsRemovalForListenerWithName:
+ activator:requiresConfigurationViewControllerClassNameForListenerWithName:bundle:
+ activator:requiresLocalizedTitleForListenerName:
+ activator:requiresLocalizedGroupForListenerName:
+ activator:requiresLocalizedDescriptionForListenerName:
+ configurationViewControllerClassNameForListenerEmitterName:bundle:
+ activator:receiveEvent:forListenerName:
+ activator:receivePreviewEventForListenerName:
+ activator:requestsConfigurationForListenerWithName:
+ activator:didSaveNewConfiguration:forListenerWithName:
+ activator:addAvailableListenersToArray:
+ activator:supportsListenerName:
+ localizedTitleForListenerEmitterName:
+ localizedDescriptionForListenerEmitterName:
+ newListenerNameForListenerEmitterWithName:withConfiguration:
+ preference
+ speechSynthesizer:didFinishSpeechUtterance:
+ speechSynthesizer:didCancelSpeechUtterance:
- activator:requiresInfoDictionaryValueOfKey:forListenerWithName:
- activator:requiresNeedsPoweredDisplayForListenerName:
- activator:requiresExclusiveAssignmentGroupsForListenerName:
- activator:requiresGlyphImageDescriptorForListenerName:
- activator:requiresSupportsRemovalForListenerWithName:
- activator:requestsRemovalForListenerWithName:
- activator:requiresConfigurationViewControllerClassNameForListenerWithName:bundle:
- activator:requiresLocalizedTitleForListenerName:
- activator:requiresLocalizedGroupForListenerName:
- activator:requiresLocalizedDescriptionForListenerName:
- configurationViewControllerClassNameForListenerEmitterName:bundle:
- activator:receiveEvent:forListenerName:
- activator:receivePreviewEventForListenerName:
- activator:requestsConfigurationForListenerWithName:
- activator:didSaveNewConfiguration:forListenerWithName:
- activator:addAvailableListenersToArray:
- activator:supportsListenerName:
- localizedTitleForListenerEmitterName:
- localizedDescriptionForListenerEmitterName:
- newListenerNameForListenerEmitterWithName:withConfiguration:
- preference
- speechSynthesizer:didFinishSpeechUtterance:
- speechSynthesizer:didCancelSpeechUtterance:
@end
