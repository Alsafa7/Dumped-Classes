@interface LapPadTableViewCell : UITableViewCell
{
	int _lap;
	double _time;
	double _runningTotal;
	id _lapLabel;
	id _runningTotalLabel;
	id _timeLabel;
	id _keylineView;
	int _cellPosition;
}

@end
