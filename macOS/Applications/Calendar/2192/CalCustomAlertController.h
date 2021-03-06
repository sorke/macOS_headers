//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSTouchBarProvider-Protocol.h"
#import "NSWindowDelegate-Protocol.h"

@class CALMainController, CalCustomAlertSegmentedControl, NSButton, NSString, NSTextField, NSTouchBar, NSWindow;

@interface CalCustomAlertController : NSObject <NSWindowDelegate, NSTouchBarProvider>
{
    BOOL _useAlternateControl;
    BOOL _displaying;
    BOOL _displayingAsSheet;
    NSWindow *_alertWindow;
    NSWindow *_window;
    NSButton *_okButton;
    NSButton *_cancelButton;
    NSButton *_alternateButton;
    CalCustomAlertSegmentedControl *_alternateControl;
    NSTextField *_title;
    NSTextField *_explanation;
    CALMainController *_mainController;
    CDUnknownBlockType _completionBlock;
    NSTouchBar *_touchBar;
    NSButton *_okTouchBarButton;
    NSButton *_cancelTouchBarButton;
    NSButton *_alternateTouchBarButton;
}

@property(retain) NSButton *alternateTouchBarButton; // @synthesize alternateTouchBarButton=_alternateTouchBarButton;
@property(retain) NSButton *cancelTouchBarButton; // @synthesize cancelTouchBarButton=_cancelTouchBarButton;
@property(retain) NSButton *okTouchBarButton; // @synthesize okTouchBarButton=_okTouchBarButton;
@property(retain, nonatomic) NSTouchBar *touchBar; // @synthesize touchBar=_touchBar;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property __weak CALMainController *mainController; // @synthesize mainController=_mainController;
@property BOOL displayingAsSheet; // @synthesize displayingAsSheet=_displayingAsSheet;
@property BOOL displaying; // @synthesize displaying=_displaying;
@property __weak NSTextField *explanation; // @synthesize explanation=_explanation;
@property __weak NSTextField *title; // @synthesize title=_title;
@property(nonatomic) BOOL useAlternateControl; // @synthesize useAlternateControl=_useAlternateControl;
@property __weak CalCustomAlertSegmentedControl *alternateControl; // @synthesize alternateControl=_alternateControl;
@property __weak NSButton *alternateButton; // @synthesize alternateButton=_alternateButton;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSButton *okButton; // @synthesize okButton=_okButton;
@property(retain) NSWindow *window; // @synthesize window=_window;
@property(retain) NSWindow *alertWindow; // @synthesize alertWindow=_alertWindow;
- (void).cxx_destruct;
- (void)alternateControlClicked:(id)arg1;
- (void)alternateButtonClicked:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)okButtonClicked:(id)arg1;
- (void)displaySheetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (long long)displayAlert;
- (void)updateTouchBarButton:(id)arg1 forAlertButton:(id)arg2;
- (void)updateTouchBar;
- (double)preferredWidthForButton:(id)arg1;
- (id)initWithController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

