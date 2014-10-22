@interface ABPeoplePickerNavigationControllerPromptHandler : NSObject
{
	id _ppnc;
	id _prompts;
}

+ promptForViewControllerType:orientation:
+ initWithNavigationController:
+ setPrompt:forViewControllerType:
+ _shouldShowPromptForOrientation:
+ indexForViewControllerType:
+ dealloc
+ willRotateToInterfaceOrientation:duration:
- promptForViewControllerType:orientation:
- initWithNavigationController:
- setPrompt:forViewControllerType:
- _shouldShowPromptForOrientation:
- indexForViewControllerType:
- dealloc
- willRotateToInterfaceOrientation:duration:
@end
