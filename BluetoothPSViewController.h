@interface BluetoothPSViewController : PSViewController
{
	id tableViewAdapter;
	id bluetoothController;
	id _wrapperView;
	id tableView;
	BOOL initialized;
}

@end
