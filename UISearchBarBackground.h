@interface UISearchBarBackground : _UIBarBackgroundImageView
{
	id _barTintColor;
	id _customBackgroundImages;
	id _generatedBackgroundImages;
	long long _barPosition;
	usigned long long _searchBarStyle;
	bit[3] _barStyle;
	bit[3] _barTranslucence;
	bit[1] _usesEmbeddedAppearance;
	bit[1] _actingAsNavBar;
	bit[1] _usesContiguousBarBackground;
	unsigned int _barHasController;
}

+ initWithFrame:
+ dealloc
+ setFrame:
+ setBounds:
+ isTranslucent
+ backgroundImage
+ _updateBackgroundImage
+ _setBarPosition:
+ setBarStyle:
+ barStyle
+ setTranslucent:
+ setBarTintColor:
+ _barPosition
+ barTintColor
+ setUsesEmbeddedAppearance:
+ setSearchBarStyle:
+ _setBehavesAsIfSearchBarHasController:
+ _hasCustomBackgroundImage
+ setUsesContiguousBarBackground:
+ _setBackgroundImage:forBarPosition:barMetrics:
+ _backgroundImageForBarPosition:barMetrics:
+ usesEmbeddedAppearance
+ searchBarStyle
+ _updateBackgroundImageIfPossible
+ _createBackgroundImageForBarStyle:alpha:
+ backgroundImagePrompt
+ usesContiguousBarBackground
- initWithFrame:
- dealloc
- setFrame:
- setBounds:
- isTranslucent
- backgroundImage
- _updateBackgroundImage
- _setBarPosition:
- setBarStyle:
- barStyle
- setTranslucent:
- setBarTintColor:
- _barPosition
- barTintColor
- setUsesEmbeddedAppearance:
- setSearchBarStyle:
- _setBehavesAsIfSearchBarHasController:
- _hasCustomBackgroundImage
- setUsesContiguousBarBackground:
- _setBackgroundImage:forBarPosition:barMetrics:
- _backgroundImageForBarPosition:barMetrics:
- usesEmbeddedAppearance
- searchBarStyle
- _updateBackgroundImageIfPossible
- _createBackgroundImageForBarStyle:alpha:
- backgroundImagePrompt
- usesContiguousBarBackground
@end
