@interface SKUISearchSpellCorrectedCell : UICollectionViewCell
{
	BOOL _autoCorrected;
	id _clientContext;
	id _imageView;
	id _label;
	long long _preAutoCorrectCount;
	id _searchTerm;
	id _spellCorrectedTerm;
	id _spellCorrectionButton;
}

+ searchTerm
+ setSearchTerm:
+ initWithFrame:
+ layoutSubviews
+ clientContext
+ spellCorrectedTerm
+ setSpellCorrectedTerm:
+ autoCorrected
+ setAutoCorrected:
+ preAutoCorrectCount
+ setPreAutoCorrectCount:
+ _reloadLabel
+ spellCorrectionButton
+ .cxx_destruct
+ setClientContext:
- searchTerm
- setSearchTerm:
- initWithFrame:
- layoutSubviews
- clientContext
- spellCorrectedTerm
- setSpellCorrectedTerm:
- autoCorrected
- setAutoCorrected:
- preAutoCorrectCount
- setPreAutoCorrectCount:
- _reloadLabel
- spellCorrectionButton
- .cxx_destruct
- setClientContext:
@end
