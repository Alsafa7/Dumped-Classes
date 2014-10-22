@interface ML3DatabaseNaturalStatement : NSObject
{
	id _sql;
	id _parameters;
}

+ initWithCoder:
+ encodeWithCoder:
+ sql
+ parameters
+ setParameter:forPosition:
+ setSql:
+ setParameters:
+ initWithSQL:parameters:
+ .cxx_destruct
- initWithCoder:
- encodeWithCoder:
- sql
- parameters
- setParameter:forPosition:
- setSql:
- setParameters:
- initWithSQL:parameters:
- .cxx_destruct
@end
