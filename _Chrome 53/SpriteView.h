//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class CALayer;

@interface SpriteView : NSView
{
    struct scoped_nsobject<CAKeyframeAnimation> spriteAnimation_;
    CALayer *imageLayer_;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)setImage:(id)arg1 withToastAnimation:(BOOL)arg2;
- (void)setImage:(id)arg1;
- (void)updateAnimation:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

