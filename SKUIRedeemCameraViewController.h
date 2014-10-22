@interface SKUIRedeemCameraViewController : SKUIRedeemStepViewController
{
	BOOL _alreadyPushed;
	id _camera;
	long long _category;
	id _redeemButton;
	id _flipButton;
	id _initialCode;
	id _successfulRedeem;
	BOOL _fullscreen;
	id _delegate;
}

@end
