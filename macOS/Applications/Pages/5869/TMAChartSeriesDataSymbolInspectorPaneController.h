//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TMAChartFillSupportingInspectorPaneController.h"

@class NSArrayController, NSButton, NSStepper, NSTextField, TMAChartSeriesDataSymbolInspectorPopupButton, TMAInspectorTextField;

@interface TMAChartSeriesDataSymbolInspectorPaneController : TMAChartFillSupportingInspectorPaneController
{
    TMAChartSeriesDataSymbolInspectorPopupButton *mSymbolPopUpButton;
    NSArrayController *mArrayController;
    NSTextField *mSizeLabel;
    TMAInspectorTextField *mSizeTextField;
    NSStepper *mSizeStepper;
    NSTextField *mNoneDummyLabel;
    NSButton *_dataPointsCheckbox;
}

+ (long long)defaultDisclosureState;
+ (id)disclosureButtonTitleForEditingState:(id)arg1;
+ (unsigned long long)sortOrder;
+ (id)chartEditorProxyVisibilityKey;
+ (id)tabIdentifier;
+ (id)nibName;
@property(nonatomic) __weak NSButton *dataPointsCheckbox; // @synthesize dataPointsCheckbox=_dataPointsCheckbox;
@property(nonatomic) __weak NSTextField *noneDummyLabel; // @synthesize noneDummyLabel=mNoneDummyLabel;
@property(retain, nonatomic) NSArrayController *arrayController; // @synthesize arrayController=mArrayController;
@property(nonatomic) __weak NSStepper *sizeStepper; // @synthesize sizeStepper=mSizeStepper;
@property(nonatomic) __weak TMAInspectorTextField *sizeTextField; // @synthesize sizeTextField=mSizeTextField;
@property(nonatomic) __weak NSTextField *sizeLabel; // @synthesize sizeLabel=mSizeLabel;
@property(nonatomic) __weak TMAChartSeriesDataSymbolInspectorPopupButton *symbolPopUpButton; // @synthesize symbolPopUpButton=mSymbolPopUpButton;
- (void).cxx_destruct;
- (id)fillStyleMenuTags;
- (id)observedKeyPathsForFillStylePopupMenu;
- (unsigned long long)fillInspectorSortOrder;
- (id)fillProperty;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)hideFillControls;
- (BOOL)hideStrokeAndFillControls;
- (double)inspectorMaxSymbolSize;
- (double)inspectorMinSymbolSize;
- (void)setRepresentedObject:(id)arg1;
- (void)p_symbolMenuItemSelected:(id)arg1;
- (id)p_tagForDataSymbolMenu;
- (id)p_observedKeyPathsForSymbolMenu;
- (void)loadView;
- (void)dealloc;

@end

