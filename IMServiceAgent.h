@interface IMServiceAgent : NSObject
{
	id _currentAVChatInfo;
}

+ notificationCenter
+ serviceWithName:
+ myPictureData
+ vcCapabilities
+ setMyStatus:message:
+ launchIfNecessary
+ myAvailableMessages
+ myAwayMessages
+ setMyAvailableMessages:
+ setMyAwayMessages:
+ serviceWithNameNonBlocking:
+ currentAVChatInfo
+ requestAudioReflectorStart
+ requestAudioReflectorStop
+ requestVideoStillForPerson:
- notificationCenter
- serviceWithName:
- myPictureData
- vcCapabilities
- setMyStatus:message:
- launchIfNecessary
- myAvailableMessages
- myAwayMessages
- setMyAvailableMessages:
- setMyAwayMessages:
- serviceWithNameNonBlocking:
- currentAVChatInfo
- requestAudioReflectorStart
- requestAudioReflectorStop
- requestVideoStillForPerson:
@end
