@interface AlarmPadViewController : UIViewController
{
	id _addOrEditPopover;
	id _addController;
	id _editListController;
	struct _previousAlarmsViewport;
	id _alarmDragRecognizer;
	id _draggingAlarm;
	id _dragScrollDisplayLink;
	BOOL _dragScrollingUp;
	double _dragScrollTimestamp;
}

@end
