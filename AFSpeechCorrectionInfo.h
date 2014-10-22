@interface AFSpeechCorrectionInfo : NSObject
{
	long long _alternativeSelectionCount;
	long long _characterModificationCount;
	id _correctedText;
}

+ initWithCoder:
+ encodeWithCoder:
+ setAlternativeSelectionCount:
+ setCharacterModificationCount:
+ setCorrectedText:
+ alternativeSelectionCount
+ characterModificationCount
+ correctedText
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- setAlternativeSelectionCount:
- setCharacterModificationCount:
- setCorrectedText:
- alternativeSelectionCount
- characterModificationCount
- correctedText
- .cxx_destruct
@end
