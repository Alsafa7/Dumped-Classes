@interface UIKBShape : NSObject
{
	id m_geometry;
	struct m_originalFrame;
	struct m_frame;
	struct m_paddedFrame;
	usigned long long m_uid;
	BOOL m_scaled;
}

+ dealloc
+ initWithCoder:
+ encodeWithCoder:
+ init
+ setFrame:
+ frame
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ isEmpty
+ geometry
+ paddedFrame
+ setPaddedFrame:
+ setGeometry:
+ originalFrame
+ uid
+ setFrame:resetOriginalFrame:
+ _scaleRect:inYAxis:
+ makeLikeOther:
+ setFrameOnly:
+ addRectFrom:
+ addRectFrom:widthFraction:adjustOriginFactor:
+ scaleWidth:
+ scaleIfNeeded:onlyYAxis:
+ initWithGeometry:frame:paddedFrame:
- dealloc
- initWithCoder:
- encodeWithCoder:
- init
- setFrame:
- frame
- isEqual:
- hash
- description
- copyWithZone:
- isEmpty
- geometry
- paddedFrame
- setPaddedFrame:
- setGeometry:
- originalFrame
- uid
- setFrame:resetOriginalFrame:
- _scaleRect:inYAxis:
- makeLikeOther:
- setFrameOnly:
- addRectFrom:
- addRectFrom:widthFraction:adjustOriginFactor:
- scaleWidth:
- scaleIfNeeded:onlyYAxis:
- initWithGeometry:frame:paddedFrame:
@end
