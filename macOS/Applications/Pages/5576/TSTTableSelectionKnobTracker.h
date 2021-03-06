//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSTTableKnobTracker.h"

#import "TSTTableKnobTrackerExtendedProtocol-Protocol.h"

@class NSString, TSTTableRep;

@interface TSTTableSelectionKnobTracker : TSTTableKnobTracker <TSTTableKnobTrackerExtendedProtocol>
{
    struct TSUCellRect mKnobTrackInitialCellRange;
    long long mKnobTrackInitialSelectionType;
    struct TSUCellCoord mKnobTrackInitialSelectionOrigin;
    struct TSUCellRect mKnobTrackCurrentSelection;
    BOOL mAlreadyDidCommitWork;
    struct CGPoint mLastTouchPoint;
    TSTTableRep *mLastTableRep;
    BOOL mFillKnob;
    BOOL mExtendingSelectionIntoNewRep;
    BOOL mTableIsLeftToRight;
}

+ (id)initialSelectionForTableRep:(id)arg1 knob:(id)arg2;
@property(readonly, nonatomic) struct TSUCellRect initialCellRange; // @synthesize initialCellRange=mKnobTrackInitialCellRange;
- (struct CGRect)currentBoundsForStandardKnobsAndCellRange:(struct TSUCellRect *)arg1;
- (BOOL)wantsContextMenuAfterDrag;
- (struct CGRect)currentBoundsForStandardKnobs;
@property(readonly, nonatomic) struct TSUCellRect currentBoundsCellRange;
- (BOOL)allowHUDToDisplay;
- (BOOL)shouldEndControlCellEditingOnBeginMovingKnob;
- (BOOL)shouldHideSelectionHighlight;
- (BOOL)shouldHideOtherKnobs;
- (void)endMovingKnob;
- (id)selectionPathToTable:(id)arg1 withCellSelection:(id)arg2 adjustedForControlCell:(BOOL)arg3;
- (struct TSUCellRect)newCellRangeForProposedCellRange:(struct TSUCellRect)arg1;
- (void)updateCurrentCellRange:(struct TSUCellRect)arg1;
- (void)moveKnobToRepPosition:(struct CGPoint)arg1;
- (void)beginMovingKnob;
@property(readonly, nonatomic) struct TSUCellRect currentCellRange;
- (BOOL)operationShouldBeDynamic;
- (id)tableKnob;
- (id)tableRep;
- (void)p_updateSelectionOrigin;
- (id)initWithRep:(id)arg1 knob:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

