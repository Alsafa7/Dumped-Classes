@interface ABContactAddToExistingContactAction : ABContactAction
{
	id _chosenContact;
	id _peoplePicker;
}

+ performActionWithSender:
+ setChosenContact:
+ chosenContact
+ newPersonViewController:didCompleteWithNewPerson:
+ dealloc
+ peoplePicker
+ setPeoplePicker:
+ peoplePickerNavigationControllerDidCancel:
+ peoplePickerNavigationController:shouldContinueAfterSelectingPerson:
+ peoplePickerNavigationController:shouldContinueAfterSelectingPerson:property:identifier:
- performActionWithSender:
- setChosenContact:
- chosenContact
- newPersonViewController:didCompleteWithNewPerson:
- dealloc
- peoplePicker
- setPeoplePicker:
- peoplePickerNavigationControllerDidCancel:
- peoplePickerNavigationController:shouldContinueAfterSelectingPerson:
- peoplePickerNavigationController:shouldContinueAfterSelectingPerson:property:identifier:
@end
