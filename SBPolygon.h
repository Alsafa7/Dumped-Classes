@interface SBPolygon : NSObject
{
	int m_pointCount;
	Array m_points;
	Array m_pathIDs;
	Array m_weights;
	struct m_centroid;
	struct m_weightedCentroid;
	usigned long long m_baseLeftVertex;
	usigned long long m_bottomRightVertex;
}

+ makeLike:
+ isLeftHanded
+ flipHorizontally
+ meanFingertipRowAngle
+ meanRadius
+ weightedCentroid
+ setWeightedCentroid:
+ weightAtIndex:
+ findLongestOutsideEdge
+ sortAlongOutsideEdge
+ calculateCentroid
+ thumbIndex
+ calculateWeightedCentroid
+ baseOrientation
+ beginPointUpdate
+ addPoint:pathIndex:
+ endPointUpdate
+ setCentroid:
+ width
+ height
+ clear
+ centroid
+ addPoint:
+ commonInit
+ pointCount
+ rotate:
+ scale:
- makeLike:
- isLeftHanded
- flipHorizontally
- meanFingertipRowAngle
- meanRadius
- weightedCentroid
- setWeightedCentroid:
- weightAtIndex:
- findLongestOutsideEdge
- sortAlongOutsideEdge
- calculateCentroid
- thumbIndex
- calculateWeightedCentroid
- baseOrientation
- beginPointUpdate
- addPoint:pathIndex:
- endPointUpdate
- setCentroid:
- width
- height
- clear
- centroid
- addPoint:
- commonInit
- pointCount
- rotate:
- scale:
@end
