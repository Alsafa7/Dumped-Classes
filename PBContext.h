@interface PBContext : NSObject
{

}

+ init
+ createCVPixelBufferForFilter:inputPixelBuffer:mirrored:
+ applyFilter:toSurface:mirrored:resultHandler:
+ applyFilter:toSurface:mirrored:surfaceResultHandler:
+ renderFilter:inputPixelBuffer:
+ renderFilter:inputPixelBuffer:mirrored:
+ renderNineUp:inputPixelBuffer:
+ renderNineUp:inputPixelBuffer:mirrored:
+ createCVPixelBufferForFilter:inputPixelBuffer:
+ outputImageQueue
+ setOutputImageQueue:
+ largePool
+ setLargePool:
+ smallPool
+ setSmallPool:
+ preloadFilter:
- init
- createCVPixelBufferForFilter:inputPixelBuffer:mirrored:
- applyFilter:toSurface:mirrored:resultHandler:
- applyFilter:toSurface:mirrored:surfaceResultHandler:
- renderFilter:inputPixelBuffer:
- renderFilter:inputPixelBuffer:mirrored:
- renderNineUp:inputPixelBuffer:
- renderNineUp:inputPixelBuffer:mirrored:
- createCVPixelBufferForFilter:inputPixelBuffer:
- outputImageQueue
- setOutputImageQueue:
- largePool
- setLargePool:
- smallPool
- setSmallPool:
- preloadFilter:
@end
