@interface MCNewPayloadHandler : NSObject
{
	id _payload;
	id _profileHandler;
	id _userInputResponses;
}

+ initWithPayload:profileHandler:
+ installWithInstaller:options:interactionClient:outError:
+ didInstallOldGlobalRestrictions:newGlobalRestrictions:
+ setAsideWithInstaller:
+ unsetAside
+ setAside
+ _retainDependencyBetweenPersistentID:andUUID:
+ _releaseDependencyBetweenPersistentID:andUUID:
+ profileHandler
+ _touchDependencyBetweenPersistentID:andUUID:
+ userInputFields
+ preflightUserInputResponses:outError:
+ stageForInstallationWithInstaller:interactionClient:outError:
+ unstageFromInstallationWithInstaller:
+ didRemoveOldGlobalRestrictions:newGlobalRestrictions:
+ _temporaryPersistentIDForIdentityUUID:outError:
+ setUserInputResponses:
+ remove
+ userInputResponses
+ payload
+ isInstalled
+ .cxx_destruct
- initWithPayload:profileHandler:
- installWithInstaller:options:interactionClient:outError:
- didInstallOldGlobalRestrictions:newGlobalRestrictions:
- setAsideWithInstaller:
- unsetAside
- setAside
- _retainDependencyBetweenPersistentID:andUUID:
- _releaseDependencyBetweenPersistentID:andUUID:
- profileHandler
- _touchDependencyBetweenPersistentID:andUUID:
- userInputFields
- preflightUserInputResponses:outError:
- stageForInstallationWithInstaller:interactionClient:outError:
- unstageFromInstallationWithInstaller:
- didRemoveOldGlobalRestrictions:newGlobalRestrictions:
- _temporaryPersistentIDForIdentityUUID:outError:
- setUserInputResponses:
- remove
- userInputResponses
- payload
- isInstalled
- .cxx_destruct
@end
