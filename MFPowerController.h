@interface MFPowerController : NSObject
{
	id _queue;
	int _powerToken;
	int _pluggedIn;
	pointer _assertionsByIdentifier;
	id _identifiers;
}

+ dealloc
+ init
+ retainAssertionWithIdentifier:
+ releaseAssertionWithIdentifier:
+ copyDiagnosticInformation
+ isPluggedIn
+ log:message:
+ _powerAssertionDidExpire:
+ _setPluggedIn:
+ _createAssertionWithIdentifier_nts:
+ _destroyAssertionWithIdentifier_nts:
- dealloc
- init
- retainAssertionWithIdentifier:
- releaseAssertionWithIdentifier:
- copyDiagnosticInformation
- isPluggedIn
- log:message:
- _powerAssertionDidExpire:
- _setPluggedIn:
- _createAssertionWithIdentifier_nts:
- _destroyAssertionWithIdentifier_nts:
@end
