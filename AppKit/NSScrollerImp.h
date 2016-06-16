//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAFilter, CALayer, NSScroller, NSTrackingArea, _NSScrollerGaussianBlur;

@interface NSScrollerImp : NSObject
{
    NSScroller *scroller;
    double doubleValue;
    double knobProportion;
    double knobLength;
    struct CGSize boundsSize;
    id <NSScrollerImpDelegate> delegate;
    id target;
    SEL action;
    double _uiStateTransitionProgress;
    double _expansionTransitionProgress;
    double trackAlpha;
    double knobAlpha;
    double rangeIndicatorAlpha;
    NSTrackingArea *contentViewTrackingArea;
    char *outstandingRolloverAnimationCancelledPtr;
    _NSScrollerGaussianBlur *blur;
    struct _sImpFlags {
        unsigned int isHoriz:1;
        unsigned int arrowsLoc:2;
        unsigned int partsUsable:2;
        unsigned int fine:1;
        unsigned int needsEnableFlush:1;
        unsigned int thumbing:1;
        unsigned int slotDrawn:1;
        unsigned int knobDrawn:1;
        unsigned int lit:1;
        unsigned int knobLit:1;
        unsigned int reserved:1;
        unsigned int controlTint:3;
        unsigned int repeatCount:16;
    } sFlags;
    struct __sImpFlags2 {
        unsigned int hitPart:4;
        unsigned int controlSize:2;
        unsigned int inMaxEnd:1;
        unsigned int setFloatValueOverridden:1;
        unsigned int setFloatValueKnobProportionOverridden:1;
        unsigned int style:1;
        unsigned int overlayScrollerState:2;
        unsigned int enabled:1;
        unsigned int avoidingOtherScrollerThumb:1;
        unsigned int tracking:1;
        unsigned int rangeIndicatorsShown:1;
        unsigned int knobStyle:2;
        unsigned int shouldDrawRolloverState:1;
        unsigned int isExpanded:1;
        unsigned int rectForPartUsesExpandedParts:1;
        unsigned int rectForPartUsesPresentationValue:1;
        unsigned int usePresentationValue:1;
        unsigned int reserved:10;
    } _sFlags2;
    CALayer *layer;
    CALayer *trackLayer;
    CALayer *knobLayer;
    CAFilter *_blurFilter;
    double presentationValue;
}

+ (double)scrollerWidth;
+ (double)scrollerWidthForControlSize:(unsigned long long)arg1 scrollerStyle:(long long)arg2;
+ (id)scrollerImpWithStyle:(long long)arg1 controlSize:(unsigned long long)arg2 horizontal:(BOOL)arg3 replacingScrollerImp:(id)arg4;
+ (Class)scrollerImpClassForStyle:(long long)arg1 controlSize:(unsigned long long)arg2;
@property SEL action; // @synthesize action;
@property id target; // @synthesize target;
@property id <NSScrollerImpDelegate> delegate; // @synthesize delegate;
@property NSScroller *scroller; // @synthesize scroller;
@property double rangeIndicatorAlpha; // @synthesize rangeIndicatorAlpha;
@property double uiStateTransitionProgress; // @synthesize uiStateTransitionProgress=_uiStateTransitionProgress;
@property(readonly) double knobLength; // @synthesize knobLength;
- (void)mouseExitedScroller;
- (void)mouseEnteredScroller;
- (void)_installDelayedRolloverAnimation;
- (void)_animateOutOfRolloverState;
- (void)_animateToRolloverState;
- (void)_animateCollapse;
- (void)_animateExpansion;
- (struct CGRect)_rolloverTrackingRect;
- (void)removeTrackingAreas;
- (void)updateTrackingAreas;
- (void)drawKnobWithAlpha:(double)arg1;
- (void)drawKnob;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2 alpha:(double)arg3;
- (void)drawKnobSlotInRect:(struct CGRect)arg1 highlight:(BOOL)arg2;
- (void)_compositeScrollerPart:(unsigned long long)arg1 inRect:(struct CGRect)arg2 withAlpha:(double)arg3 drawHandler:(CDUnknownBlockType)arg4;
- (id)_vibrancyFilterForAppearance:(id)arg1;
- (BOOL)allowsVibrancyForAppearance:(id)arg1;
- (struct __CFDictionary *)copyCoreUITrackOptions;
- (struct __CFDictionary *)copyCoreUIKnobOptions;
- (struct __CFDictionary *)copyCoreUIOptions;
- (void)loadImages;
- (BOOL)hitTestForLocalPoint:(struct CGPoint)arg1;
- (struct CGRect)_unsafeRectForPart:(unsigned long long)arg1;
- (struct CGRect)_threadsafeRectForPart:(unsigned long long)arg1 preBlock:(CDUnknownBlockType)arg2 postBlock:(CDUnknownBlockType)arg3;
- (struct CGRect)rectForPart:(unsigned long long)arg1;
- (unsigned long long)usableParts;
- (void)checkSpaceForParts;
- (double)knobInset;
@property(readonly) double trackOverlapEndInset;
@property(readonly) double knobOverlapEndInset;
@property(readonly) double knobMinLength;
- (double)_expandedKnobMinLength;
@property(readonly) double knobEndInset;
@property(readonly) double trackEndInset;
@property(readonly) double trackSideInset;
- (double)_expandedTrackWidth;
@property(readonly) double trackWidth;
- (double)_expandedTrackBoxWidth;
@property(readonly) double trackBoxWidth;
- (void)setOverlayScrollerState:(unsigned long long)arg1 forceImmediately:(BOOL)arg2;
- (void)_doWork:(CDUnknownBlockType)arg1;
- (unsigned long long)overlayScrollerState;
@property(getter=isExpanded) BOOL expanded;
@property BOOL shouldDrawRolloverState;
- (void)setTracking:(BOOL)arg1;
- (BOOL)isTracking;
@property long long knobStyle;
@property(readonly) long long scrollerStyle;
@property(readonly) unsigned long long controlSize;
@property BOOL avoidingOtherScrollerThumb;
@property(getter=isHorizontal) BOOL horizontal;
@property(getter=isEnabled) BOOL enabled;
@property double knobAlpha;
@property double trackAlpha;
@property double expansionTransitionProgress;
@property double knobProportion;
@property(getter=shouldUsePresentationValue) BOOL usePresentationValue;
@property double presentationValue;
@property double doubleValue;
@property struct CGSize boundsSize;
@property(retain) CALayer *knobLayer;
@property(retain) CALayer *trackLayer;
- (void)setNeedsDisplayInRect:(struct CGRect)arg1;
- (void)setNeedsDisplay:(BOOL)arg1;
@property(retain) CALayer *layer;
- (id)_makeScrollerPartLayer;
- (void)_setupCommonLayerProperties:(id)arg1;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)layer:(id)arg1 shouldInheritContentsScale:(double)arg2 fromWindow:(id)arg3;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)_makeMaskLayer;
- (void)_updateKnobPresentation;
- (void)_updateLayerGeometry;
- (void)dealloc;
- (id)init;

@end

