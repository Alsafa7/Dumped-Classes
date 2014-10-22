@interface __NSSKGraph : NSObject
{
	pointer _edges;
	pointer _vertices;
	usigned long long _numV;
	usigned long long _numE;
	usigned long long _currE;
	usigned long long _dump;
	usigned long long _l_end;
}

+ initWithNumberOfVertices:numberOfEdges:
+ addEdgeWithH1:withH2:
+ numOfEdges
+ isAcyclic
+ dealloc
+ isEmpty
+ finalize
- initWithNumberOfVertices:numberOfEdges:
- addEdgeWithH1:withH2:
- numOfEdges
- isAcyclic
- dealloc
- isEmpty
- finalize
@end
