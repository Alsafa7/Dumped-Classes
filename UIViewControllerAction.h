@interface UIViewControllerAction : NSObject
{
	id _viewController;
	id _name;
	int _transition;
	id _completion;
	double _curlUpRevealedHeight;
}

+ dealloc
+ setName:
+ name
+ _curlUpRevealedHeight
+ completion
+ setCompletion:
+ setViewController:
+ setTransition:
+ transition
+ initWithViewController:name:transition:
+ animated
+ _setCurlUpRevealedHeight:
+ viewController
- dealloc
- setName:
- name
- _curlUpRevealedHeight
- completion
- setCompletion:
- setViewController:
- setTransition:
- transition
- initWithViewController:name:transition:
- animated
- _setCurlUpRevealedHeight:
- viewController
@end
