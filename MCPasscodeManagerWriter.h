@interface MCPasscodeManagerWriter : MCPasscodeManager
{

}

+ _setPrivatePasscodeDict:
+ _sendPasscodeChangedNotification
+ changePasscodeFrom:to:outError:
+ clearPasscodeWithEscrowKeybagData:secret:outError:
- _setPrivatePasscodeDict:
- _sendPasscodeChangedNotification
- changePasscodeFrom:to:outError:
- clearPasscodeWithEscrowKeybagData:secret:outError:
@end
