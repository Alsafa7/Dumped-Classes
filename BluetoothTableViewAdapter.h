@interface BluetoothTableViewAdapter : NSObject
{
	id bluetoothActivity;
	id _tableView;
	id loggingSwitch;
}

+ bluetoothStateChanged
+ setLoggingSwitch:
+ loggingSwitchToggled
+ loggingSwitch
+ tableView:willSelectRowAtIndexPath:
+ tableView:numberOfRowsInSection:
+ tableView:cellForRowAtIndexPath:
+ numberOfSectionsInTableView:
+ tableView:titleForHeaderInSection:
+ tableView:titleForFooterInSection:
+ initWithTableView:
- bluetoothStateChanged
- setLoggingSwitch:
- loggingSwitchToggled
- loggingSwitch
- tableView:willSelectRowAtIndexPath:
- tableView:numberOfRowsInSection:
- tableView:cellForRowAtIndexPath:
- numberOfSectionsInTableView:
- tableView:titleForHeaderInSection:
- tableView:titleForFooterInSection:
- initWithTableView:
@end
