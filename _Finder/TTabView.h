//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

#import "NSDraggingSource.h"
#import "NSMenuDelegate.h"

@class NSString, TTabViewController, TTabViewItem;

@interface TTabView : NSView <NSMenuDelegate, NSDraggingSource>
{
    struct TNSRef<NSImage *> _windowImage;
    long long _containerValidatorIDCopy;
    vector_51cfce5f _tabs;
    struct TNSRef<TTabViewCoverLayer *> _leftCoverLayer;
    struct TNSRef<TTabViewCoverLayer *> _rightCoverLayer;
    TNSRef_720ff929 _selectedTabViewItem;
    struct TNSRef<NSView *> _tabContainer;
    struct TNotificationCenterObserver _scrolled;
    _Bool _isOnDemandSpringLoadingArmed;
    _Bool _isOnDemandSpringLoadingActivated;
    _Bool _tearingDown;
    _Bool _isMergingTabs;
    _Bool _trackingTabClick;
    _Bool _trackingDrag;
    _Bool _suppressAnimation;
    _Bool _handlingTornOutDrag;
    _Bool _animatingTabInsertion;
    _Bool _springBlinkOff;
    _Bool _springingTabNow;
    _Bool _plusButtonAcceptingDrop;
    int _closeButtonState;
    int _plusTrackState;
    TTabViewController *_delegate;
    long long _ghostTabIndex;
    TNSRef_720ff929 _trackingTabDrag;
    TNSRef_720ff929 _buildingContextMenuForTab;
    long long _tabAcceptingDropIndex;
    TNSRef_720ff929 _tabTrackingCloseButtonClick;
    TNSRef_720ff929 _tabTrackingCloseButtonMouseOver;
    TNSRef_720ff929 _tabMouseOverTab;
    double _tabWidthOnCloseBoxClick;
    struct CGPoint _dragClickInitial;
    struct CGPoint _dragClickCurrent;
    struct CGPoint _dragClickOffset;
    struct CGRect _trackingTabDragFrame;
}

@property(readonly) vector_51cfce5f *tabs; // @synthesize tabs=_tabs;
@property(nonatomic) _Bool plusButtonAcceptingDrop; // @synthesize plusButtonAcceptingDrop=_plusButtonAcceptingDrop;
@property(nonatomic) int plusTrackState; // @synthesize plusTrackState=_plusTrackState;
@property(nonatomic) double tabWidthOnCloseBoxClick; // @synthesize tabWidthOnCloseBoxClick=_tabWidthOnCloseBoxClick;
@property(nonatomic) TNSRef_720ff929 tabMouseOverTab; // @synthesize tabMouseOverTab=_tabMouseOverTab;
@property(nonatomic) TNSRef_720ff929 tabTrackingCloseButtonMouseOver; // @synthesize tabTrackingCloseButtonMouseOver=_tabTrackingCloseButtonMouseOver;
@property(nonatomic) TNSRef_720ff929 tabTrackingCloseButtonClick; // @synthesize tabTrackingCloseButtonClick=_tabTrackingCloseButtonClick;
@property(nonatomic) int closeButtonState; // @synthesize closeButtonState=_closeButtonState;
@property(nonatomic) _Bool springingTabNow; // @synthesize springingTabNow=_springingTabNow;
@property(nonatomic) _Bool springBlinkOff; // @synthesize springBlinkOff=_springBlinkOff;
@property(nonatomic) long long tabAcceptingDropIndex; // @synthesize tabAcceptingDropIndex=_tabAcceptingDropIndex;
@property(nonatomic) TNSRef_720ff929 buildingContextMenuForTab; // @synthesize buildingContextMenuForTab=_buildingContextMenuForTab;
@property(nonatomic) struct CGRect trackingTabDragFrame; // @synthesize trackingTabDragFrame=_trackingTabDragFrame;
@property(nonatomic) TNSRef_720ff929 trackingTabDrag; // @synthesize trackingTabDrag=_trackingTabDrag;
@property(nonatomic) long long ghostTabIndex; // @synthesize ghostTabIndex=_ghostTabIndex;
@property(nonatomic) struct CGPoint dragClickOffset; // @synthesize dragClickOffset=_dragClickOffset;
@property(nonatomic) struct CGPoint dragClickCurrent; // @synthesize dragClickCurrent=_dragClickCurrent;
@property(nonatomic) struct CGPoint dragClickInitial; // @synthesize dragClickInitial=_dragClickInitial;
@property(nonatomic) _Bool animatingTabInsertion; // @synthesize animatingTabInsertion=_animatingTabInsertion;
@property(nonatomic) _Bool handlingTornOutDrag; // @synthesize handlingTornOutDrag=_handlingTornOutDrag;
@property(nonatomic) _Bool suppressAnimation; // @synthesize suppressAnimation=_suppressAnimation;
@property(nonatomic) _Bool trackingDrag; // @synthesize trackingDrag=_trackingDrag;
@property(nonatomic) _Bool trackingTabClick; // @synthesize trackingTabClick=_trackingTabClick;
@property(nonatomic) _Bool isMergingTabs; // @synthesize isMergingTabs=_isMergingTabs;
@property(nonatomic) _Bool tearingDown; // @synthesize tearingDown=_tearingDown;
@property TTabViewController *delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)draggingEnded:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (void)getAnyDropContainers:(struct TFENodeVector *)arg1 fromDropOp:(struct TDropOperation *)arg2;
- (_Bool)anyDropContainersInDrop:(struct TDropOperation *)arg1;
- (void)updateDragOverPlusButton:(_Bool)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (_Bool)mouseDragOverPlusRect:(id)arg1;
- (long long)mouseDragOverRectIndex:(id)arg1;
- (void)draggingSession:(id)arg1 endedAtPoint:(struct CGPoint)arg2 operation:(unsigned long long)arg3;
- (_Bool)_wantsUserCancelledOperation;
- (void)draggingSession:(id)arg1 movedToPoint:(struct CGPoint)arg2;
- (id)browserWindowUnderDrag:(struct CGPoint)arg1;
- (unsigned long long)draggingSession:(id)arg1 sourceOperationMaskForDraggingContext:(long long)arg2;
- (void)moveTab:(id)arg1 to:(long long)arg2;
- (void)clearDragState;
- (_Bool)tabDropped:(id)arg1;
- (_Bool)tabDragged:(id)arg1;
- (void)updateDragImageForBrowserWindow:(id)arg1;
- (void)updateDraggingItemsForDrag:(id)arg1;
- (void)beginDragSession:(id)arg1 forTab:(id)arg2 tabRect:(struct CGRect)arg3;
- (void)setTabDragImage:(id)arg1 tabView:(id)arg2;
- (void)setWindowDragImage:(id)arg1 window:(id)arg2 size:(struct CGSize)arg3;
- (struct CGImage *)copyWindowShadowImage;
- (struct TFENode)tabTarget:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)viewWillDraw;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setBoundsSize:(struct CGSize)arg1;
- (int)closeButtonDrawStateForTab:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)trackMouseOverTab:(id)arg1;
- (void)trackMouseOverTabAtPoint:(struct CGPoint)arg1;
- (void)trackCloseBox:(id)arg1;
- (void)trackCloseBoxAtPoint:(struct CGPoint)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (_Bool)clickCouldScroll:(id)arg1 hitTabFullFrame:(struct CGRect)arg2 hitTabClippedFrame:(struct CGRect)arg3;
- (struct CGRect)selectedTabRect;
- (id)tabAcceptingSpringDrop;
- (id)tabForVisibleIndex:(long long)arg1;
- (long long)selectedTabFrameIndex;
- (void)selectTabViewItemAtIndex:(long long)arg1;
- (void)selectTabViewItem:(id)arg1;
- (void)plusButtonClicked;
- (struct CGRect)plusButtonFrame;
- (void)closeTab:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (struct CGRect)tabFrame:(id)arg1;
- (long long)mouseOverRectIndex:(struct CGPoint)arg1;
- (void)updateTabFramesAnimatingSelectedTab:(_Bool)arg1;
- (void)synchAnimateTabFrame:(long long)arg1;
- (void)updateTabClipping:(_Bool)arg1;
- (void)updateCoverLayersForActiveTabFrame:(struct CGRect)arg1;
- (void)setInverseClip:(struct CGRect)arg1 forTab:(id)arg2;
- (void)setVisibleClip:(struct CGRect)arg1 forTab:(id)arg2;
- (void)scrollToRevealTab:(id)arg1 visFrame:(struct CGRect)arg2;
- (void)scrollBy:(double)arg1;
- (void)clipViewBoundsChanged;
- (struct CGRect)contentViewBounds;
- (void)updateAndInvalidateDraggedSelectedTabFrame;
- (void)getTabRectsForTabCount:(long long)arg1 proposedRects:(vector_b8c73e0a *)arg2;
- (struct CGRect)expandedTabExtent;
- (void)getClippedTabRects:(vector_b8c73e0a *)arg1;
- (void)getTabRects:(vector_b8c73e0a *)arg1;
- (struct CGRect)unroundedDefaultTabViewItemRectForTabCount:(long long)arg1;
- (long long)visibleTabCount;
- (long long)numberOfTabFrames;
- (long long)tabIndexToTabFrameIndex:(long long)arg1;
- (long long)tabFrameIndexToTabIndex:(long long)arg1;
- (void)swapTab:(long long)arg1 with:(long long)arg2;
- (void)removeTabViewItem:(id)arg1;
- (struct CGRect)coverLayerShrinkToFrame:(long long)arg1;
- (struct CGRect)coverLayerFrame:(long long)arg1;
- (void)insertTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addAndActivateTabViewItem:(id)arg1 atIndex:(long long)arg2;
- (void)addTabViewItem:(id)arg1;
- (void)addedTab:(id)arg1 atIndex:(long long)arg2;
- (void)configureLayerForTab:(id)arg1;
- (_Bool)windowIsActive;
- (id)tabContainer;
- (id)controller;
- (void)_windowChangedKeyState;
- (id)tabViewItemAtIndex:(long long)arg1;
- (long long)indexOfTabViewItem:(id)arg1;
- (void)setSelectedTabViewItem:(id)arg1;
@property(readonly) TTabViewItem *selectedTabViewItem; // @dynamic selectedTabViewItem;
@property(readonly) long long numberOfTabViewItems; // @dynamic numberOfTabViewItems;
- (BOOL)mouseDownCanMoveWindow;
- (BOOL)isOpaque;
- (_Bool)layersShouldDraw;
- (void)setNeedsDisplay;
- (BOOL)isFlipped;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

