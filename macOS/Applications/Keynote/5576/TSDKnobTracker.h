//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TSDLayoutManipulatingTracker-Protocol.h"

@class NSSet, NSString, TSDAutoscroll, TSDInteractiveCanvasController, TSDKnob, TSDRep;

@interface TSDKnobTracker : NSObject <TSDLayoutManipulatingTracker>
{
    TSDRep *_rep;
    TSDKnob *_knob;
    struct CGPoint _currentPosition;
    struct CGPoint _knobOffset;
    BOOL _didBegin;
    BOOL _didDrag;
    BOOL _dragEnding;
    BOOL _endedOperationDueToESC;
    BOOL _isInspectorDrivenTracking;
    TSDAutoscroll *_autoscroll;
}

@property(retain, nonatomic) TSDAutoscroll *autoscroll; // @synthesize autoscroll=_autoscroll;
@property(readonly, nonatomic) struct CGPoint knobOffset; // @synthesize knobOffset=_knobOffset;
@property(readonly, nonatomic) BOOL endedOperationDueToESC; // @synthesize endedOperationDueToESC=_endedOperationDueToESC;
@property(nonatomic) BOOL dragEnding; // @synthesize dragEnding=_dragEnding;
@property(nonatomic) struct CGPoint currentPosition; // @synthesize currentPosition=_currentPosition;
@property(nonatomic) BOOL didDrag; // @synthesize didDrag=_didDrag;
@property(readonly, nonatomic) BOOL didBegin; // @synthesize didBegin=_didBegin;
@property(retain, nonatomic) TSDKnob *knob; // @synthesize knob=_knob;
@property(nonatomic) BOOL isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=_isInspectorDrivenTracking;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=_rep;
- (void).cxx_destruct;
- (BOOL)traceIfDesiredForEndOperation;
- (BOOL)traceIfDesiredForBeginOperation;
- (BOOL)operationShouldBeDynamic;
- (BOOL)supportsAlignmentGuides;
- (void)commitChangesForReps:(id)arg1;
- (BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (int)allowedAutoscrollDirections;
- (double)unscaledStartAutoscrollThreshold;
- (void)autoscrollWillNotStart;
- (void)updateAfterAutoscroll:(id)arg1;
- (BOOL)wantsAutoscroll;
- (BOOL)i_shouldForceDrag;
- (void)i_resetCurrentPositionToKnobPositionIfAppropriate;
- (void)i_setKnobOffset:(struct CGPoint)arg1;
- (BOOL)shouldClampKnobPositionToVisibleBounds;
- (void)willEndMovingKnobDueToESC;
- (BOOL)shouldEndMovingKnobOnESC;
- (BOOL)shouldUseKnobOffset;
- (BOOL)allowHUDToDisplay;
- (BOOL)shouldHideSelectionHighlight;
- (BOOL)shouldHideOtherKnobs;
- (unsigned long long)enabledKnobMask;
- (struct CGAffineTransform)transformInRootForStandardKnobs;
- (struct CGRect)currentBoundsForStandardKnobs;
- (void)endMovingKnob;
- (void)beginMovingKnob;
- (struct CGPoint)convertKnobPositionFromUnscaledCanvas:(struct CGPoint)arg1;
- (struct CGPoint)convertKnobPositionToUnscaledCanvas:(struct CGPoint)arg1;
- (void)moveKnobToCanvasPosition:(struct CGPoint)arg1;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
@property(readonly, nonatomic) double delay;
@property(readonly, nonatomic) NSSet *repsToTransform;
@property(readonly, nonatomic) TSDInteractiveCanvasController *icc;
- (void)dealloc;
- (id)init;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

