@interface PCInterfaceMonitor : NSObject
{
	id _internal;
	id _delegateMap;
}

+ dealloc
+ isInterfaceUsable
+ isPoorLinkQuality
+ addDelegate:queue:
+ isInternetReachable
+ linkQualityString
+ isInterfaceHistoricallyUsable
+ interfaceLinkQualityChanged:previousLinkQuality:
+ interfaceReachabilityChanged:
+ interfaceRadioHotnessChanged:
+ isRadioHot
+ interfaceIdentifier
+ currentRAT
+ isLTEWithCDRX
+ initWithInterfaceIdentifier:
+ removeDelegate:
+ linkQuality
- dealloc
- isInterfaceUsable
- isPoorLinkQuality
- addDelegate:queue:
- isInternetReachable
- linkQualityString
- isInterfaceHistoricallyUsable
- interfaceLinkQualityChanged:previousLinkQuality:
- interfaceReachabilityChanged:
- interfaceRadioHotnessChanged:
- isRadioHot
- interfaceIdentifier
- currentRAT
- isLTEWithCDRX
- initWithInterfaceIdentifier:
- removeDelegate:
- linkQuality
@end
