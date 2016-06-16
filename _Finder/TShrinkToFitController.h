//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"

@class NSFont, NSString, NSTimer, NSWindow, TRenameOperation, TShrinkToFitTextView;

@interface TShrinkToFitController : NSObject <NSWindowDelegate>
{
    TShrinkToFitTextView *_stfTextView;
    NSWindow *_parentWindow;
    NSTimer *_delayTimer;
    NSString *_initialText;
    NSFont *_font;
    struct _NSRange _selectionRange;
    struct CGRect _maxGlobalFrame;
    unsigned long long _maxUniChars;
    long long _maxNumLines;
    unsigned long long _alignment;
    long long _baseWritingDirection;
    _Bool _disableDeepClickLookUp;
    struct TFENode _configuredNode;
    TRenameOperation *_renameOp;
    id <TShrinkToFitDelegateProtocol> _delegate;
}

@property(nonatomic) _Bool disableDeepClickLookUp; // @synthesize disableDeepClickLookUp=_disableDeepClickLookUp;
@property(retain, nonatomic) NSFont *font; // @synthesize font=_font;
@property(nonatomic) long long baseWritingDirection; // @synthesize baseWritingDirection=_baseWritingDirection;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic) unsigned long long maxUniChars; // @synthesize maxUniChars=_maxUniChars;
@property(nonatomic) struct CGRect maxGlobalFrame; // @synthesize maxGlobalFrame=_maxGlobalFrame;
@property(readonly, retain, nonatomic) TRenameOperation *renameOp; // @synthesize renameOp=_renameOp;
@property(readonly, retain, nonatomic) NSWindow *parentWindow; // @synthesize parentWindow=_parentWindow;
@property(readonly, retain, nonatomic) TShrinkToFitTextView *stfTextView; // @synthesize stfTextView=_stfTextView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TFENode)nodeForEditing;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (void)windowDidResignKey:(id)arg1;
@property(readonly, nonatomic) _Bool isEditing;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingViaDelayTimer;
- (void)startEditing:(_Bool)arg1;
@property(nonatomic) long long maxNumLines;
- (struct CGRect)globalFrame;
- (int)editingSelectionType;
- (void)setText:(id)arg1 selectionRange:(const struct _NSRange *)arg2;
- (void)configureForNode:(const struct TFENode *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithParentWindow:(id)arg1 renameOp:(id)arg2 delegate:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

