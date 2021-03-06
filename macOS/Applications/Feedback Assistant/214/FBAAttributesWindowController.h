//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

@class FBAAttributeRepository, FBAMainWindowController, NSArrayController, NSButton, NSMutableArray, NSProgressIndicator, NSTableView;

@interface FBAAttributesWindowController : NSWindowController
{
    BOOL _sheetOpened;
    NSMutableArray *_detectedAttributes;
    FBAAttributeRepository *_attributeRepository;
    NSTableView *_attributesTableView;
    NSArrayController *_attributesController;
    NSButton *_refreshAttributesButton;
    NSButton *_submitAttributesButton;
    NSProgressIndicator *_progressIndicator;
    FBAMainWindowController *_parentWindowController;
}

@property BOOL sheetOpened; // @synthesize sheetOpened=_sheetOpened;
@property(nonatomic) __weak FBAMainWindowController *parentWindowController; // @synthesize parentWindowController=_parentWindowController;
@property __weak NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property __weak NSButton *submitAttributesButton; // @synthesize submitAttributesButton=_submitAttributesButton;
@property __weak NSButton *refreshAttributesButton; // @synthesize refreshAttributesButton=_refreshAttributesButton;
@property(retain) NSArrayController *attributesController; // @synthesize attributesController=_attributesController;
@property __weak NSTableView *attributesTableView; // @synthesize attributesTableView=_attributesTableView;
@property(retain) FBAAttributeRepository *attributeRepository; // @synthesize attributeRepository=_attributeRepository;
@property(retain) NSMutableArray *detectedAttributes; // @synthesize detectedAttributes=_detectedAttributes;
- (void).cxx_destruct;
- (void)attributesError:(id)arg1;
- (BOOL)canSubmitAttributes;
- (void)attributesDidSubmit:(id)arg1;
- (void)attributesDetectedChanges:(id)arg1;
- (void)attributesDidScan:(id)arg1;
- (void)submitAttributes:(id)arg1;
- (void)refreshAttributes:(id)arg1;
- (void)refreshAttributesIfExpired;
- (void)openSheetForWindow:(id)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(unsigned long long)arg2 contextInfo:(void *)arg3;
- (void)closeSheet:(id)arg1;
- (void)didPresentErrorWithRecovery:(BOOL)arg1 contextInfo:(void *)arg2;
- (void)windowDidLoad;
- (void)setParent:(id)arg1;
- (void)dealloc;
- (id)init;

@end

