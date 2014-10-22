@interface WebFramePrivate : NSObject
{
	pointer coreFrame;
	id webFrameView;
	pointer scriptDebugger;
	id internalLoadDelegate;
	BOOL shouldCreateRenderers;
	BOOL includedInWebKitStatistics;
	struct url;
	struct provisionalURL;
	BOOL isCommitting;
	BOOL isSingleLine;
}

+ dealloc
+ .cxx_construct
+ .cxx_destruct
+ finalize
+ setWebFrameView:
- dealloc
- .cxx_construct
- .cxx_destruct
- finalize
- setWebFrameView:
@end
