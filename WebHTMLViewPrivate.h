@interface WebHTMLViewPrivate : NSObject
{
	BOOL closed;
	BOOL ignoringMouseDraggedEvents;
	BOOL printing;
	BOOL paginateScreenContent;
	id layerHostingView;
	BOOL drawingIntoLayer;
	id mouseDownEvent;
	BOOL handlingMouseDownEvent;
	id keyDownEvent;
	BOOL exposeInputContext;
	struct lastScrollPosition;
	BOOL inScrollPositionChanged;
	id pluginController;
	id toolTip;
	id trackingRectOwner;
	pointer trackingRectUserData;
	id autoscrollTimer;
	id autoscrollTriggerEvent;
	id pageRects;
	id highlighters;
	BOOL transparentBackground;
	pointer interpretKeyEventsParameters;
	id dataSource;
	SEL selectorForDoCommandBySelector;
}

@end
