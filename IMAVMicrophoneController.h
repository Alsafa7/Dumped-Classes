@interface IMAVMicrophoneController : NSObject
{
	id _internal;
	id _microphones;
	id _queue;
}

+ dealloc
+ init
+ microphones
+ setCurrentMicrophone:
+ _rebuildMicrophoneList
+ _loadSavedMicrophone
+ currentMicrophone
- dealloc
- init
- microphones
- setCurrentMicrophone:
- _rebuildMicrophoneList
- _loadSavedMicrophone
- currentMicrophone
@end
