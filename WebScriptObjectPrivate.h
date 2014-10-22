@interface WebScriptObjectPrivate : NSObject
{
	pointer imp;
	pointer rootObject;
	pointer originRootObject;
	BOOL isCreatedByDOMWrapper;
}

@end
