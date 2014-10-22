@interface CKPreferredServiceManager : NSObject
{
	id _servicePrecedence;
	id _potentialServices;
	id _knownHandles;
}

+ dealloc
+ init
+ availabilityForHandle:onService:checkWithServer:
+ preferredServiceForConversation:newComposition:checkWithServer:error:
+ isMultiService
+ preferredService
+ refreshAvailabilityForMFComposeRecipients:
+ prepareForResume
+ preferredServiceForHandles:newComposition:checkWithServer:error:
+ _handleConnectionChanged:
+ _handleLoginStatusChange:
+ _handleOperationalAccountsChanged:
+ _handleIMHandleIDStatusChanged:
+ _handleDeviceCapabilitiesChanged:
+ _handleServiceAvailabilityChanged:
+ setPotentialServices:
+ _updatePotentialServices
+ potentialServices
+ setServicePrecedence:
+ _clearCaches
+ _preferredServiceForHandles:allowUnknown:checkWithServer:
+ servicePrecedence
+ __preferredServiceTypeForRecipientCount:options:error:
+ _availabilityForHandle:onService:checkWithServer:actualHandle:
+ _preferredServiceForRecipientsCount:options:error:
+ _preferredServiceForAddressStrings:newComposition:checkWithServer:error:
+ _preferredServiceForHandles:newComposition:checkWithServer:error:
+ _optionsForRecipients:
+ _preferredServiceForHandles:options:error:
+ _isiMessageAvailable
+ __preferrediMessageFallbackServiceForRecipientCount:iMessageAvailable:options:error:
+ notifyOfServiceAvailabilityChange
+ notifyOfPotentialServicesChange
+ refreshAvailabilityForAddressStrings:
+ refreshAvailabilityForConversation:
+ preferredServiceForAddressString:newComposition:checkWithServer:error:
+ preferredServiceForHandle:newComposition:checkWithServer:error:
+ preferredServiceForMFComposeRecipients:newComposition:checkWithServer:error:
+ availabilityForAddress:onService:checkWithServer:
+ preferredServiceForHandles:newComposition:checkWithServer:completion:
- dealloc
- init
- availabilityForHandle:onService:checkWithServer:
- preferredServiceForConversation:newComposition:checkWithServer:error:
- isMultiService
- preferredService
- refreshAvailabilityForMFComposeRecipients:
- prepareForResume
- preferredServiceForHandles:newComposition:checkWithServer:error:
- _handleConnectionChanged:
- _handleLoginStatusChange:
- _handleOperationalAccountsChanged:
- _handleIMHandleIDStatusChanged:
- _handleDeviceCapabilitiesChanged:
- _handleServiceAvailabilityChanged:
- setPotentialServices:
- _updatePotentialServices
- potentialServices
- setServicePrecedence:
- _clearCaches
- _preferredServiceForHandles:allowUnknown:checkWithServer:
- servicePrecedence
- __preferredServiceTypeForRecipientCount:options:error:
- _availabilityForHandle:onService:checkWithServer:actualHandle:
- _preferredServiceForRecipientsCount:options:error:
- _preferredServiceForAddressStrings:newComposition:checkWithServer:error:
- _preferredServiceForHandles:newComposition:checkWithServer:error:
- _optionsForRecipients:
- _preferredServiceForHandles:options:error:
- _isiMessageAvailable
- __preferrediMessageFallbackServiceForRecipientCount:iMessageAvailable:options:error:
- notifyOfServiceAvailabilityChange
- notifyOfPotentialServicesChange
- refreshAvailabilityForAddressStrings:
- refreshAvailabilityForConversation:
- preferredServiceForAddressString:newComposition:checkWithServer:error:
- preferredServiceForHandle:newComposition:checkWithServer:error:
- preferredServiceForMFComposeRecipients:newComposition:checkWithServer:error:
- availabilityForAddress:onService:checkWithServer:
- preferredServiceForHandles:newComposition:checkWithServer:completion:
@end