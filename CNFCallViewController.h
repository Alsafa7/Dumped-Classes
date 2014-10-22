@interface CNFCallViewController : UIViewController
{
	id _delegate;
	id _displayController;
	id _avController;
	id _deviceController;
	BOOL _isOutgoingInvitation;
	BOOL _initialMuteState;
	BOOL _faceTimeEndedWhileSoundPlaying;
	id _originationURL;
	id _player;
}

@end
