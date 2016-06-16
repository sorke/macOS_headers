//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TabDraggingEventTarget.h"

@class NSWindow, TabController, TabStripController, TabWindowController;

@interface TabStripDragController : NSObject <TabDraggingEventTarget>
{
    TabStripController *tabStrip_;
    BOOL moveWindowOnDrag_;
    BOOL tabWasDragged_;
    BOOL draggingWithinTabStrip_;
    BOOL chromeIsVisible_;
    double tearTime_;
    struct CGPoint tearOrigin_;
    struct CGPoint dragOrigin_;
    TabWindowController *sourceController_;
    NSWindow *sourceWindow_;
    struct CGRect sourceWindowFrame_;
    struct CGRect sourceTabFrame_;
    TabController *draggedTab_;
    TabWindowController *draggedController_;
    NSWindow *dragWindow_;
    NSWindow *dragOverlay_;
    TabWindowController *targetController_;
    double horizDragOffset_;
}

@property(readonly) TabController *draggedTab; // @synthesize draggedTab=draggedTab_;
- (void)setWindowBackgroundVisibility:(BOOL)arg1;
- (id)dropTargetsForController:(id)arg1;
- (void)resetDragControllers;
- (BOOL)canDragSelectedTabs;
- (id)selectedTabViews;
- (void)endDrag:(id)arg1;
- (void)continueDrag:(id)arg1;
- (void)maybeStartDrag:(id)arg1 forTab:(id)arg2;
- (void)dealloc;
- (id)initWithTabStripController:(id)arg1;

@end

