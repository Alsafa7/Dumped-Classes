@interface WebPluginDatabase : NSObject
{
	id plugins;
	id registeredMIMETypes;
	id plugInPaths;
	id pluginInstanceViews;
}

+ _removePlugin:
+ _scanForNewPlugins
+ _addPlugin:
+ _plugInPaths
+ dealloc
+ init
+ close
+ refresh
+ plugins
+ setPlugInPaths:
+ pluginForMIMEType:
+ pluginForExtension:
+ isMIMETypeRegistered:
+ addPluginInstanceView:
+ removePluginInstanceView:
+ removePluginInstanceViewsFor:
+ destroyAllPluginInstanceViews
- _removePlugin:
- _scanForNewPlugins
- _addPlugin:
- _plugInPaths
- dealloc
- init
- close
- refresh
- plugins
- setPlugInPaths:
- pluginForMIMEType:
- pluginForExtension:
- isMIMETypeRegistered:
- addPluginInstanceView:
- removePluginInstanceView:
- removePluginInstanceViewsFor:
- destroyAllPluginInstanceViews
@end
