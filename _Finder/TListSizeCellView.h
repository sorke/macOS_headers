//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TListCellView.h"

#import "TViewAnimationDelegate.h"

@class NSString, NSView, TInlineProgressBaseHostLayer;

@interface TListSizeCellView : TListCellView <TViewAnimationDelegate>
{
    NSView *_inlineProgressView;
    TInlineProgressBaseHostLayer *_inlineProgressLayer;
}

@property(retain, nonatomic) TInlineProgressBaseHostLayer *inlineProgressLayer; // @synthesize inlineProgressLayer=_inlineProgressLayer;
@property(retain, nonatomic) NSView *inlineProgressView; // @synthesize inlineProgressView=_inlineProgressView;
- (void)layout;
- (void)setBackgroundStyle:(long long)arg1;
- (void)tearDownInlineProgress;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)updateInlineProgressStateForNode:(const struct TFENode *)arg1;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (struct CGRect)progressFrameForCellBounds:(struct CGRect)arg1;
- (void)finalize;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

