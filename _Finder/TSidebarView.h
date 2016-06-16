//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTrackableOutlineView.h"

@class TTableViewShrinkToFitController;

@interface TSidebarView : NSTrackableOutlineView
{
    _Bool _shouldHandleCommandClickOnMouseUp;
    _Bool _keyOnMouseDown;
    _Bool _shouldCancelPendingInvoke;
    _Bool _handlingCmdMouseDown;
    _Bool _handlingItemClick;
    _Bool _suppressSelectionClearForScreenCapture;
    TTableViewShrinkToFitController *_stfController;
    struct TNotificationCenterObserver _scrollIntoViewObserver;
    struct TNSRef<TBrowserImmediateActionGestureRecognizerDelegate *> _immediateActionGestureRecognizerDelegate;
    struct TNSRef<NSImmediateActionGestureRecognizer *> _renameImmediateActionGestureRecognizer;
}

@property(nonatomic) _Bool suppressSelectionClearForScreenCapture; // @synthesize suppressSelectionClearForScreenCapture=_suppressSelectionClearForScreenCapture;
@property(nonatomic) _Bool handlingItemClick; // @synthesize handlingItemClick=_handlingItemClick;
@property(nonatomic) _Bool keyOnMouseDown; // @synthesize keyOnMouseDown=_keyOnMouseDown;
@property(nonatomic) _Bool shouldCancelPendingInvoke; // @synthesize shouldCancelPendingInvoke=_shouldCancelPendingInvoke;
@property(nonatomic) _Bool shouldHandleCommandClickOnMouseUp; // @synthesize shouldHandleCommandClickOnMouseUp=_shouldHandleCommandClickOnMouseUp;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGRect)selectionRect;
- (void)viewDidMoveToWindow;
- (void)_drawClearForSelectionArea;
- (id)stfEditorController;
- (void)shrinkToFitTextViewAboutToClose;
- (void)shrinkToFitTextViewEditingComplete:(id)arg1;
- (_Bool)shrinkToFitTextViewAboutToOpen;
- (_Bool)internalSTFTextViewAboutToOpenNode:(const struct TFENode *)arg1;
- (void)finishEditing;
- (_Bool)setUpToEditRow:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)preparedCellAtColumn:(long long)arg1 row:(long long)arg2;
- (void)editColumn:(long long)arg1 row:(long long)arg2 withEvent:(id)arg3 select:(BOOL)arg4;
- (void)updateSTFEditorLocation;
- (void)cancelPendingInvoke;
- (void)stopEditing:(_Bool)arg1;
- (void)startEditingWithNode:(const struct TFENode *)arg1;
- (void)draggingEnded:(id)arg1;
- (void)draggingExited:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (void)rowHit:(long long)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDraggedWorkaround;
- (id)menuForEvent:(id)arg1;
- (void)deselectRow:(long long)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)_setUpImmediateActionGestureRecognizers;
- (unsigned long long)hitTestForEvent:(id)arg1 row:(long long)arg2;
- (struct TFENode)nodeForRow:(long long)arg1;
- (BOOL)acceptsFirstResponder;
- (void)setRowSizeStyle:(long long)arg1;
- (id)makeViewWithIdentifier:(id)arg1 owner:(id)arg2;
- (BOOL)wantsUpdateLayer;
@property id <TSidebarViewDelegate> delegate; // @dynamic delegate;
- (id)controller;
- (void)finalize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

