@interface PKPhysicsContact : NSObject
{
	id _bodyA;
	id _bodyB;
	struct _contactPoint;
	double _impulse;
	BOOL _didBegin;
	BOOL _didEnd;
}

+ setBodyA:
+ setBodyB:
+ init
+ setDidBegin:
+ setDidEnd:
+ didBegin
+ didEnd
+ setContactPoint:
+ setCollisionImpulse:
+ collisionImpulse
+ .cxx_construct
+ bodyA
+ bodyB
+ contactPoint
+ .cxx_destruct
- setBodyA:
- setBodyB:
- init
- setDidBegin:
- setDidEnd:
- didBegin
- didEnd
- setContactPoint:
- setCollisionImpulse:
- collisionImpulse
- .cxx_construct
- bodyA
- bodyB
- contactPoint
- .cxx_destruct
@end
