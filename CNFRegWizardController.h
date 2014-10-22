@interface CNFRegWizardController : PSSetupController
{
	id _regController;
	long long _serviceType;
	id _alertHandler;
	id _firstRunDelegate;
	id _resignListener;
	id _resumeListener;
	struct _wizardFlags;
	id _backdropView;
}

@end
