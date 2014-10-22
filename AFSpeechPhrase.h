@interface AFSpeechPhrase : NSObject
{
	BOOL _isLowConfidence;
	id _interpretations;
}

+ initWithCoder:
+ encodeWithCoder:
+ description
+ interpretations
+ isLowConfidence
+ setIsLowConfidence:
+ setInterpretations:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- description
- interpretations
- isLowConfidence
- setIsLowConfidence:
- setInterpretations:
- .cxx_destruct
@end
