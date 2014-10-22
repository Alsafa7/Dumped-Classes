@interface PBFilter : NSObject
{
	id _ciFilter;
	id _wrapMirrorFilter;
}

+ pointValueForKeyIfSupported:
+ floatValueForKeyIfSupported:
+ setPointValue:forKeyIfSupported:
+ setFloatValue:forKeyIfSupported:
+ handleTapGesture:viewSize:mirror:
+ handleGestureAtLocations:count:translation:viewSize:stateBegan:mirror:
+ handlePanGesture:viewSize:stateBegan:mirror:
+ handlePinchGesture:stateBegan:
+ handleRotateGesture:stateBegan:mirror:
+ allowAbsoluteGestures
+ _presentationName
+ renderWithContext:inputSize:outputRect:mirrored:
+ inputKeys
+ setDefaults
+ dealloc
+ init
+ description
+ name
+ localizedName
+ ciFilterName
+ needsWrapMirror
+ applyParametersToCIFilter:extent:
+ createOutputImage:mirrored:size:
+ resetInputImage
+ ciFilter
- pointValueForKeyIfSupported:
- floatValueForKeyIfSupported:
- setPointValue:forKeyIfSupported:
- setFloatValue:forKeyIfSupported:
- handleTapGesture:viewSize:mirror:
- handleGestureAtLocations:count:translation:viewSize:stateBegan:mirror:
- handlePanGesture:viewSize:stateBegan:mirror:
- handlePinchGesture:stateBegan:
- handleRotateGesture:stateBegan:mirror:
- allowAbsoluteGestures
- _presentationName
- renderWithContext:inputSize:outputRect:mirrored:
- inputKeys
- setDefaults
- dealloc
- init
- description
- name
- localizedName
- ciFilterName
- needsWrapMirror
- applyParametersToCIFilter:extent:
- createOutputImage:mirrored:size:
- resetInputImage
- ciFilter
@end
