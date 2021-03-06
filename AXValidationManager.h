@interface AXValidationManager : NSObject
{
	BOOL _shouldLogToConsole;
	BOOL _shouldCrashOnError;
	BOOL _shouldReportToServer;
	BOOL _forceDoNotReport;
	BOOL _debugBuild;
	usigned long long _numberOfValidationErrors;
	id _validationTargetName;
	id _overrideProcessName;
	id _consoleErrorMessages;
}

+ dealloc
+ init
+ setOverrideProcessName:
+ setValidationTargetName:
+ setConsoleErrorMessages:
+ performValidations:withPreValidationHandler:postValidationHandler:safeCategoryInstallationHandler:
+ setNumberOfValidationErrors:
+ setForceDoNotReport:
+ setDebugBuild:
+ setShouldLogToConsole:
+ setShouldCrashOnError:
+ setShouldReportToServer:
+ validationTargetName
+ numberOfValidationErrors
+ _printConsoleReport:isDelayed:
+ installSafeCategories:afterDelay:validationTargetName:overrideProcessName:forceDoNotReport:
+ isDebugBuild
+ consoleErrorMessages
+ overrideProcessName
+ _validateClass:hasMethod:methodType:returnType:arguments:
+ validateProtocol:hasMethod:isInstanceMethod:isRequired:
+ installSafeCategory:canInteractWithTargetClass:
+ performValidations:withPreValidationHandler:postValidationHandler:
+ installSafeCategories:afterDelay:validationTargetName:overrideProcessName:
+ validateClass:
+ validateClass:isKindOfClass:
+ validateClass:hasInstanceVariable:
+ validateClass:hasInstanceVariable:withType:
+ validateClass:hasInstanceMethod:
+ validateClass:hasClassMethod:returnType:parameterCount:
+ validateClass:hasInstanceMethod:returnType:parameterCount:
+ validateClass:hasClassMethod:
+ validateClass:hasProperty:
+ validateClass:conformsToProtocol:
+ validateProtocol:hasOptionalInstanceMethod:
+ validateProtocol:hasRequiredInstanceMethod:
+ validateProtocol:hasOptionalClassMethod:
+ validateProtocol:hasRequiredClassMethod:
+ validateProtocol:hasProperty:
+ installSafeCategory:
+ shouldLogToConsole
+ shouldCrashOnError
+ shouldReportToServer
+ forceDoNotReport
- dealloc
- init
- setOverrideProcessName:
- setValidationTargetName:
- setConsoleErrorMessages:
- performValidations:withPreValidationHandler:postValidationHandler:safeCategoryInstallationHandler:
- setNumberOfValidationErrors:
- setForceDoNotReport:
- setDebugBuild:
- setShouldLogToConsole:
- setShouldCrashOnError:
- setShouldReportToServer:
- validationTargetName
- numberOfValidationErrors
- _printConsoleReport:isDelayed:
- installSafeCategories:afterDelay:validationTargetName:overrideProcessName:forceDoNotReport:
- isDebugBuild
- consoleErrorMessages
- overrideProcessName
- _validateClass:hasMethod:methodType:returnType:arguments:
- validateProtocol:hasMethod:isInstanceMethod:isRequired:
- installSafeCategory:canInteractWithTargetClass:
- performValidations:withPreValidationHandler:postValidationHandler:
- installSafeCategories:afterDelay:validationTargetName:overrideProcessName:
- validateClass:
- validateClass:isKindOfClass:
- validateClass:hasInstanceVariable:
- validateClass:hasInstanceVariable:withType:
- validateClass:hasInstanceMethod:
- validateClass:hasClassMethod:returnType:parameterCount:
- validateClass:hasInstanceMethod:returnType:parameterCount:
- validateClass:hasClassMethod:
- validateClass:hasProperty:
- validateClass:conformsToProtocol:
- validateProtocol:hasOptionalInstanceMethod:
- validateProtocol:hasRequiredInstanceMethod:
- validateProtocol:hasOptionalClassMethod:
- validateProtocol:hasRequiredClassMethod:
- validateProtocol:hasProperty:
- installSafeCategory:
- shouldLogToConsole
- shouldCrashOnError
- shouldReportToServer
- forceDoNotReport
@end
