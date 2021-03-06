//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSOutlineView.h>

@class KNMacOutlineDropIndicatorView, KNMacOutlineViewController, KNMacSlideContextMenuController, NSIndexSet;
@protocol KNMacOutlineViewDelegate;

@interface KNMacOutlineView : NSOutlineView
{
    KNMacOutlineViewController *mViewController;
    KNMacSlideContextMenuController *mContextMenuController;
    long long mMouseDownRow;
    BOOL mDrawSelectionOnContextMenuRow;
    BOOL mIsSelectionDragActive;
    BOOL mBlockSelectionChanges;
    KNMacOutlineDropIndicatorView *mDropIndicatorView;
    BOOL mDisableHighlightDrawing;
    BOOL mShowsDropIndicator;
    NSIndexSet *mDraggedIndexes;
    long long mContextMenuRow;
    double mSlideNumberWidthForDropTargetPositioning;
    long long mDropIndicatorRow;
    long long mDropIndicatorLevel;
}

@property(nonatomic) BOOL disableHighlightDrawing; // @synthesize disableHighlightDrawing=mDisableHighlightDrawing;
@property(nonatomic, setter=p_setDropIndicatorLevel:) long long p_dropIndicatorLevel; // @synthesize p_dropIndicatorLevel=mDropIndicatorLevel;
@property(nonatomic, setter=p_setDropIndicatorRow:) long long p_dropIndicatorRow; // @synthesize p_dropIndicatorRow=mDropIndicatorRow;
@property(nonatomic, setter=p_setShowsDropIndicator:) BOOL p_showsDropIndicator; // @synthesize p_showsDropIndicator=mShowsDropIndicator;
@property(nonatomic) double slideNumberWidthForDropTargetPositioning; // @synthesize slideNumberWidthForDropTargetPositioning=mSlideNumberWidthForDropTargetPositioning;
@property(readonly, nonatomic) long long contextMenuRow; // @synthesize contextMenuRow=mContextMenuRow;
@property(readonly, nonatomic) NSIndexSet *draggedIndexes; // @synthesize draggedIndexes=mDraggedIndexes;
@property(nonatomic) KNMacOutlineViewController *viewController; // @synthesize viewController=mViewController;
- (void)selectRowsFromRow:(long long)arg1 toPoint:(struct CGPoint)arg2;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)deleteBackward:(id)arg1;
- (void)deleteForward:(id)arg1;
- (void)outdentParagraphLevel:(id)arg1;
- (void)insertBacktab:(id)arg1;
- (void)indentParagraphLevel:(id)arg1;
- (void)insertTab:(id)arg1;
- (void)insertNewline:(id)arg1;
- (void)insertText:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveLeft:(id)arg1;
- (id)p_shiftArrowKeyEventWithType:(unsigned long long)arg1 keyChar:(unsigned short)arg2 keyCode:(unsigned short)arg3;
- (void)keyDown:(id)arg1;
- (void)removePhonetics:(id)arg1;
- (void)phonetics:(id)arg1;
- (void)editMasterForSlideNodeInContext:(id)arg1;
- (void)skipSlideNodesInContext:(id)arg1;
- (void)skipSelectedSlideNodes:(id)arg1;
- (void)collapseAll:(id)arg1;
- (void)collapse:(id)arg1;
- (void)expandAll:(id)arg1;
- (void)expand:(id)arg1;
- (void)duplicateSlideNodesInContext:(id)arg1;
- (void)duplicate:(id)arg1;
- (void)deleteSlideNodesInContext:(id)arg1;
- (void)delete:(id)arg1;
- (void)pasteAfterSlideNodesInContext:(id)arg1;
- (void)paste:(id)arg1;
- (void)cutSlideNodesInContext:(id)arg1;
- (void)cut:(id)arg1;
- (void)copySlideNodesInContext:(id)arg1;
- (void)copy:(id)arg1;
- (void)insertNewSlideNodeAfterSlideNodesInContext:(id)arg1;
- (void)insertNewSlideNode:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (void)p_contextMenuDidEndTracking;
- (id)p_contextMenuController;
- (BOOL)validateProposedFirstResponder:(id)arg1 forEvent:(id)arg2;
- (void)p_updateDropIndicatorWithRow:(long long)arg1 level:(long long)arg2;
@property(readonly, nonatomic) KNMacOutlineDropIndicatorView *p_dropIndicatorView;
- (struct CGRect)p_rectForDrawingBackgroundOnCell:(id)arg1 withRowRect:(struct CGRect)arg2;
- (void)drawBackgroundInClipRect:(struct CGRect)arg1;
- (long long)p_dropLevelAtPoint:(struct CGPoint)arg1;
- (void)p_drawView:(id)arg1 withCellFrameUnion:(struct CGRect)arg2 inContext:(id)arg3 rowRect:(struct CGRect)arg4 yOffset:(double)arg5;
- (id)p_dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (id)dragImageForRowsWithIndexes:(id)arg1 tableColumns:(id)arg2 event:(id)arg3 offset:(struct CGPoint *)arg4;
- (BOOL)performDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (void)setSelectionHighlightStyle:(long long)arg1;
- (void)setIntercellSpacing:(struct CGSize)arg1;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)p_commonInit;

// Remaining properties
@property __weak id <KNMacOutlineViewDelegate> delegate; // @dynamic delegate;

@end

