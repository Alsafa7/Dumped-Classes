@interface AppLaunchStatsREventHandler : NSObject
{
	id aplsComputation;
	id aplsState;
	id aplsStateHandlerQueue;
	id rEventQueue;
}

+ hdlr_getscores:withXPCObject:
+ hdlr_ok2launch:withXPCObject:
+ hdlr_dataforecast:withXPCObject:
+ hdlr_appforecast:withXPCObject:
+ hdlr_energyforecast:withXPCObject:
+ hdlr_budgetRead:
+ hdlr_dataTransferStop:
+ hdlr_resourceAvailbility:
+ hdlr_updateAliveList:
+ hdlr_resourcePool:
+ hdlr_readTrendEvents:
+ hdlr_dbolderthan:
+ hdlr_nonprewarm:
+ init:withHandlers:
+ hdlr:
+ .cxx_destruct
- hdlr_getscores:withXPCObject:
- hdlr_ok2launch:withXPCObject:
- hdlr_dataforecast:withXPCObject:
- hdlr_appforecast:withXPCObject:
- hdlr_energyforecast:withXPCObject:
- hdlr_budgetRead:
- hdlr_dataTransferStop:
- hdlr_resourceAvailbility:
- hdlr_updateAliveList:
- hdlr_resourcePool:
- hdlr_readTrendEvents:
- hdlr_dbolderthan:
- hdlr_nonprewarm:
- init:withHandlers:
- hdlr:
- .cxx_destruct
@end
