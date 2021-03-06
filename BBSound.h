@interface BBSound : NSObject
{
	long long _soundType;
	unsigned int _systemSoundID;
	usigned long long _soundBehavior;
	id _audioCategory;
	id _ringtoneName;
	BOOL _repeats;
	id _vibrationPattern;
	int _alertType;
	id _accountIdentifier;
	id _toneIdentifier;
	id _vibrationIdentifier;
}

+ vibrationPattern
+ setVibrationPattern:
+ setAccountIdentifier:
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ setSoundType:
+ soundType
+ alertType
+ setAlertType:
+ initWithSystemSoundID:behavior:
+ _isUniquableAlertSound
+ initWithSystemSoundID:behavior:vibrationPattern:
+ setSystemSoundID:
+ setSoundBehavior:
+ initWithRingtone:vibrationPattern:repeats:audioCategory:
+ setRingtoneName:
+ setRepeats:
+ setAudioCategory:
+ initWithToneAlert:accountIdentifier:
+ setToneIdentifier:
+ setVibrationIdentifier:
+ systemSoundID
+ soundBehavior
+ ringtoneName
+ isRepeating
+ audioCategory
+ toneIdentifier
+ vibrationIdentifier
+ initWithRingtone:vibrationPattern:repeats:
+ initWithToneAlert:
+ initWithToneAlert:toneIdentifier:vibrationIdentifier:
+ accountIdentifier
- vibrationPattern
- setVibrationPattern:
- setAccountIdentifier:
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- setSoundType:
- soundType
- alertType
- setAlertType:
- initWithSystemSoundID:behavior:
- _isUniquableAlertSound
- initWithSystemSoundID:behavior:vibrationPattern:
- setSystemSoundID:
- setSoundBehavior:
- initWithRingtone:vibrationPattern:repeats:audioCategory:
- setRingtoneName:
- setRepeats:
- setAudioCategory:
- initWithToneAlert:accountIdentifier:
- setToneIdentifier:
- setVibrationIdentifier:
- systemSoundID
- soundBehavior
- ringtoneName
- isRepeating
- audioCategory
- toneIdentifier
- vibrationIdentifier
- initWithRingtone:vibrationPattern:repeats:
- initWithToneAlert:
- initWithToneAlert:toneIdentifier:vibrationIdentifier:
- accountIdentifier
@end
