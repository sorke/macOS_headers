//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSColorPicker.h>

#import "NSColorPickingCustom.h"

@class NSArray, NSButton, NSColorList, NSLayoutConstraint, NSMutableDictionary, NSPageableTableView, NSPanel, NSPopUpButton, NSSearchField, NSString, NSTextField, NSView;

@interface NSColorPickerPageableNameList : NSColorPicker <NSColorPickingCustom>
{
    NSView *listPickerView;
    NSPopUpButton *listPopUp;
    NSTextField *renamePrompt;
    NSTextField *renameString;
    NSButton *renameButton;
    NSPanel *renamePanel;
    NSButton *newColorButton;
    NSSearchField *filterField;
    NSPopUpButton *actionPopupButton;
    NSLayoutConstraint *trailingRemoveButtonLayoutConstraint;
    NSMutableDictionary *_listDict;
    NSMutableDictionary *_attachedListDict;
    NSString *_currListName;
    NSColorList *_activeColorList;
    NSArray *_sortedColorListNames;
    NSPageableTableView *_tableView;
    NSButton *removeColorButton;
    unsigned int _showingError:1;
    unsigned int _selectionDidChangeHappened:1;
    unsigned int _ui_is_built:1;
    unsigned int _reserved:29;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (BOOL)tableView:(id)arg1 acceptDrop:(id)arg2 row:(long long)arg3 dropOperation:(unsigned long long)arg4;
- (unsigned long long)tableView:(id)arg1 validateDrop:(id)arg2 proposedRow:(long long)arg3 proposedDropOperation:(unsigned long long)arg4;
- (BOOL)tableView:(id)arg1 writeRowsWithIndexes:(id)arg2 toPasteboard:(id)arg3;
- (id)pasteboardTypeForReordering;
- (BOOL)pageableTableView:(id)arg1 handleKeyDownEvent:(id)arg2;
- (id)activeColorList;
- (void)tableViewClicked:(id)arg1;
- (void)tableViewSelectionDidChange:(id)arg1;
- (BOOL)tableView:(id)arg1 shouldEditTableColumn:(id)arg2 row:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (id)_colorForRow:(long long)arg1;
- (BOOL)control:(id)arg1 textShouldEndEditing:(id)arg2;
- (void)tableView:(id)arg1 setObjectValue:(id)arg2 forTableColumn:(id)arg3 row:(long long)arg4;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)_errorDuplicateColor:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)endSheetReturningTag:(id)arg1;
- (void)filterChanged:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (BOOL)control:(id)arg1 textView:(id)arg2 doCommandBySelector:(SEL)arg3;
- (void)removeList:(id)arg1;
- (void)removeListSheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (void)removeColor:(id)arg1;
- (void)_removeCurrentColor;
- (id)_currentSelectedColorListColorName;
- (void)renameList:(id)arg1;
- (void)openList:(id)arg1;
- (void)openListFromFile:(id)arg1;
- (void)newList:(id)arg1;
- (id)newListName:(id)arg1;
- (void)newColor:(id)arg1;
- (id)newColorName:(id)arg1;
- (void)copyColorAtIndex:(long long)arg1 toIndex:(long long)arg2 saveList:(BOOL)arg3;
- (void)moveColorAtIndex:(long long)arg1 toIndex:(long long)arg2 saveList:(BOOL)arg3;
- (void)insertNewColor:(id)arg1 atIndex:(long long)arg2 andShowInWell:(BOOL)arg3;
- (void)addNewColor:(id)arg1 andShowInWell:(BOOL)arg2;
- (BOOL)saveList:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)addColorAllowed;
- (BOOL)removeColorAllowed;
- (BOOL)isCurrListEditable;
- (BOOL)removeListEnabled;
- (long long)findColorNamed:(id)arg1 inList:(id)arg2 usingLocalName:(BOOL)arg3;
- (void)restoreDefaults;
- (void)saveDefaults;
- (void)loadColorLists;
- (id)attachedListDictionary;
- (id)listDictionary;
- (void)setCurrListName:(id)arg1;
- (void)detachColorList:(id)arg1;
- (void)attachColorList:(id)arg1;
- (void)attachColorList:(id)arg1 makeSelected:(BOOL)arg2;
- (void)attachColorList:(id *)arg1 systemList:(BOOL)arg2 makeSelected:(BOOL)arg3;
- (void)replaceColorList:(id)arg1 withColorList:(id *)arg2;
- (void)switchList:(id)arg1;
- (void)switchToListNamed:(id)arg1;
- (BOOL)_endColorListInlineEditing;
- (void)refreshUI;
- (void)_reloadColorListTableView;
- (void)_colorListChanged:(id)arg1;
- (void)_reloadColorListTableViewForFilterChange;
- (void)_updateSortedColorListNames;
- (id)_currentFilterString;
- (void)insertPopItemWithTitle:(id)arg1 andObject:(id)arg2 atIndex:(long long)arg3;
- (void)insertPopItemWithTitle:(id)arg1 andObject:(id)arg2;
- (id)buttonToolTip;
- (id)initWithPickerMask:(unsigned long long)arg1 colorPanel:(id)arg2;
- (struct CGSize)minContentSize;
- (double)_insertionOrder;
- (id)provideNewButtonImage;
- (void)setColor:(id)arg1;
- (void)_selectColorInTableView;
- (long long)_colorIndexInTableView;
- (double)_matchQualityOfColorAtIndex:(unsigned long long)arg1 toColor:(id)arg2 ifBetterThan:(double)arg3;
- (id)provideNewView:(BOOL)arg1;
- (void)_changedPossibleKeys;
- (void)setupLoadedNib;
- (long long)currentMode;
- (BOOL)supportsMode:(long long)arg1;
- (long long)_currentColorIndex;
- (void)awakeFromNib;
- (void)dealloc;

@end

