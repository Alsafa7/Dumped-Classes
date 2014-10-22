@interface SKUICellLayout : NSObject
{
	id _cell;
	id _clientContext;
	id _contentView;
	BOOL _parentWantsCellNeedsLayout;
}

+ setBackgroundColor:
+ setNeedsLayout
+ layoutSubviews
+ contentView
+ setHighlighted:
+ prepareForReuse
+ setSelected:
+ initWithTableViewCell:
+ setColoringWithColorScheme:
+ clientContext
+ initWithCollectionViewCell:
+ initWithParentView:
+ resetLayout
+ parentCellView
+ .cxx_destruct
+ setClientContext:
- setBackgroundColor:
- setNeedsLayout
- layoutSubviews
- contentView
- setHighlighted:
- prepareForReuse
- setSelected:
- initWithTableViewCell:
- setColoringWithColorScheme:
- clientContext
- initWithCollectionViewCell:
- initWithParentView:
- resetLayout
- parentCellView
- .cxx_destruct
- setClientContext:
@end
