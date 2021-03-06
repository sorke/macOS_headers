//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindowController.h>

#import "CloudCallingJavascriptControllerDelegate-Protocol.h"
#import "WebFrameLoadDelegate-Protocol.h"

@class CloudCallingJavascriptController, NSButton, NSData, NSProgressIndicator, NSString, NSURL, NSView, WebView;

@interface FTPreferencesWebWindowController : NSWindowController <CloudCallingJavascriptControllerDelegate, WebFrameLoadDelegate>
{
    NSView *_containerView;
    NSButton *_cancelButton;
    WebView *_webView;
    CloudCallingJavascriptController *_javascriptController;
    CDUnknownBlockType _completionBlock;
    NSURL *_url;
    NSData *_body;
    NSProgressIndicator *_progressIndicator;
}

@property(retain, nonatomic) NSProgressIndicator *progressIndicator; // @synthesize progressIndicator=_progressIndicator;
@property(retain, nonatomic) NSData *body; // @synthesize body=_body;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(retain) CloudCallingJavascriptController *javascriptController; // @synthesize javascriptController=_javascriptController;
@property(readonly) WebView *webView; // @synthesize webView=_webView;
@property __weak NSButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property __weak NSView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didClearWindowObject:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)provisioningTimedOut;
- (void)provisioningCanceled;
- (void)provisioningDone;
- (void)statusChanged:(id)arg1;
- (void)cancelButtonClicked:(id)arg1;
- (void)loadURL:(id)arg1 body:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadURL:(id)arg1 body:(id)arg2;
- (void)loadViewWithSpinner;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

