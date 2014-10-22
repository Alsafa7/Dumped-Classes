@interface SUDeferredUIButton : UIButton
{
	BOOL _deferredEnabled;
	struct _deferredFrame;
	id _deferredImages;
	id _deferredTitles;
	BOOL _isDeferringInterfaceUpdates;
}

+ dealloc
+ setFrame:
+ frame
+ isEnabled
+ setEnabled:
+ titleForState:
+ imageForState:
+ setImage:forState:
+ setTitle:forState:
+ isDeferringInterfaceUpdates
+ setDeferringInterfaceUpdates:
+ _saveCurrentStateAsDeferred
+ _commitDeferredInterfaceUpdates
+ _saveImagesAsDeferred
+ _saveTitlesAsDeferred
- dealloc
- setFrame:
- frame
- isEnabled
- setEnabled:
- titleForState:
- imageForState:
- setImage:forState:
- setTitle:forState:
- isDeferringInterfaceUpdates
- setDeferringInterfaceUpdates:
- _saveCurrentStateAsDeferred
- _commitDeferredInterfaceUpdates
- _saveImagesAsDeferred
- _saveTitlesAsDeferred
@end
