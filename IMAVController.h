@interface IMAVController : NSObject
{
	BOOL _blockMultipleIncomingInvitations;
	BOOL _blockOutgoingInvitationsDuringCall;
	BOOL _blockIncomingInvitationsDuringCall;
	id _delegates;
}

@end
