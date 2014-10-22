@interface SKUISearchResultGroup : NSObject
{
	id _editorialIndexSet;
	id _entities;
	id _groupKind;
}

+ init
+ numberOfEntities
+ entityTypeAtIndex:
+ entityAtIndex:
+ _setGroupKind:
+ _addEntity:withIdentifier:type:
+ availableEntities
+ groupKind
+ .cxx_destruct
- init
- numberOfEntities
- entityTypeAtIndex:
- entityAtIndex:
- _setGroupKind:
- _addEntity:withIdentifier:type:
- availableEntities
- groupKind
- .cxx_destruct
@end
