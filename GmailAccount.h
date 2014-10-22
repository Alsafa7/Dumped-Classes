@interface GmailAccount : IMAPAccount
{
	id _enablingConnection;
	id _credential;
	id _clientToken;
	bit[1] _isEnabling;
	bit[1] _didEnable;
}

@end
