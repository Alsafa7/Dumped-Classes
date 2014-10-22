@interface MCNewWiFiPayloadHandler : MCNewPayloadHandler
{
	pointer _manager;
	id _setAsideUUID;
}

+ initWithPayload:profileHandler:
+ installWithInstaller:options:interactionClient:outError:
+ unsetAside
+ setAside
+ userInputFields
+ preflightUserInputResponses:outError:
+ _applyProxyCredential:
+ _updateWiFiCustomSetWithSetID:forSSID:
+ _setEAPConfig:onNetwork:
+ _configureProxyForNetwork:outError:
+ _removeProxyCredential
+ _removeNetworkWithUUID:
+ dealloc
+ remove
+ isInstalled
+ .cxx_destruct
- initWithPayload:profileHandler:
- installWithInstaller:options:interactionClient:outError:
- unsetAside
- setAside
- userInputFields
- preflightUserInputResponses:outError:
- _applyProxyCredential:
- _updateWiFiCustomSetWithSetID:forSSID:
- _setEAPConfig:onNetwork:
- _configureProxyForNetwork:outError:
- _removeProxyCredential
- _removeNetworkWithUUID:
- dealloc
- remove
- isInstalled
- .cxx_destruct
@end
