@interface SBIconModelPropertyListFileStore : NSObject
{
	id _currentIconStateURL;
	id _desiredIconStateURL;
}

+ loadDesiredIconState:
+ loadCurrentIconState:
+ deleteDesiredIconState:
+ deleteCurrentIconState:
+ saveDesiredIconState:error:
+ saveCurrentIconState:error:
+ _save:url:error:
+ _delete:error:
+ _load:error:
+ currentIconStateURL
+ setCurrentIconStateURL:
+ desiredIconStateURL
+ setDesiredIconStateURL:
+ dealloc
- loadDesiredIconState:
- loadCurrentIconState:
- deleteDesiredIconState:
- deleteCurrentIconState:
- saveDesiredIconState:error:
- saveCurrentIconState:error:
- _save:url:error:
- _delete:error:
- _load:error:
- currentIconStateURL
- setCurrentIconStateURL:
- desiredIconStateURL
- setDesiredIconStateURL:
- dealloc
@end
