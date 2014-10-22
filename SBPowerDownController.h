@interface SBPowerDownController : SBAlert
{
	id _delegate;
	BOOL _isFront;
	id _powerDownView;
	id _orderOutCompletion;
}

@end
