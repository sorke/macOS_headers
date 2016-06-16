//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TClipController.h"

#import "TCoalescingNodeObserverProtocol.h"

@class NSButton, NSString;

@interface TClippingController : TClipController <TCoalescingNodeObserverProtocol>
{
    struct TFENode _node;
    _Bool _allowInteraction;
    shared_ptr_3b64c573 _zoomOrigin;
    NSButton *_closeButton;
}

+ (void)restoreWindowWithIdentifier:(id)arg1 state:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)showClippingForNode:(const struct TFENode *)arg1 allowInteraction:(_Bool)arg2 fromZoomOrigin:(shared_ptr_3b64c573)arg3;
+ (id)pasteboardFromClippingURL:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)window:(id)arg1 willEncodeRestorableState:(id)arg2;
- (void)nodeObserver:(struct TNodeObserver *)arg1 nodeDeleted:(const struct TFENode *)arg2 fromObservedNode:(const struct TFENode *)arg3;
- (id)templateStatusString;
- (struct TFENode)fetchWindowProxyNode;
- (void)close;
- (void)closeButtonClicked;
- (void)windowWillClose:(id)arg1;
- (void)windowDidLoad;
- (id)initWithNode:(const struct TFENode *)arg1 allowInteraction:(_Bool)arg2 fromZoomOrigin:(shared_ptr_3b64c573)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

