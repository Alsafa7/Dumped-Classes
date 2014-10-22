@interface SKUIIPadChartsView : UIView
{
	id _allViewControllers;
	long long _animatingToNumberOfVisibleColumns;
	id _borderView0;
	id _borderView1;
	long long _columnChangeAnimationCount;
	id _columnViews;
	struct _contentInset;
	id _headerBackgroundView;
	id _headerViews;
	long long _numberOfVisibleColumns;
}

+ initWithFrame:
+ layoutSubviews
+ contentInset
+ setContentInset:
+ _reloadColumnViews
+ numberOfVisibleColumns
+ _headerViewAction:
+ _headerViewWithViewControllers:
+ beginColumnChangeAnimationToNumberOfVisibleColumns:
+ endColumnChangeAnimation
+ setChartTableViewControllers:
+ setNumberOfVisibleColumns:
+ chartTableViewControllers
+ .cxx_destruct
- initWithFrame:
- layoutSubviews
- contentInset
- setContentInset:
- _reloadColumnViews
- numberOfVisibleColumns
- _headerViewAction:
- _headerViewWithViewControllers:
- beginColumnChangeAnimationToNumberOfVisibleColumns:
- endColumnChangeAnimation
- setChartTableViewControllers:
- setNumberOfVisibleColumns:
- chartTableViewControllers
- .cxx_destruct
@end
