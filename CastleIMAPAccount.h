@interface CastleIMAPAccount : IMAPAccount
{
	id _appleAccountLock;
	id _appleAccount;
	id _deliveryAccount;
	bit[1] _readyForPushRegistration;
	id _aliasChanges;
	id _updatedDefaultEmail;
}

@end
