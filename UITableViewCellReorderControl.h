@interface UITableViewCellReorderControl : UIControl
{
	id _cell;
	struct _downPoint;
}

+ setFrame:
+ layoutSubviews
+ cancelTrackingWithEvent:
+ shouldTrack
+ beginTrackingWithTouch:withEvent:
+ continueTrackingWithTouch:withEvent:
+ endTrackingWithTouch:withEvent:
+ grabberImage
+ initWithTableViewCell:
- setFrame:
- layoutSubviews
- cancelTrackingWithEvent:
- shouldTrack
- beginTrackingWithTouch:withEvent:
- continueTrackingWithTouch:withEvent:
- endTrackingWithTouch:withEvent:
- grabberImage
- initWithTableViewCell:
@end
