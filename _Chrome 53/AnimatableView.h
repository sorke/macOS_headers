//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Google Chrome Framework/BackgroundGradientView.h>

#import "NSAnimationDelegate.h"

@class NSString;

@interface AnimatableView : BackgroundGradientView <NSAnimationDelegate>
{
    id delegate_;
    struct scoped_nsobject<NSAnimation> currentAnimation_;
    id <ViewResizer> resizeDelegate_;
}

@property(nonatomic) id <ViewResizer> resizeDelegate; // @synthesize resizeDelegate=resizeDelegate_;
@property(nonatomic) id delegate; // @synthesize delegate=delegate_;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)animationDidEnd:(id)arg1;
- (void)animationDidStop:(id)arg1;
- (float)currentAnimationProgress;
- (void)stopAnimation;
- (void)animateToNewHeight:(double)arg1 duration:(double)arg2;
- (void)setHeight:(double)arg1;
- (double)height;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

