@interface GKContiguousContainerView : UIView
{
	BOOL _vertical;
	BOOL _applyOrthogonalConstraints;
	id _baselineView;
	double _overlap;
	id _replaceableConstraints;
}

+ replaceableConstraints
+ setReplaceableConstraints:
+ replaceSubviews:
+ setApplyOrthogonalConstraints:
+ _addContiguousSubviews:
+ baselineView
+ setBaselineView:
+ vertical
+ applyOrthogonalConstraints
+ dealloc
+ sizeThatFits:
+ intrinsicContentSize
+ viewForBaselineLayout
+ setVertical:
+ setOverlap:
+ overlap
- replaceableConstraints
- setReplaceableConstraints:
- replaceSubviews:
- setApplyOrthogonalConstraints:
- _addContiguousSubviews:
- baselineView
- setBaselineView:
- vertical
- applyOrthogonalConstraints
- dealloc
- sizeThatFits:
- intrinsicContentSize
- viewForBaselineLayout
- setVertical:
- setOverlap:
- overlap
@end
