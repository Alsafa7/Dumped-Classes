@interface UIAssignToContactActivity : UIActivity
{
	id _image;
	id _peoplePicker;
	pointer _person;
	id _imagePickerController;
}

+ dealloc
+ setImage:
+ image
+ imagePickerControllerDidCancel:
+ imagePickerController:didFinishPickingMediaWithInfo:
+ _activityImage
+ activityTitle
+ activityType
+ canPerformWithActivityItems:
+ _cleanup
+ activityViewController
+ prepareWithActivityItems:
+ _embeddedActivityViewController
+ _willPresentAsFormSheet
+ peoplePicker
+ setPeoplePicker:
+ imagePickerController
+ setImagePickerController:
+ peoplePickerNavigationControllerDidCancel:
+ peoplePickerNavigationController:shouldContinueAfterSelectingPerson:
+ peoplePickerNavigationController:shouldContinueAfterSelectingPerson:property:identifier:
+ person
+ setPerson:
- dealloc
- setImage:
- image
- imagePickerControllerDidCancel:
- imagePickerController:didFinishPickingMediaWithInfo:
- _activityImage
- activityTitle
- activityType
- canPerformWithActivityItems:
- _cleanup
- activityViewController
- prepareWithActivityItems:
- _embeddedActivityViewController
- _willPresentAsFormSheet
- peoplePicker
- setPeoplePicker:
- imagePickerController
- setImagePickerController:
- peoplePickerNavigationControllerDidCancel:
- peoplePickerNavigationController:shouldContinueAfterSelectingPerson:
- peoplePickerNavigationController:shouldContinueAfterSelectingPerson:property:identifier:
- person
- setPerson:
@end
