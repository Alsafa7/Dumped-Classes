@interface CLServiceVendorHeartbeatRecord : NSObject
{
	int _synCount;
	int _ackCount;
	id _silo;
	id _service;
}

+ silo
+ initTrackingService:
+ syn
+ ack
+ service
+ synCount
+ ackCount
+ .cxx_destruct
- silo
- initTrackingService:
- syn
- ack
- service
- synCount
- ackCount
- .cxx_destruct
@end
