@interface IMAVCallManager : NSObject
{
	id _powerAssertion;
	id _chatArray;
	id _acChatProxyArray;
	id _avChatProxyArray;
	id _guidToACChatProxyMap;
	id _guidToAVChatProxyMap;
	id _lastCallStateChange;
	int _avToken;
	int _acToken;
	unsigned int _avCallState;
	unsigned int _acCallState;
	unsigned int _telephonyCallState;
	unsigned int _globalCallState;
}

+ callState
+ dealloc
+ init
+ hasActiveCall
+ _updateACChatProxyWithInfo:
+ _updateAVChatProxyWithInfo:
+ _updateOverallChatState
+ _addIMAVChatToChatList:
+ _addAVChatProxy:
+ _addACChatProxy:
+ _removeIMAVChatFromChatList:
+ _sendProxyUpdate
+ calls
+ _callState
+ _hasActiveFaceTimeCall
+ _hasActiveAudioCall
+ _updateAVCallState
+ _updateACCallState
+ _setTelephonyCallState:
+ _hasActiveTelephonyCall
+ _setAVCallState:
+ _setACCallState:
+ _setAVCallState:quietly:
+ _setACCallState:quietly:
+ __setTelephonyCallState:
+ _FTCalls
+ _mutableFTCalls
+ _copyMutableFTCalls
+ _postStateChangeNamed:fromState:toState:postType:type:
+ _telephonyCallState
+ _postStateChangeIfNecessary
+ _calls
+ _callStateForType:
+ _nonRetainingChatList
+ _activeFaceTimeCall
+ _activeAudioCall
- callState
- dealloc
- init
- hasActiveCall
- _updateACChatProxyWithInfo:
- _updateAVChatProxyWithInfo:
- _updateOverallChatState
- _addIMAVChatToChatList:
- _addAVChatProxy:
- _addACChatProxy:
- _removeIMAVChatFromChatList:
- _sendProxyUpdate
- calls
- _callState
- _hasActiveFaceTimeCall
- _hasActiveAudioCall
- _updateAVCallState
- _updateACCallState
- _setTelephonyCallState:
- _hasActiveTelephonyCall
- _setAVCallState:
- _setACCallState:
- _setAVCallState:quietly:
- _setACCallState:quietly:
- __setTelephonyCallState:
- _FTCalls
- _mutableFTCalls
- _copyMutableFTCalls
- _postStateChangeNamed:fromState:toState:postType:type:
- _telephonyCallState
- _postStateChangeIfNecessary
- _calls
- _callStateForType:
- _nonRetainingChatList
- _activeFaceTimeCall
- _activeAudioCall
@end
