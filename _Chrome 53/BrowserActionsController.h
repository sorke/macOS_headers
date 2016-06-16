//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HasWeakBrowserPointer.h"
#import "NSMenuDelegate.h"

@class BrowserActionsContainerView, NSString, ToolbarActionsBarBubbleMac;

@interface BrowserActionsController : NSObject <NSMenuDelegate, HasWeakBrowserPointer>
{
    struct Browser *browser_;
    BrowserActionsContainerView *containerView_;
    scoped_nsobject_9420f295 buttons_;
    struct unique_ptr<ToolbarActionsBarDelegate, std::__1::default_delete<ToolbarActionsBarDelegate>> toolbarActionsBarBridge_;
    struct unique_ptr<ToolbarActionsBar, std::__1::default_delete<ToolbarActionsBar>> toolbarActionsBar_;
    BOOL isOverflow_;
    ToolbarActionsBarBubbleMac *activeBubble_;
    long long focusedViewIndex_;
}

@property(readonly, nonatomic) ToolbarActionsBarBubbleMac *activeBubble; // @synthesize activeBubble=activeBubble_;
@property(readonly, nonatomic) BOOL isOverflow; // @synthesize isOverflow=isOverflow_;
@property(readonly, nonatomic) struct Browser *browser; // @synthesize browser=browser_;
@property(readonly, nonatomic) BrowserActionsContainerView *containerView; // @synthesize containerView=containerView_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)buttonWithIndex:(unsigned long long)arg1;
- (void)setFocusedViewIndex:(long long)arg1;
- (void)bubbleWindowClosing:(id)arg1;
- (void)createMessageBubble:(unique_ptr_542e4e25)arg1;
- (id)toolbarController;
- (void)updateGrippyCursors;
- (BOOL)browserActionClicked:(id)arg1;
- (void)moveButton:(id)arg1 toIndex:(unsigned long long)arg2;
- (struct CGPoint)popupPointForView:(id)arg1 withBounds:(struct CGRect)arg2;
- (struct CGRect)frameForIndex:(unsigned long long)arg1;
- (void)actionButtonDragFinished:(id)arg1;
- (void)actionButtonDragging:(id)arg1;
- (void)containerKeyEvent:(id)arg1;
- (void)containerAnimationEnded:(id)arg1;
- (void)containerDragFinished:(id)arg1;
- (void)containerDragStart:(id)arg1;
- (void)containerFrameChanged:(id)arg1;
- (id)buttonAtIndex:(unsigned long long)arg1;
- (id)buttonForId:(const basic_string_805fe43b *)arg1;
- (void)updateButtonPositions;
- (void)updateButtonOpacity;
- (BOOL)updateContainerVisibility;
- (void)resizeContainerToWidth:(double)arg1;
- (void)removeAllViews;
- (void)removeViewForAction:(struct ToolbarActionViewController *)arg1;
- (void)redraw;
- (void)addViewForAction:(struct ToolbarActionViewController *)arg1 withIndex:(unsigned long long)arg2;
- (struct Size)sizeForOverflowWidth:(int)arg1;
- (void)setFocusedInOverflow:(BOOL)arg1;
- (struct ToolbarActionsBar *)toolbarActionsBar;
- (id)mainButtonForId:(const basic_string_805fe43b *)arg1;
- (struct WebContents *)currentWebContents;
- (struct CGPoint)popupPointForId:(const basic_string_805fe43b *)arg1;
- (struct Size)preferredSize;
- (unsigned long long)visibleButtonCount;
- (unsigned long long)buttonCount;
- (void)update;
- (void)browserWillBeDestroyed;
- (void)dealloc;
- (id)initWithBrowser:(struct Browser *)arg1 containerView:(id)arg2 mainController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

