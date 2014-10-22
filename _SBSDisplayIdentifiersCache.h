@interface _SBSDisplayIdentifiersCache : NSObject
{
	id _queue;
	id _displayIdentifiers;
	int _changedToken;
	id _changedBlock;
}

+ dealloc
+ init
+ _queue_noteChanged
+ displayIdentifiers
+ registerChangedBlock:
- dealloc
- init
- _queue_noteChanged
- displayIdentifiers
- registerChangedBlock:
@end
