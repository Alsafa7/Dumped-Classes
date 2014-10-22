@interface ABContactCreateNewContactAction : ABContactAction
{
	id _createdContact;
	id _presentingViewController;
}

+ performActionWithSender:
+ newPersonViewController:didCompleteWithNewPerson:
+ setCreatedContact:
+ createdContact
+ dealloc
+ presentingViewController
+ setPresentingViewController:
- performActionWithSender:
- newPersonViewController:didCompleteWithNewPerson:
- setCreatedContact:
- createdContact
- dealloc
- presentingViewController
- setPresentingViewController:
@end
