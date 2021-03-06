//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <DirectoryEditor/DirEditorPlugin.h>

@class DEDragReceiverView, NSButton, NSData, NSDictionary, NSImageView, NSMutableArray, NSMutableDictionary, NSOutlineView, NSPanel, NSPopUpButton, NSSegmentedControl, NSSplitView, NSString, NSTabView, NSTextField, NSTextView, NSView;

@interface DefaultDirEditorPlugin : DirEditorPlugin
{
    NSOutlineView *_outlineView;
    NSSplitView *_splitView;
    NSTabView *_attributeValueDetailTabView;
    NSTextView *_attributeValueDetailTextView;
    NSTextView *_attributeValueDetailDataTextView;
    DEDragReceiverView *_attributeValueDetailDataDragReceiverView;
    NSImageView *_attributeValueDetailImageView;
    NSView *_attributeValueDetailContainerView;
    NSSegmentedControl *_attributeValueAddRemoveSegmented;
    NSPopUpButton *_attributeValueTypePopUp;
    NSSegmentedControl *_attributeValueTypeSegmented;
    NSPanel *_newAttributeSheet;
    NSPopUpButton *_newAttributeSheetAttrPopup;
    NSTextField *_newAttributeSheetNativeTextField;
    NSButton *_newAttributeSheetOKButton;
    NSButton *_newAttributeSheetCancelButton;
    NSDictionary *_attributes;
    NSMutableDictionary *_mutableAttributes;
    NSMutableArray *_retainedOutlineViewObjects;
    NSDictionary *_attrValueTypeTabToMenuItemMapping;
    NSDictionary *_metaAttrStringAttrs;
    BOOL selectedRecordIsEditable;
    BOOL selectedAttributeIsEditable;
    BOOL selectedAttributeIsRemovable;
    BOOL textFieldDirty;
    BOOL dataFieldDirty;
    BOOL currentAttrValueIsString;
    BOOL currentAttrValueIsXMLPlist;
    BOOL currentAttrValueIsImage;
    NSString *currentAttrValueType;
    NSData *draggedInFileData;
}

+ (BOOL)recordTypeSupported:(id)arg1;
@property(retain) NSData *draggedInFileData; // @synthesize draggedInFileData;
@property(retain) NSString *currentAttrValueType; // @synthesize currentAttrValueType;
@property BOOL currentAttrValueIsImage; // @synthesize currentAttrValueIsImage;
@property BOOL currentAttrValueIsXMLPlist; // @synthesize currentAttrValueIsXMLPlist;
@property BOOL currentAttrValueIsString; // @synthesize currentAttrValueIsString;
@property BOOL dataFieldDirty; // @synthesize dataFieldDirty;
@property BOOL textFieldDirty; // @synthesize textFieldDirty;
@property BOOL selectedAttributeIsRemovable; // @synthesize selectedAttributeIsRemovable;
@property BOOL selectedAttributeIsEditable; // @synthesize selectedAttributeIsEditable;
@property BOOL selectedRecordIsEditable; // @synthesize selectedRecordIsEditable;
- (void)dealloc;
- (void)awakeFromNib;
- (void)outlineViewSelectionDidChange:(id)arg1;
- (void)attributeImageValueChanged:(id)arg1;
- (void)controlTextDidChange:(id)arg1;
- (void)newAttributeSheetButtonHit:(id)arg1;
- (void)removeButtonHit:(id)arg1;
- (void)addValueMenuItemSelected:(id)arg1;
- (void)addAttributeMenuItemSelected:(id)arg1;
- (void)addRemoveAttrSegmentCtrlHit:(id)arg1;
- (void)viewAttrValueAsSegmentedChanged:(id)arg1;
- (void)viewAttrValueAsPopUpChanged:(id)arg1;
- (id)recordsAfterEditing;
- (BOOL)tabWithIdentifierCanEdit:(id)arg1;
- (void)loadTabWithIdentifier:(id)arg1 forRecords:(id)arg2 ofType:(id)arg3 isNewRecord:(BOOL)arg4 isEditable:(BOOL)arg5;
- (BOOL)attributeIsReadOnly:(id)arg1;
- (id)displayStringForAttributeValue:(id)arg1;
- (void)recordUnsavedEdits;
- (void)populateSelectedAttributeValue;
- (BOOL)handleDropOfType:(id)arg1 withPasteboard:(id)arg2;
- (id)dragTypesForViewToRegisterFor:(id)arg1;
- (id)outlineView:(id)arg1 dataCellForTableColumn:(id)arg2 item:(id)arg3;
- (id)outlineView:(id)arg1 objectValueForTableColumn:(id)arg2 byItem:(id)arg3;
- (long long)outlineView:(id)arg1 numberOfChildrenOfItem:(id)arg2;
- (BOOL)outlineView:(id)arg1 isItemExpandable:(id)arg2;
- (id)outlineView:(id)arg1 child:(long long)arg2 ofItem:(id)arg3;
- (void)textDidEndEditing:(id)arg1;
- (void)textDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

