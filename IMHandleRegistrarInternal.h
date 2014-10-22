@interface IMHandleRegistrarInternal : NSObject
{
	id _siblingsMap;
	id _accountSiblingsMap;
	id _existingAccountSiblingsMap;
	id _chatSiblingsMap;
	id _existingChatSiblingsMap;
	id _allIMHandles;
	id _candidateNamesMap;
	id _usedUniqueNames;
	id _knownConflictingNames;
	long long _nameStyle;
	BOOL _buildingChatSiblings;
}

+ dealloc
- dealloc
@end
