@interface ADSpeechLog : NSObject
{
	id _logQueue;
	id _dateFormatter;
	int _fd;
	id _filePath;
}

+ endSpeechLog
+ beginNewSpeechLogWithFormat:
+ appendSpeechPackets:
+ cancelCurrentSpeechLog
+ _logDirPath
+ _nowString
+ appendSpeechPacket:
+ init
+ _dateFormatter
+ .cxx_destruct
- endSpeechLog
- beginNewSpeechLogWithFormat:
- appendSpeechPackets:
- cancelCurrentSpeechLog
- _logDirPath
- _nowString
- appendSpeechPacket:
- init
- _dateFormatter
- .cxx_destruct
@end
