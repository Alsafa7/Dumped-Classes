@interface _NSThreadData : NSObject
{
	id dict;
	id name;
	id target;
	SEL selector;
	id argument;
	int seqNum;
	unsigned char qstate;
	unsigned char ____;
	unsigned char cancel;
	unsigned char status;
	id performQ;
	id performD;
	struct attr;
	pointer tid;
}

@end
