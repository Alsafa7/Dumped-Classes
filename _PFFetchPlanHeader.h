@interface _PFFetchPlanHeader : NSObject
{
	id fetch_request;
	id cached_sql_statement;
	unsigned int requested_batch_size;
	id sql_core;
	id sql_model;
	id statement_entity;
	id current_context;
	id row_cache;
	pointer entity_for_ek_funptr;
	struct flags;
}

@end
