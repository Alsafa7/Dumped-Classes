@interface SBTouchTemplate : NSObject
{
	id m_template;
	id m_candidate;
	usigned long long m_transformType;
	float m_acceptFactor;
}

+ acceptPoints:count:
+ initWithPoints:count:
+ acceptPolygon:
+ transformType
+ setTransformType:
+ acceptFactor
+ setAcceptFactor:
+ dealloc
+ pointCount
- acceptPoints:count:
- initWithPoints:count:
- acceptPolygon:
- transformType
- setTransformType:
- acceptFactor
- setAcceptFactor:
- dealloc
- pointCount
@end
