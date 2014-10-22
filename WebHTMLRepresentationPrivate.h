@interface WebHTMLRepresentationPrivate : NSObject
{
	id dataSource;
	BOOL hasSentResponseToPlugin;
	BOOL includedInWebKitStatistics;
	id manualLoader;
	id pluginView;
}

@end
