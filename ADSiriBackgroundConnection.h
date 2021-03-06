@interface ADSiriBackgroundConnection : NSObject
{
	id _owningConnection;
	id _delegate;
	id _connectionInfo;
	id _inputStream;
	id _outputStream;
	id _bufferedInputData;
	id _bufferedOutputData;
	Array _readBuffer;
	id _inputDecompressor;
	id _outputCompressor;
	pointer _httpResponseHeader;
	BOOL _isOpened;
	BOOL _isCanceled;
	BOOL _hasFoundTrust;
	id _connectionTimeoutTimer;
	id _keepAliveTimer;
	unsigned int _currentPingIndex;
	pointer _unacknowledgedPings;
	int _interfaceIndex;
	id _connectionType;
}

+ setSendKeepAlives:
+ sendCommand:errorHandler:
+ analysisInfo
+ _handleAceObject:
+ initWithOwningConnection:
+ startWithConnectionInfo:
+ _configuredStreamPairForURL:preferWWAN:inputStream:outputStream:
+ _scheduleAceHeaderTimeoutTimerWithInterval:
+ _sendHTTPHeader
+ _sendAceHeader
+ _cleanupRWTimer
+ _presentationAddressFromSockAddr:
+ _socketForStream:
+ _interfaceIndexForSocket:
+ _setAdaptiveRWTimeoutEnabled:forSocket:
+ _logPeernameForSocket:
+ _logPeernameForStream:
+ _scheduleKeepAliveTimer
+ _aceHeaderTimeoutFired:
+ _hasReadACEHeader
+ _timeoutWithError:
+ _keepAliveTimerFired
+ _sendAcePingWithId:
+ _validateTrustForStream:
+ _inputStreamEvent:
+ _outputStreamEvent:
+ _inputStreamHasBytesAvailable
+ _inputStreamErrorOccurred
+ _inputStreamEndEncountered
+ _outputStreamDidOpen
+ _outputStreamHasSpaceAvailable
+ _outputStreamErrorOccurred
+ _outputStreamEndEncountered
+ _tryReadingHTTPHeaderData:withMessage:remainingData:error:
+ _tryReadingAceHeaderFromData:bytesParsed:error:
+ _tryReadingParsedDataFromData:bytesParsed:error:
+ _handleParsedData:
+ _readDataFromInputStream:
+ _hasReadHTTPHeader
+ _handleHTTPHeaderWithData:remainingData:error:
+ _handleAceHeaderWithData:remainingData:error:
+ _handleAceDataWithData:remainingData:error:
+ _handleOpenedSocketForStream:
+ _tryToWriteBufferedOutputData
+ _shouldSendErrorOnEnd
+ _userAgent
+ _headerDataForURL:aceHost:languageCode:
+ _tryParsingHTTPHeaderData:partialMessage:statusCode:remainingBody:error:
+ _handleAceNop
+ _handleAcePing:
+ _handleAcePong:
+ _handleAceEnd
+ _sendAcePongWithId:
+ _acknowledgePing:
+ _sendBufferBytesRemainingForStream:
+ _cancelForExtendedValidationFailureWithTrustInfo:
+ _validateTrustInfo:
+ _closeConnection
+ stream:handleEvent:
+ dealloc
+ setDelegate:
+ delegate
+ cancel
+ _sendData:
+ .cxx_destruct
- setSendKeepAlives:
- sendCommand:errorHandler:
- analysisInfo
- _handleAceObject:
- initWithOwningConnection:
- startWithConnectionInfo:
- _configuredStreamPairForURL:preferWWAN:inputStream:outputStream:
- _scheduleAceHeaderTimeoutTimerWithInterval:
- _sendHTTPHeader
- _sendAceHeader
- _cleanupRWTimer
- _presentationAddressFromSockAddr:
- _socketForStream:
- _interfaceIndexForSocket:
- _setAdaptiveRWTimeoutEnabled:forSocket:
- _logPeernameForSocket:
- _logPeernameForStream:
- _scheduleKeepAliveTimer
- _aceHeaderTimeoutFired:
- _hasReadACEHeader
- _timeoutWithError:
- _keepAliveTimerFired
- _sendAcePingWithId:
- _validateTrustForStream:
- _inputStreamEvent:
- _outputStreamEvent:
- _inputStreamHasBytesAvailable
- _inputStreamErrorOccurred
- _inputStreamEndEncountered
- _outputStreamDidOpen
- _outputStreamHasSpaceAvailable
- _outputStreamErrorOccurred
- _outputStreamEndEncountered
- _tryReadingHTTPHeaderData:withMessage:remainingData:error:
- _tryReadingAceHeaderFromData:bytesParsed:error:
- _tryReadingParsedDataFromData:bytesParsed:error:
- _handleParsedData:
- _readDataFromInputStream:
- _hasReadHTTPHeader
- _handleHTTPHeaderWithData:remainingData:error:
- _handleAceHeaderWithData:remainingData:error:
- _handleAceDataWithData:remainingData:error:
- _handleOpenedSocketForStream:
- _tryToWriteBufferedOutputData
- _shouldSendErrorOnEnd
- _userAgent
- _headerDataForURL:aceHost:languageCode:
- _tryParsingHTTPHeaderData:partialMessage:statusCode:remainingBody:error:
- _handleAceNop
- _handleAcePing:
- _handleAcePong:
- _handleAceEnd
- _sendAcePongWithId:
- _acknowledgePing:
- _sendBufferBytesRemainingForStream:
- _cancelForExtendedValidationFailureWithTrustInfo:
- _validateTrustInfo:
- _closeConnection
- stream:handleEvent:
- dealloc
- setDelegate:
- delegate
- cancel
- _sendData:
- .cxx_destruct
@end
