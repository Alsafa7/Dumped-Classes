@interface _UIAssetManager : NSObject
{
	id _imageCache;
	id _catalog;
	id _assetManagerName;
	long long _preferredIdiom;
	double _preferredScale;
	usigned long long _preferredIdiomSubtype;
	id _nextAssetManager;
}

+ dealloc
+ description
+ initWithName:inBundle:idiom:
+ imageNamed:
+ _catalog
+ imageNamed:idiom:
+ setPreferredScale:
+ setNextAssetManager:
+ disableCacheFlushing
+ imageNamed:scale:idiom:subtype:cachingOptions:
+ imageNamed:scale:idiom:subtype:
+ imageNamed:idiom:subtype:
+ carFileName
+ nextAssetManager
+ preferredScale
- dealloc
- description
- initWithName:inBundle:idiom:
- imageNamed:
- _catalog
- imageNamed:idiom:
- setPreferredScale:
- setNextAssetManager:
- disableCacheFlushing
- imageNamed:scale:idiom:subtype:cachingOptions:
- imageNamed:scale:idiom:subtype:
- imageNamed:idiom:subtype:
- carFileName
- nextAssetManager
- preferredScale
@end
