@interface GKChallenge : NSObject
{
	id _internal;
	id _compatibleBundleIDs;
}

+ loadImageWithCompletionHandler:
+ composeGoalText
+ alertGoalText
+ loadBannerImageWithHandler:
+ iconSource
+ smallIconURLString
+ loadImageWithSource:URLString:withHandler:
+ iconURLString
+ listTitleText
+ listGoalText
+ detailGoalText
+ detailFromText
+ smallIconSource
+ setInternal:
+ receivingPlayer
+ decline
+ hasLoadedUIDetails
+ loadUIDetailsWithHandler:
+ infoTextForIssuingPlayer:
+ compatibleBundleIDs
+ game
+ internal
+ initWithInternalRepresentation:
+ issueToPlayers:message:
+ detailsLoaded
+ loadDetailsWithCompletionHandler:
+ issuingPlayer
+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ respondsToSelector:
+ isEqual:
+ hash
+ methodSignatureForSelector:
+ forwardingTargetForSelector:
+ valueForUndefinedKey:
+ setValue:forUndefinedKey:
- loadImageWithCompletionHandler:
- composeGoalText
- alertGoalText
- loadBannerImageWithHandler:
- iconSource
- smallIconURLString
- loadImageWithSource:URLString:withHandler:
- iconURLString
- listTitleText
- listGoalText
- detailGoalText
- detailFromText
- smallIconSource
- setInternal:
- receivingPlayer
- decline
- hasLoadedUIDetails
- loadUIDetailsWithHandler:
- infoTextForIssuingPlayer:
- compatibleBundleIDs
- game
- internal
- initWithInternalRepresentation:
- issueToPlayers:message:
- detailsLoaded
- loadDetailsWithCompletionHandler:
- issuingPlayer
- dealloc
- initWithCoder:
- encodeWithCoder:
- respondsToSelector:
- isEqual:
- hash
- methodSignatureForSelector:
- forwardingTargetForSelector:
- valueForUndefinedKey:
- setValue:forUndefinedKey:
@end
