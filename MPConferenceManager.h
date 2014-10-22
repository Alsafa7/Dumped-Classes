@interface MPConferenceManager : NSObject
{
	id _conferenceController;
	id _sbUserAgent;
	id _player;
}

+ _faceTimeStateChanged:
+ _faceTimeCapabilityChanged:
+ stopAudioPlayer
+ _handleInvitation:
+ conferenceController
+ isPlaying
+ dealloc
+ init
+ endFaceTime
+ faceTimeInvitationExists
+ activeFaceTimeCallExists
+ playSound:numOfLoops:pauseDuration:
+ audioPlayerDidStopPlaying:
- _faceTimeStateChanged:
- _faceTimeCapabilityChanged:
- stopAudioPlayer
- _handleInvitation:
- conferenceController
- isPlaying
- dealloc
- init
- endFaceTime
- faceTimeInvitationExists
- activeFaceTimeCallExists
- playSound:numOfLoops:pauseDuration:
- audioPlayerDidStopPlaying:
@end
