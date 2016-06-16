//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BaseBubbleController.h>

@interface ZoomBubbleController : BaseBubbleController
{
    struct ZoomBubbleControllerDelegate *delegate_;
    BOOL autoClose_;
    scoped_nsobject_0ef9b51e zoomPercent_;
    BOOL isMouseInside_;
    struct ScopedCrTrackingArea trackingArea_;
}

@property(nonatomic) struct ZoomBubbleControllerDelegate *delegate; // @synthesize delegate=delegate_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)zoomHelper:(int)arg1;
- (void)updateAutoCloseTimer;
- (id)addZoomPercentTextField;
- (id)addButtonWithTitleID:(int)arg1 fontSize:(double)arg2 action:(SEL)arg3;
- (id)attributedStringWithString:(id)arg1 fontSize:(double)arg2;
- (void)autoCloseBubble;
- (void)performLayout;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)windowWillClose:(id)arg1;
- (void)closeWithoutAnimation;
- (void)zoomOut:(id)arg1;
- (void)zoomIn:(id)arg1;
- (void)resetToDefault:(id)arg1;
- (void)onZoomChanged;
- (void)showAnchoredAt:(struct CGPoint)arg1 autoClose:(BOOL)arg2;
- (id)initWithParentWindow:(id)arg1 delegate:(struct ZoomBubbleControllerDelegate *)arg2;

@end

