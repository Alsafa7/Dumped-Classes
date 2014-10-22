@interface UITabBarItem : UIBarItem
{
	id _title;
	SEL _action;
	id _target;
	id _templateImage;
	id _selectedTemplateImage;
	id _selectedImage;
	id _unselectedImage;
	struct _imageInsets;
	id _badgeValue;
	id _view;
	long long _tag;
	id _appearanceStorage;
	struct _tabBarItemFlags;
	long long _barMetrics;
	long long _imageStyle;
	id _tintColor;
}

+ nextResponder
+ _updateView
+ _createViewForTabBar:showingBadge:withTint:idiom:
+ _setTitleTextAttributeValue:forAttributeKey:state:
+ _createViewForTabBar:showingBadge:idiom:
+ _updateViewForIdiom:positionItems:
+ _updateButtonForTintColor:selected:
+ _updateViewForIdiom:
+ _updateImageWithTintColor:isSelected:getImageOffset:
+ view
+ setTarget:
+ action
+ setView:
+ target
+ isSystemItem
+ systemItem
+ setAction:
+ unselectedImage
+ _internalTitle
+ _internalTemplateImage
+ viewIsCustom
+ _setInternalTitle:
+ _setInternalTemplateImage:
+ _internalTemplateImages
+ setViewIsCustom:
+ setAnimatedBadge:
+ animatedBadge
+ setUnselectedImage:
+ dealloc
+ setImage:
+ initWithCoder:
+ encodeWithCoder:
+ init
+ setTitle:
+ image
+ setTag:
+ isEnabled
+ tag
+ setEnabled:
+ title
+ setTitleTextAttributes:forState:
+ _setTintColor:
+ _tintColor
+ initWithTitle:image:tag:
+ selectedImage
+ setBadgeValue:
+ initWithTabBarSystemItem:tag:
+ badgeValue
+ titleTextAttributesForState:
+ _isSelected
+ setSelectedImage:
+ _setSelected:
+ _updateToMatchCurrentState
+ _barMetrics
+ _setBarMetrics:
+ _setImageStyle:
+ _imageStyle
+ setTitlePositionAdjustment:
+ titlePositionAdjustment
+ initWithTitle:image:selectedImage:
+ setImageInsets:
+ imageInsets
+ setFinishedSelectedImage:withFinishedUnselectedImage:
+ finishedSelectedImage
+ finishedUnselectedImage
- nextResponder
- _updateView
- _createViewForTabBar:showingBadge:withTint:idiom:
- _setTitleTextAttributeValue:forAttributeKey:state:
- _createViewForTabBar:showingBadge:idiom:
- _updateViewForIdiom:positionItems:
- _updateButtonForTintColor:selected:
- _updateViewForIdiom:
- _updateImageWithTintColor:isSelected:getImageOffset:
- view
- setTarget:
- action
- setView:
- target
- isSystemItem
- systemItem
- setAction:
- unselectedImage
- _internalTitle
- _internalTemplateImage
- viewIsCustom
- _setInternalTitle:
- _setInternalTemplateImage:
- _internalTemplateImages
- setViewIsCustom:
- setAnimatedBadge:
- animatedBadge
- setUnselectedImage:
- dealloc
- setImage:
- initWithCoder:
- encodeWithCoder:
- init
- setTitle:
- image
- setTag:
- isEnabled
- tag
- setEnabled:
- title
- setTitleTextAttributes:forState:
- _setTintColor:
- _tintColor
- initWithTitle:image:tag:
- selectedImage
- setBadgeValue:
- initWithTabBarSystemItem:tag:
- badgeValue
- titleTextAttributesForState:
- _isSelected
- setSelectedImage:
- _setSelected:
- _updateToMatchCurrentState
- _barMetrics
- _setBarMetrics:
- _setImageStyle:
- _imageStyle
- setTitlePositionAdjustment:
- titlePositionAdjustment
- initWithTitle:image:selectedImage:
- setImageInsets:
- imageInsets
- setFinishedSelectedImage:withFinishedUnselectedImage:
- finishedSelectedImage
- finishedUnselectedImage
@end
