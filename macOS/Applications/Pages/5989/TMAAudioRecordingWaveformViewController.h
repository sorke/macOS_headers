//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "TMAAudioRecordingWaveformSelectionViewDelegate-Protocol.h"
#import "TMAAudioRecordingWaveformViewAccessibilityDelegate-Protocol.h"
#import "TSAAudioRecordingWaveformScrollViewDelegate-Protocol.h"
#import "TSRCWaveformDataSourceObserver-Protocol.h"

@class NSBox, NSDate, NSString, NSTimer, TMAAudioRecordingChronologicalAnnotationView, TMAAudioRecordingWaveformSelectionView, TMAAudioRecordingWaveformView, TSAAudioRecordingWaveformAnimator, TSAAudioRecordingWaveformRenderer, TSAAudioRecordingWaveformScrollView, TSKDisplayLink, TSRCAVState, TSRCWaveformDataSource;
@protocol TMAAudioRecordingWaveformViewControllerDelegate;

@interface TMAAudioRecordingWaveformViewController : NSViewController <TMAAudioRecordingWaveformSelectionViewDelegate, TMAAudioRecordingWaveformViewAccessibilityDelegate, TSAAudioRecordingWaveformScrollViewDelegate, TSRCWaveformDataSourceObserver>
{
    TMAAudioRecordingWaveformView *_waveformView;
    TSAAudioRecordingWaveformScrollView *_scrollView;
    TMAAudioRecordingWaveformSelectionView *_selectionView;
    TMAAudioRecordingChronologicalAnnotationView *_chronologicalAnnotationView;
    NSBox *_chronologicalAnnotationTopSeparatorView;
    NSBox *_chronologicalAnnotationBottomSeparatorView;
    TSAAudioRecordingWaveformAnimator *_waveformAnimator;
    TSAAudioRecordingWaveformRenderer *_waveformRenderer;
    CDStruct_73a5d3ca _visibleTimeRange;
    CDStruct_73a5d3ca _visibleTimeRangeBeforeSelectionTracking;
    double _lastScrubTime;
    double _currentTime;
    unsigned long long _currentTimeDisplayOptions;
    double _selectionZoomScaleFactor;
    double _selectionBeginTime;
    double _timeBeganAutoscrolling;
    NSTimer *_selectionOverlayAutoscrollTimer;
    double _selectionOverlayAutoscrollRateForSelectionTracking;
    double _selectionOverlayAutoscrollBaseDuration;
    TSKDisplayLink *_displayLink;
    double _lastDisplayLinkUpdateTime;
    struct {
        unsigned int alwaysAutoCenter:1;
        unsigned int autoscrolling:1;
        unsigned int autoscrollingBeginning:1;
        unsigned int autoscrollingPaused:1;
        unsigned int editing:1;
        unsigned int scrollViewNeedsScrollEnabled:1;
        unsigned int scrollViewNeedsUpdate:1;
        unsigned int scrubbing:1;
        unsigned int selectionViewNeedsLayout:1;
        unsigned int trackingSelectionBeginTimeIndicator:1;
        unsigned int trackingSelectionEndTimeIndicator:1;
        unsigned int waveformViewNeedsAnimation:1;
        unsigned int waveformViewNeedsUpdate:1;
    } _flags;
    NSDate *_lastWaveformValueAXValueAnnouncement;
    id <TMAAudioRecordingWaveformViewControllerDelegate> _delegate;
    TSRCWaveformDataSource *_dataSource;
    TSRCAVState *_AVState;
    double _duration;
    CDStruct_73a5d3ca _selectedTimeRange;
    struct CGSize _scrollerSize;
}

@property(readonly, nonatomic) struct CGSize scrollerSize; // @synthesize scrollerSize=_scrollerSize;
@property(readonly, nonatomic) CDStruct_c3b9c2ee visibleTimeRange; // @synthesize visibleTimeRange=_visibleTimeRange;
@property(readonly, nonatomic) CDStruct_c3b9c2ee selectedTimeRange; // @synthesize selectedTimeRange=_selectedTimeRange;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) TSRCAVState *AVState; // @synthesize AVState=_AVState;
@property(retain, nonatomic) TSRCWaveformDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <TMAAudioRecordingWaveformViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidChangeContentOffset:(id)arg1;
- (void)scrollView:(id)arg1 willChangeContentOffset:(struct CGPoint)arg2;
- (id)audioRecordingWaveformViewAccessibilityValue:(id)arg1;
- (double)waveformSelectionView:(id)arg1 timeForOffset:(double)arg2;
- (double)waveformSelectionView:(id)arg1 offsetForTime:(double)arg2;
- (CDStruct_c3b9c2ee)waveformSelectionView:(id)arg1 willChangeToSelectedTimeRange:(CDStruct_c3b9c2ee)arg2;
- (double)waveformSelectionView:(id)arg1 willChangeToAssetCurrentTime:(double)arg2;
- (BOOL)waveformSelectionViewCanHideSelectionTimeIndicators:(id)arg1;
- (void)waveformSelectionView:(id)arg1 didEndTrackingBeginTimeIndicator:(BOOL)arg2 currentTimeIndicator:(BOOL)arg3 endTimeIndicator:(BOOL)arg4;
- (void)waveformSelectionView:(id)arg1 willBeginTrackingBeginTimeIndicator:(BOOL)arg2 currentTimeIndicator:(BOOL)arg3 endTimeIndicator:(BOOL)arg4;
- (void)waveformDataSource:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformDataSourceDidFinishLoading:(id)arg1;
- (void)speakWaveformViewScrubTimeIfNeeded;
- (struct NSColor *)currentTimeIndicatorColorForRecording:(BOOL)arg1;
- (void)updateViewWithDisplayScale:(double)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)displayLinkDidUpdate:(id)arg1;
- (double)overviewUnitsPerSecondForScaleFactor:(double)arg1 visibleTimeRange:(CDStruct_c3b9c2ee)arg2;
- (double)timeAtHorizontalOffset:(double)arg1 visibleTimeRange:(CDStruct_c3b9c2ee)arg2;
- (double)horizontalOffsetAtTime:(double)arg1 visibleTimeRange:(CDStruct_c3b9c2ee)arg2;
- (double)pointsPerSecondForVisibleTimeRange:(CDStruct_c3b9c2ee)arg1;
- (double)pointsPerSecondForLength:(double)arg1 timeRange:(CDStruct_c3b9c2ee)arg2;
- (void)autoscrollSelection;
- (void)setNeedsWaveformViewAnimation:(BOOL)arg1;
- (void)updateCurrentTimeDisplayAnimated:(BOOL)arg1;
- (unsigned long long)currentTimeDisplayOptions;
- (void)updateSelectionViewAnimated:(BOOL)arg1;
- (BOOL)isScrubbingSelectionTimeRange;
- (CDStruct_c3b9c2ee)visibleTimeRangeForCurrentSelectionTimeRange;
- (CDStruct_c3b9c2ee)visibleTimeRange:(CDStruct_c3b9c2ee)arg1 adjustedByInsets:(struct NSEdgeInsets)arg2;
- (void)setVisibleTimeRange:(CDStruct_c3b9c2ee)arg1 animated:(BOOL)arg2;
- (void)setSelectedTimeRange:(CDStruct_c3b9c2ee)arg1 animated:(BOOL)arg2;
- (void)stopScrollingScrollView:(id)arg1;
- (void)updateScrollViewContentSize;
- (void)setAutoscrolling:(BOOL)arg1;
@property(readonly, nonatomic) BOOL autoscrolling;
- (void)pauseAutoscrolling;
- (void)resumeAutoscrolling;
- (void)endAutoscrolling;
- (void)beginAutoscrollingAtTime:(double)arg1 rate:(double)arg2;
- (void)stopScrollingIfNeeded;
- (void)resumeScrollingInteractions;
- (void)suspendScrollingInteractions;
@property(readonly, nonatomic) struct NSEdgeInsets selectionInsets;
@property(readonly, nonatomic) double fontSize;
@property(nonatomic) BOOL chronologicalAnnotationsHidden;
@property(nonatomic) BOOL alwaysAutoCenter;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)isEditing;
- (void)viewWillTransitionToSize:(struct CGSize)arg1;
- (void)viewWillLayout;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

