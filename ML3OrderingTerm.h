@interface ML3OrderingTerm : NSObject
{
	int _direction;
	id _property;
	id _collation;
}

+ initWithProperty:
+ property
+ initWithCoder:
+ encodeWithCoder:
+ isEqual:
+ hash
+ description
+ copyWithZone:
+ direction
+ appendSQLToMutableString:entityClass:
+ initWithProperty:direction:
+ initWithProperty:direction:collation:
+ collation
+ .cxx_destruct
- initWithProperty:
- property
- initWithCoder:
- encodeWithCoder:
- isEqual:
- hash
- description
- copyWithZone:
- direction
- appendSQLToMutableString:entityClass:
- initWithProperty:direction:
- initWithProperty:direction:collation:
- collation
- .cxx_destruct
@end
