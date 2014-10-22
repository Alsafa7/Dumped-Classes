@interface SUDeferredUISearchField : UISearchField
{
	long long _deferredClearButtonMode;
	id _deferredFont;
	struct _deferredFrame;
	float _deferredPaddingLeft;
	float _deferredPaddingTop;
	id _deferredPlaceholder;
	id _deferredText;
	BOOL _isDeferringInterfaceUpdates;
}

+ dealloc
+ setFrame:
+ frame
+ text
+ setFont:
+ font
+ setText:
+ setPlaceholder:
+ setPaddingTop:paddingLeft:
+ placeholder
+ paddingTop
+ setClearButtonMode:
+ paddingLeft
+ clearButtonMode
+ isDeferringInterfaceUpdates
+ setDeferringInterfaceUpdates:
+ _saveCurrentStateAsDeferred
+ _commitDeferredInterfaceUpdates
- dealloc
- setFrame:
- frame
- text
- setFont:
- font
- setText:
- setPlaceholder:
- setPaddingTop:paddingLeft:
- placeholder
- paddingTop
- setClearButtonMode:
- paddingLeft
- clearButtonMode
- isDeferringInterfaceUpdates
- setDeferringInterfaceUpdates:
- _saveCurrentStateAsDeferred
- _commitDeferredInterfaceUpdates
@end
