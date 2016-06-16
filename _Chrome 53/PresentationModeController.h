//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSAnimationDelegate.h"

@class BrowserWindowController, NSString, NSView;

@interface PresentationModeController : NSObject <NSAnimationDelegate>
{
    BrowserWindowController *browserController_;
    NSView *contentView_;
    BOOL enteringPresentationMode_;
    BOOL inPresentationMode_;
    struct scoped_nsobject<NSTrackingArea> trackingArea_;
    struct scoped_nsobject<DropdownAnimation> currentAnimation_;
    struct scoped_nsobject<NSTimer> showTimer_;
    struct scoped_nsobject<NSTimer> hideTimer_;
    struct CGRect trackingAreaBounds_;
    int systemFullscreenMode_;
    int slidingStyle_;
    double menubarFraction_;
    double toolbarFraction_;
    struct OpaqueEventHandlerRef *menuBarTrackingHandler_;
}

@property(nonatomic) double toolbarFraction; // @synthesize toolbarFraction=toolbarFraction_;
@property(nonatomic) int slidingStyle; // @synthesize slidingStyle=slidingStyle_;
@property(readonly, nonatomic) BOOL inPresentationMode; // @synthesize inPresentationMode=inPresentationMode_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setMenuBarRevealProgress:(double)arg1;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (BOOL)isMainWindow;
- (double)menubarOffset;
- (void)changeToolbarFraction:(double)arg1;
- (void)setSystemFullscreenModeTo:(int)arg1;
- (void)cancelAnimationAndTimers;
- (void)ensureOverlayHiddenWithAnimation:(BOOL)arg1 delay:(BOOL)arg2;
- (void)ensureOverlayShownWithAnimation:(BOOL)arg1 delay:(BOOL)arg2;
- (void)overlayFrameChanged:(struct CGRect)arg1;
- (double)floatingBarVerticalOffset;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidMove:(id)arg1;
- (void)windowDidChangeScreen:(id)arg1;
- (void)exitPresentationMode;
- (void)enterPresentationModeForContentView:(id)arg1 showDropdown:(BOOL)arg2;
- (void)dealloc;
- (id)initWithBrowserController:(id)arg1 style:(int)arg2;
- (BOOL)shouldShowMenubarInImmersiveFullscreen;
- (void)hideActiveWindowUI;
- (void)showActiveWindowUI;
- (void)cleanup;
- (void)hideTimerFire:(id)arg1;
- (void)showTimerFire:(id)arg1;
- (void)cancelAllTimers;
- (void)cancelHideTimer;
- (void)cancelShowTimer;
- (void)startHideTimer;
- (void)startShowTimer;
- (void)checkForMouseExit;
- (void)cancelMouseExitCheck;
- (void)setupMouseExitCheck;
- (BOOL)mouseInsideTrackingRect;
- (void)removeTrackingAreaIfNecessary;
- (void)setupTrackingArea;
- (void)scheduleHideForMouse;
- (void)scheduleShowForMouse;
- (void)changeOverlayToFraction:(double)arg1 withAnimation:(BOOL)arg2;
- (int)desiredSystemFullscreenMode;
- (BOOL)isWindowOnPrimaryScreen;
- (BOOL)doesScreenHaveMenuBar;
- (void)updateMenuBarAndDockVisibility;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

