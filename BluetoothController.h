@interface BluetoothController : NSObject
{
	int hci_state;
	BOOL system_bluetooth;
	int state;
	int targetType;
	BOOL isConnected;
	BOOL isActive;
	id listener;
}

+ bluetoothStateChanged
+ bluetoothType
+ connectionBroke
+ canChange
+ eventPacketHandler:withSize:
+ requestType:
+ isConnected
+ setListener:
+ init
+ isActive
+ close
+ resetState
+ listener
+ targetType
+ open
- bluetoothStateChanged
- bluetoothType
- connectionBroke
- canChange
- eventPacketHandler:withSize:
- requestType:
- isConnected
- setListener:
- init
- isActive
- close
- resetState
- listener
- targetType
- open
@end
