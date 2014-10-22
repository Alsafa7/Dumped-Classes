@interface UIKeyboardSplitControlMenu : UIKeyboardMenuView
{
	id m_menuOptions;
	struct m_preferredSize;
}

+ initWithFrame:
+ dealloc
+ numberOfItems
+ preferredSize
+ defaultSelectedIndex
+ didSelectItemAtIndex:
+ titleForItemAtIndex:
- initWithFrame:
- dealloc
- numberOfItems
- preferredSize
- defaultSelectedIndex
- didSelectItemAtIndex:
- titleForItemAtIndex:
@end
