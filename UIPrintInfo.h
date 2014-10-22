@interface UIPrintInfo : NSObject
{
	id _printerID;
	id _jobName;
	long long _outputType;
	long long _orientation;
	long long _duplex;
	long long _copies;
	BOOL _scaleUp;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ orientation
+ copyWithZone:
+ setOrientation:
+ dictionaryRepresentation
+ setJobName:
+ setOutputType:
+ _initWithDictionary:
+ _updateWithPrinter:
+ _createPrintSettingsForPrinter:
+ printerID
+ setPrinterID:
+ jobName
+ outputType
+ duplex
+ setDuplex:
+ copies
+ setCopies:
+ scaleUp
+ setScaleUp:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- orientation
- copyWithZone:
- setOrientation:
- dictionaryRepresentation
- setJobName:
- setOutputType:
- _initWithDictionary:
- _updateWithPrinter:
- _createPrintSettingsForPrinter:
- printerID
- setPrinterID:
- jobName
- outputType
- duplex
- setDuplex:
- copies
- setCopies:
- scaleUp
- setScaleUp:
@end
