@interface SBFileLogManager : NSObject
{
	id _loggersByName;
}

+ reloadFromDefaults
+ loggerForName:
+ loggerEnabledStateChanged:
+ _loadFileLoggers
+ _enableOrDisableLoggerIfNecessary:
+ isClass:aKindOfClass:
+ _addLogger:
+ _recordForLogNamed:format:arguments:
+ dealloc
+ init
+ flush
- reloadFromDefaults
- loggerForName:
- loggerEnabledStateChanged:
- _loadFileLoggers
- _enableOrDisableLoggerIfNecessary:
- isClass:aKindOfClass:
- _addLogger:
- _recordForLogNamed:format:arguments:
- dealloc
- init
- flush
@end
