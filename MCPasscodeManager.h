@interface MCPasscodeManager : NSObject
{

}

+ passcodeExpiryDateOutError:
+ unlockDeviceWithPasscode:outError:
+ isDeviceLocked
+ currentPasscodeCompliesWithPolicyFromRestrictions:outError:
+ lockDeviceImmediately:
+ isPasscodeSet
+ passcode:compliesWithPolicyCheckHistory:outError:
+ passcodeExpiryDateCompletionBlock:
+ currentUnlockScreenType
+ newPasscodeEntryScreenType
+ lockDevice
+ _wrongPasscodeError
+ _privatePasscodeDict
+ _publicPasscodeDict
+ _checkPasscode:againstHistoryWithRestrictions:outError:
+ _passcodeCharacteristics
+ localizedDescriptionOfPasscodePolicy
+ isCurrentPasscodeCompliantOutError:
- passcodeExpiryDateOutError:
- unlockDeviceWithPasscode:outError:
- isDeviceLocked
- currentPasscodeCompliesWithPolicyFromRestrictions:outError:
- lockDeviceImmediately:
- isPasscodeSet
- passcode:compliesWithPolicyCheckHistory:outError:
- passcodeExpiryDateCompletionBlock:
- currentUnlockScreenType
- newPasscodeEntryScreenType
- lockDevice
- _wrongPasscodeError
- _privatePasscodeDict
- _publicPasscodeDict
- _checkPasscode:againstHistoryWithRestrictions:outError:
- _passcodeCharacteristics
- localizedDescriptionOfPasscodePolicy
- isCurrentPasscodeCompliantOutError:
@end
