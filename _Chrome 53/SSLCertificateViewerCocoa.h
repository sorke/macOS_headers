//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ConstrainedWindowSheet.h"

@class NSString, NSWindow;

@interface SSLCertificateViewerCocoa : NSObject <ConstrainedWindowSheet>
{
    struct scoped_nsobject<NSArray> certificates_;
    struct unique_ptr<SSLCertificateViewerCocoaBridge, std::__1::default_delete<SSLCertificateViewerCocoaBridge>> observer_;
    struct scoped_nsobject<SFCertificatePanel> panel_;
    struct unique_ptr<ConstrainedWindowMac, std::__1::default_delete<ConstrainedWindowMac>> constrainedWindow_;
    struct scoped_nsobject<NSWindow> overlayWindow_;
    BOOL closePending_;
    struct CGRect oldSheetFrame_;
    struct CGSize oldOverlaySize_;
    BOOL oldResizesSubviews_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)onConstrainedWindowClosed;
@property(readonly, nonatomic) NSWindow *sheetWindow;
- (void)resizeWithNewSize:(struct CGSize)arg1;
- (void)updateSheetPosition;
- (void)makeSheetKeyAndOrderFront;
- (void)pulseSheet;
- (void)unhideSheet;
- (void)hideSheet;
- (void)closeSheetWithAnimation:(BOOL)arg1;
- (void)showSheetForWindow:(id)arg1;
- (id)overlayWindow;
- (void)displayForWebContents:(struct WebContents *)arg1;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 context:(void *)arg3;
- (id)initWithCertificate:(struct X509Certificate *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

