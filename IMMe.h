@interface IMMe : NSObject
{
	id _person;
	id _abNickname;
	id _abFirstName;
	id _abFullName;
	id _abLastName;
	id _abEmails;
	id _abIMHandles;
	id _loginIMHandles;
}

+ dealloc
+ init
+ description
+ person
+ removeLoginIMHandle:
+ resetABPerson
+ addLoginIMHandle:
+ setIMPerson:
+ removeIMHandle:
+ addIMHandle:
+ myPictureChanged
+ rebuildIMHandles
+ setFirstName:lastName:
+ _imHandlesWithIDs:onAccount:
+ imHandles
+ loginIMHandles
+ isIMHandleLoginIMHandle:
+ bestIMHandle
+ guid
+ firstName
+ lastName
+ fullName
+ email
+ emails
+ nickname
- dealloc
- init
- description
- person
- removeLoginIMHandle:
- resetABPerson
- addLoginIMHandle:
- setIMPerson:
- removeIMHandle:
- addIMHandle:
- myPictureChanged
- rebuildIMHandles
- setFirstName:lastName:
- _imHandlesWithIDs:onAccount:
- imHandles
- loginIMHandles
- isIMHandleLoginIMHandle:
- bestIMHandle
- guid
- firstName
- lastName
- fullName
- email
- emails
- nickname
@end
