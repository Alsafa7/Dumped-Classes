@interface TIKeyboardCandidate : NSObject
{
	id _alternativeText;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ copyWithZone:
+ input
+ label
+ deleteCount
+ alternativeText
+ setAlternativeText:
+ candidate
+ isForShortcutConversion
+ isExtensionCandidate
+ isCompletionCandidate
+ isInlineCompletionCandidate
+ usageTrackingMask
+ wordOriginFeedbackID
+ initWithCandidateResultSetCoder:
+ encodeWithCandidateResultSetCoder:
+ isAutocorrection
+ isEmojiCandidate
- dealloc
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- copyWithZone:
- input
- label
- deleteCount
- alternativeText
- setAlternativeText:
- candidate
- isForShortcutConversion
- isExtensionCandidate
- isCompletionCandidate
- isInlineCompletionCandidate
- usageTrackingMask
- wordOriginFeedbackID
- initWithCandidateResultSetCoder:
- encodeWithCandidateResultSetCoder:
- isAutocorrection
- isEmojiCandidate
@end
