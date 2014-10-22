@interface SBIconContentView : UIView
{
	long long _orientation;
	id _folderContentViews;
	double _searchGestureProgress;
}

+ clearAllFolderContentViews
+ pushFolderContentView:
+ updateLayoutWithDuration:
+ popFolderContentView:
+ initWithOrientation:
+ dealloc
+ layoutSubviews
+ orientation
+ didAddSubview:
+ setOrientation:
- clearAllFolderContentViews
- pushFolderContentView:
- updateLayoutWithDuration:
- popFolderContentView:
- initWithOrientation:
- dealloc
- layoutSubviews
- orientation
- didAddSubview:
- setOrientation:
@end
